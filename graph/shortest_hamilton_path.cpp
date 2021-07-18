/**
 * @brief 最短ハミルトン路
 * @author hasegawa1
 */

// verify: https://atcoder.jp/contests/abc190/submissions/24351786
// verify: https://atcoder.jp/contests/past202005-open/submissions/24351764

#include <vector>

template<typename T>
T shortest_hamilton_path(const std::vector<std::vector<T>> & adjacency_matrix, int start=-1, T unreachable = -1) {
    const int N = adjacency_matrix.size();
    std::vector<std::vector<T>> dist(1<<N, std::vector<T>(N, unreachable));
    for(int v=0; v<N; v++) {
        dist[1<<v][v] = 0;
    }

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

    if(start == -1) return (*min_element(dist.back().begin(), dist.back().end()));
    return dist.back()[start];
}
