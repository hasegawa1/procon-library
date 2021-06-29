/**
 * @brief 最小全域森（Prim）
 * @author hasegawa1
 */

#include <vector>
#include <queue>

template<typename T>
using WeightedGraph = std::vector<std::vector<std::pair<int,T>>>;

template<typename T>
T prim(const std::vector<std::vector<std::pair<int,T>>> & adjacency_list) {
    int N = adjacency_list.size();
    std::vector<int> used(N);
    std::priority_queue<std::pair<T,int>, std::vector<std::pair<T,int>>, std::greater<std::pair<T,int>>> pq;

    T res = 0;
    for(int i=0; i<N; i++) {
        if(used[i]) continue;
        pq.emplace(0, i);
        while(!pq.empty()) {
            auto [cost, v] = pq.top(); pq.pop();
            if(used[v]) continue;
            used[v] = 1;
            res += cost;
            for(const auto [u, cost2]: adjacency_list[v]) {
                pq.emplace(cost2, u);
            }
        }
    }

    return res;
}
