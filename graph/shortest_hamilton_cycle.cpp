/**
 * @brief 最短ハミルトン閉路（巡回セールスマン問題）
 * @author hasegawa1
 */

#include <vector>

template<typename T>
T shortest_hamilton_cycle(const std::vector<std::vector<T>> & adjacency_matrix, T unreachable = -1) {
    const int N = adjacency_matrix.size();
    std::vector<std::vector<T>> dist(1<<N, std::vector<T>(N, unreachable));
    dist[0][0] = 0;

    for(int bit=0; bit<(1<<N); bit++) {
        for(int v=0; v<N; v++) {
            if(dist[bit][v] == unreachable) continue;
            for(int u=0; u<N; u++) {
                if(bit>>u & 1) continue;
                if(adjacency_matrix[v][u] == unreachable) continue;
                if(dist[bit | 1<<u][u] == unreachable) dist[bit | 1<<u][u] = dist[bit][v] + adjacency_matrix[v][u];
                dist[bit | 1<<u][u] = std::min(dist[bit | 1<<u][u], dist[bit][v] + adjacency_matrix[v][u]);
            }
        }
    }

    return dist.back()[0];
}
