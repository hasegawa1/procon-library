#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_2_A"

#include <iostream>
#include "../graph/shortest_hamilton_cycle.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int V, E;
    cin >> V >> E;
    vector<vector<int>> g(V, vector<int>(V, -1));
    for(int i=0; i<E; i++) {
        int s, t, d;
        cin >> s >> t >> d;
        g[s][t] = d;
    }

    cout << shortest_hamilton_cycle(g) << endl;
}
