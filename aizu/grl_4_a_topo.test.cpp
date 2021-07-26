#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_4_A"

#include <iostream>
#include "../graph/topological_sort.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int V, E;
    cin >> V >> E;
    vector<vector<int>> g(V);
    for(int i=0; i<E; i++) {
        int s, t;
        cin >> s >> t;
        g[s].emplace_back(t);
    }

    cout << topological_sort(g).empty() << endl;
}
