#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/challenges/sources/JOI/Final/0575"

#include <iostream>
#include <vector>
#include "../graph/dijkstra.cpp"
#include "../tree/LowestCommonAncestor.cpp"
#include "../other/Doubling.cpp"
#include "atcoder/dsu"

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

    WeightedGraph<int> tree(N);
    vector<tuple<int,int,int>> edges, mst;
    for(int j=0; j<M; j++) {
        edges.emplace_back(min(dist[A[j]], dist[B[j]]), A[j], B[j]);
    }
    sort(edges.rbegin(), edges.rend());
    dsu uf(N);
    for(const auto [cost, v, u]: edges) {
        if(uf.same(v, u)) continue;
        uf.merge(v, u);
        mst.emplace_back(cost, v, u);
        tree[v].emplace_back(u, 1);
        tree[u].emplace_back(v, 1);
    }

    LowestCommonAncestor lca(tree, 0);

    vector<int> next(N, -1), cost(N, 0);
    for(int i=1; i<N; i++) {
        next[i] = lca.parent(i);
    }
    for(const auto [c, v, u]: mst) {
        if(lca.depth(v) < lca.depth(u)) {
            cost[u] = c;
        } else {
            cost[v] = c;
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
