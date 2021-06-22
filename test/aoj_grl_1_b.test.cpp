#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_B"

#include <iostream>
#include <algorithm>
#include "../graph/bellman_ford.cpp"

using namespace std;

template<typename T>
using Edges = std::vector<std::tuple<int,int,T>>;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int V, E, r;
    cin >> V >> E >> r;

    Edges<int64_t> es;
    for(int i=0; i<E; i++) {
        int s, t, d;
        cin >> s >> t >> d;
        es.emplace_back(s, t, d);
    }

    auto dist = bellman_ford(es, V, r);
    if(count(dist.begin(), dist.end(), numeric_limits<int64_t>::min())) {
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }
    for(auto d: dist) {
        if(d == numeric_limits<int64_t>::max()) {
            cout << "INF" << endl;
        } else {
            cout << d << endl;
        }
    }
}
