#define PROBLEM "https://judge.yosupo.jp/problem/cycle_detection"

#include <iostream>
#include <vector>
#include <map>
#include "../graph/detect_cycle.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;
    vector<int> u(M), v(M);
    for(int i=0; i<M; i++) {
        cin >> u[i] >> v[i];
    }

    vector<vector<int>> g(N);
    for(int i=0; i<M; i++) {
        g[u[i]].emplace_back(v[i]);
    }

    auto cycle = detect_cycle(g);

    if(cycle.empty()) {
        cout << -1 << endl;
    } else {
        map<pair<int,int>, int> mp;
        for(int i=0; i<M; i++) {
            mp[make_pair(u[i], v[i])] = i;
        }
        int C = cycle.size();
        cout << C << endl;
        for(int j=0; j<C; j++) {
            cout << mp[make_pair(cycle[j], cycle[(j+1)%C])] << endl;
        }
    }
}
