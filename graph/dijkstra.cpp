/**
 * @brief 単一始点最短経路長（Dijkstra）
 * @author hasegawa1
 */

#include <vector>
#include <queue>
#include <functional>

template<typename T>
using WeightedGraph = std::vector<std::vector<std::pair<int,T>>>;

template<typename T>
std::vector<T> dijkstra(const std::vector<std::vector<std::pair<int,T>>> & adjacency_list, int start, T unreachable = -1) {
    std::vector<T> dist(adjacency_list.size(), unreachable);
    dist[start] = 0; // スタートに戻ってくるときはこの行を消す
    std::priority_queue<std::pair<T,int>, std::vector<std::pair<T,int>>, std::greater<std::pair<T,int>>> pq;
    pq.emplace(0, start);

    while(!pq.empty()) {
        const auto [cost, v] = pq.top(); pq.pop();
        if(dist[v] != unreachable && dist[v] < cost) continue;
        for(const auto [u, cost2]: adjacency_list[v]) {
            if(cost2 == unreachable) continue;
            T next_cost = cost + cost2;
            if(dist[u] != unreachable && dist[u] <= next_cost) continue;
            dist[u] = next_cost;
            pq.emplace(next_cost, u);
        }
    }

    return dist;
}
