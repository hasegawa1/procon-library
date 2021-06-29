#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_2_A"

#include <iostream>
#include "../graph/kruskal.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int V, E;
    cin >> V >> E;
    Edges<int> edges;
    for(int i=0; i<E; i++) {
        int s, t, w;
        cin >> s >> t >> w;
        edges.emplace_back(s, t, w);
    }

    cout << kruskal(edges, V) << endl;
}
