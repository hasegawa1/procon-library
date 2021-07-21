/**
 * @brief DAGの到達可能性
 * @author hasegawa1
 */

#include <vector>
#include <queue>
#include <bitset>
#include "./topological_sort.cpp"

std::vector<int> offline_dag_reachability(const std::vector<std::vector<int>> & g, const std::vector<std::pair<int,int>> & query) {
    const int N = g.size();
    const int Q = query.size();
    constexpr int PARALLEL = 1024;
    std::vector<int> ord = topological_sort(g);

    std::vector<int> res;
    for(int i=0; i<Q; i+=PARALLEL) {
        std::vector<std::bitset<PARALLEL>> dp(N);
        for(int j=0; j<PARALLEL; j++) {
            if(i+j >= Q) break;
            auto [s, t] = query[i+j];
            dp[s].set(j);
        }
        for(const auto v: ord) {
            for(const auto u: g[v]) {
                dp[u] |= dp[v];
            }
        }
        for(int j=0; j<PARALLEL; j++) {
            if(i+j >= Q) break;
            auto [s, t] = query[i+j];
            res.emplace_back(dp[t][j]);
        }
    }
    return res;
}
