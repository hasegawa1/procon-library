/**
 * @brief 単一始点最短経路長（Bellman Ford）
 * @author hasegawa1
 */

#include <vector>
#include <tuple>

template<typename T>
using Edges = std::vector<std::tuple<int,int,T>>;

template<typename T>
std::vector<T> bellman_ford(const std::vector<std::tuple<int,int,T>> & edge_list, int N, int start) {
    constexpr T negative = numeric_limits<T>::min();
    constexpr T unreachable = numeric_limits<T>::max();
    std::vector<T> dist(N, unreachable);
    dist[start] = 0;

    for(int x=0; x<N-1; x++) {
        for(const auto [v, u, cost]: edge_list) {
            if(dist[v] == unreachable) continue;
            dist[u] = min(dist[u], dist[v] + cost);
        }
    }

    std::vector<T> dist2 = dist;
    std::vector<int> is_negative(N);
    for(int x=0; x<N; x++) {
        for(const auto [v, u, cost]: edge_list) {
            if(dist2[v] == unreachable) continue;
            if(dist2[v] + cost < dist2[u]) {
                dist2[u] = dist2[v] + cost;
                is_negative[u] = 1;
            }
            if(is_negative[v]) is_negative[u] = 1;
        }
    }

    for(int v=0; v<N; v++) {
        if(is_negative[v]) dist[v] = negative;
    }

    return dist;
}
