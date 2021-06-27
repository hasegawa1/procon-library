#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_1_C"

#include <iostream>
#include <algorithm>
#include "../graph/warshall_floyd.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int V, E;
    cin >> V >> E;
    vector<vector<int>> g(V, vector<int>(V, numeric_limits<int>::max()));
    for(int i=0; i<V; i++) {
        g[i][i] = 0;
    }
    for(int i=0; i<E; i++) {
        int s, t, d;
        cin >> s >> t >> d;
        g[s][t] = d;
    }

    auto dist = warshall_floyd(g);

    for(int i=0; i<V; i++) {
        if(dist[i][i] < 0) {
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }

    for(int i=0; i<V; i++) {
        for(int j=0; j<V; j++) {
            if(dist[i][j] == numeric_limits<int>::max()) {
                cout << "INF" << (j == V-1 ? '\n' : ' ');
            } else {
                cout << dist[i][j] << (j == V-1 ? '\n' : ' ');
            }
        }
    }
}
