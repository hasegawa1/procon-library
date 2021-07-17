#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_5_A"

#include <iostream>
#include "../graph/breadth_first_search.cpp"
#include "../graph/dijkstra.cpp"
#include "../tree/diameter.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    WeightedGraph<int> g(n);
    for(int i=0; i<n-1; i++) {
        int s, t, w;
        cin >> s >> t >> w;
        g[s].emplace_back(t, w);
        g[t].emplace_back(s, w);
    }

    cout << diameter(g) << endl;
}
