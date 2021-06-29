#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_11_C"

#include <iostream>
#include "../graph/breadth_first_search.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<vector<int>> g(n);
    for(int i=0; i<n; i++) {
        int v, k;
        cin >> v >> k;
        --v;
        for(int j=0; j<k; j++) {
            int u;
            cin >> u;
            --u;
            g[v].emplace_back(u);
        }
    }

    auto d = bfs(g, 0);
    for(int i=0; i<n; i++) {
        cout << i+1 << ' ' << d[i] << endl;
    }
}
