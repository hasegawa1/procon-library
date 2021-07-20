/**
 * @brief 最小全域森（Kruskal）
 * @author hasegawa1
 */

#include <vector>
#include <tuple>
#include <algorithm>
#include <atcoder/dsu>

template<typename T>
using Edges = std::vector<std::tuple<int,int,T>>;

template<typename T>
struct MinimumSpanningForest {
    T cost = 0;
    Edges<T> edges;
};

template<typename T>
MinimumSpanningForest<T> kruskal(Edges<T> &edges, int N) {
    std::sort(edges.begin(), edges.end(), [](auto &lhs, auto &rhs) {
        return std::get<2>(lhs) < std::get<2>(rhs);
    });

    atcoder::dsu uf(N);
    MinimumSpanningForest<T> res;
    for(const auto [v, u, cost]: edges) {
        if(uf.same(u, v)) continue;
        uf.merge(u, v);
        res.cost += cost;
        res.edges.emplace_back(v, u, cost);
    }

    return res;
}
