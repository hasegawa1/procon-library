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
T kruskal(Edges<T> &edges, int N) {
    std::sort(edges.begin(), edges.end(), [](auto &lhs, auto &rhs) {
        return std::get<2>(lhs) < std::get<2>(rhs);
    });

    atcoder::dsu uf(N);
    T res = 0;
    for(const auto [v, u, cost]: edges) {
        if(uf.same(u, v)) continue;
        uf.merge(u, v);
        res += cost;
    }

    // if(uf.size(0) != N) return -1; // 全域木が構成できるか知りたいとき
    return res;
}
