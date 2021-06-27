/**
 * @brief 幅優先探索（BFS: Breadth First Search）
 * @author hasegawa1
 */

#include <vector>
#include <queue>

std::vector<int> bfs(const std::vector<std::vector<int>> & adjacency_list, int start, int unreachable = -1) {
    std::vector<int> dist(adjacency_list.size(), unreachable);
    dist[start] = 0;
    std::queue<int> q;
    q.emplace(start);

    while(!q.empty()) {
        const auto v = q.front(); q.pop();
        for(const auto u: adjacency_list[v]) {
            if(dist[u] != unreachable) continue;
            dist[u] = dist[v] + 1;
            q.emplace(u);
        }
    }

    return dist;
}
