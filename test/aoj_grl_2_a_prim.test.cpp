#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_2_A"

#include <iostream>
#include <algorithm>
#include "../graph/prim.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int V, E;
    cin >> V >> E;
    WeightedGraph<int> g(V);
    for(int i=0; i<E; i++) {
        int s, t, w;
        cin >> s >> t >> w;
        g[s].emplace_back(t, w);
        g[t].emplace_back(s, w);
    }

    cout << prim(g) << endl;
}
