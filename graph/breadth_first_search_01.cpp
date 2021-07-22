/**
 * @brief 01-BFS
 * @author hasegawa1
 */

#include <vector>
#include <queue>

template<typename T>
using WeightedGraph = std::vector<std::vector<std::pair<int,T>>>;

std::vector<int> bfs01(const std::vector<std::vector<std::pair<int,int>>> & adjacency_list, int start, int unreachable = -1) {
    std::vector<int> dist(adjacency_list.size(), unreachable);
    std::deque<int> dq;

    dist[start] = 0;
    dq.emplace_front(start);

    while(!dq.empty()) {
        const auto v = dq.front(); dq.pop_front();
        for(const auto [u, cost]: adjacency_list[v]) {
            if(dist[u] != unreachable && dist[v] + cost >= dist[u]) continue;
            dist[u] = dist[v] + cost;
            if(cost == 0) dq.emplace_front(u);
            if(cost == 1) dq.emplace_back(u);
        }
    }

    return dist;
}
