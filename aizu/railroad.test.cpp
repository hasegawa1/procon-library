#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0275"

#include <iostream>
#include <vector>
#include <limits>
#include "../graph/dijkstra.cpp"
#include "../graph/offline_dag_reachability.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int S, R;
    cin >> S >> R;
    vector<int> u(R), v(R), w(R);
    for(int i=0; i<R; i++) {
        cin >> u[i] >> v[i] >> w[i];
        --u[i]; --v[i];
    }
    int a, b, Q;
    cin >> a >> b >> Q;
    --a; --b;
    vector<pair<int,int>> query(Q);
    for(auto &[s, t]: query) {
        cin >> s >> t;
        --s; --t;
    }

    WeightedGraph<int> g(S);
    for(int i=0; i<R; i++) {
        g[u[i]].emplace_back(v[i], w[i]);
        g[v[i]].emplace_back(u[i], w[i]);
    }

    auto da = dijkstra(g, a, numeric_limits<int>::max());
    auto db = dijkstra(g, b, numeric_limits<int>::max());

    vector<vector<int>> g2(S);
    for(int i=0; i<R; i++) {
        if(da[u[i]] + w[i] + db[v[i]] == da[b]) g2[u[i]].emplace_back(v[i]);
        if(da[v[i]] + w[i] + db[u[i]] == da[b]) g2[v[i]].emplace_back(u[i]);
    }

    for(auto e: offline_dag_reachability(g2, query)) {
        cout << (e ? "Yes" : "No") << endl;
    }
    return 0;
}
