/**
 * @brief 木の直径
 * @author hasegawa1
 */

#include <vector>
#include <algorithm>
#include "../graph/breadth_first_search.cpp"
#include "../graph/dijkstra.cpp"

template<typename T>
using WeightedGraph = std::vector<std::vector<std::pair<int,T>>>;

int diameter(const std::vector<std::vector<int>> &g) {
    auto dist = bfs(g, 0);
    int v = std::distance(dist.begin(), std::max_element(dist.begin(), dist.end()));
    dist = bfs(g, v);
    return *std::max_element(dist.begin(), dist.end());
}

template<typename T>
int diameter(const std::vector<std::vector<std::pair<int,T>>> &g) {
    auto dist = dijkstra(g, 0);
    int v = std::distance(dist.begin(), std::max_element(dist.begin(), dist.end()));
    dist = dijkstra(g, v);
    return *std::max_element(dist.begin(), dist.end());
}
