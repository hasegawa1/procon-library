#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_A"

#include <iostream>
#include "../graph/dijkstra.cpp"

using namespace std;

template<typename T>
using WeightedGraph = std::vector<std::vector<std::pair<int,T>>>;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int V, E, r;
    cin >> V >> E >> r;

    WeightedGraph<int64_t> g(V);
    for(int i=0; i<E; i++) {
        int s, t, d;
        cin >> s >> t >> d;
        g[s].emplace_back(t, d);
    }

    for(const auto d: dijkstra(g, r)) {
        if(d == -1) {
            cout << "INF" << endl;
        } else {
            cout << d << endl;
        }
    }
}
