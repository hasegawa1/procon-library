#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/challenges/sources/JOI/Final/0575"

#include <iostream>
#include <vector>
#include "atcoder/dsu"
#include "../graph/dijkstra.cpp"
#include "../graph/kruskal.cpp"
#include "../tree/LowestCommonAncestor.cpp"
#include "../other/Doubling.cpp"

using namespace std;
using namespace atcoder;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N, M, K, Q;
    cin >> N >> M >> K >> Q;
    vector<int> A(M), B(M), L(M), F(K);
    for(int j=0; j<M; j++) {
        cin >> A[j] >> B[j] >> L[j];
        --A[j]; --B[j];
    }
    for(int k=0; k<K; k++) {
        cin >> F[k];
        --F[k];
    }

    WeightedGraph<int> g(N);
    for(int j=0; j<M; j++) {
        g[A[j]].emplace_back(B[j], L[j]);
        g[B[j]].emplace_back(A[j], L[j]);
    }
    auto dist = dijkstra(g, F);

    vector<tuple<int,int,int>> edges;
    for(int j=0; j<M; j++) {
        edges.emplace_back(A[j], B[j], -min(dist[A[j]], dist[B[j]]));
    }
    auto mst = kruskal(edges, N).edges;

    WeightedGraph<int> tree(N);
    for(const auto [u, v, cost]: mst) {
        tree[v].emplace_back(u, 1);
        tree[u].emplace_back(v, 1);
    }
    LowestCommonAncestor lca(tree, 0);

    vector<int> next(N, -1), cost(N, 0);
    for(int i=1; i<N; i++) {
        next[i] = lca.parent(i);
    }
    for(const auto [u, v, c]: mst) {
        if(lca.depth(v) < lca.depth(u)) {
            cost[u] = -c;
        } else {
            cost[v] = -c;
        }
    }
    Doubling dbl(next, cost);

    while(Q--) {
        int S, T;
        cin >> S >> T;
        --S; --T;
        int l = lca(S, T);
        cout << min(dbl.min(S, lca.distance(S, l)), dbl.min(T, lca.distance(T, l))) << endl;
    }
    return 0;
}
