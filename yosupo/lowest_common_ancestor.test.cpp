#define PROBLEM "https://judge.yosupo.jp/problem/lca"

#include <iostream>
#include <vector>
#include "../tree/LowestCommonAncestor.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N, Q;
    cin >> N >> Q;
    vector<vector<int>> g(N);
    for(int i=1; i<N; i++) {
        int p;
        cin >> p;
        g[p].emplace_back(i);
    }

    LowestCommonAncestor lca(g, 0);

    while(Q--) {
        int u, v;
        cin >> u >> v;
        cout << lca(u, v) << endl;
    }
}
