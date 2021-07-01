#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_5_C"

#include <iostream>
#include <vector>
#include "../tree/LowestCommonAncestor.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<vector<int>> g(n);
    for(int i=0; i<n; i++) {
        int k;
        cin >> k;
        while(k--) {
            int c;
            cin >> c;
            g[i].emplace_back(c);
        }
    }

    LowestCommonAncestor lca(g, 0);

    int q;
    cin >> q;
    while(q--) {
        int u, v;
        cin >> u >> v;
        cout << lca(u, v) << endl;
    }
}
