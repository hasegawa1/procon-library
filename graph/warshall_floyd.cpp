/**
 * @brief 全点対間最短経路長（Warshall Floyd）
 * @author hasegawa1
 */

#include <vector>
#include <limits>
#include <algorithm>

template<typename T>
std::vector<std::vector<T>> warshall_floyd(const std::vector<std::vector<T>> & adjacency_matrix, T unreachable = std::numeric_limits<T>::max()) {
    const int N = adjacency_matrix.size();
    std::vector<std::vector<T>> dist = adjacency_matrix;

    for(int k=0; k<N; k++) {
        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) {
                if(dist[i][k] == unreachable || dist[k][j] == unreachable) continue;
                if(dist[i][j] == unreachable) dist[i][j] = dist[i][k] + dist[k][j];
                else dist[i][j] = std::min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    return dist;
}
