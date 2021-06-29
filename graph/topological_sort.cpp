/**
 * @brief トポロジカルソート
 * @author hasegawa1
 */

#include <vector>
#include <queue>

std::vector<int> topological_sort(std::vector<std::vector<int>> &g) {
    int N = g.size();
    std::vector<int> in(N);
    for(int v=0; v<N; v++) {
        for(auto u: g[v]) {
            ++in[u];
        }
    }

    std::queue<int> q;
    for(int v=0; v<N; v++) {
        if(in[v] == 0) q.emplace(v);
    }

    std::vector<int> res;
    while(!q.empty()) {
        int v = q.front(); q.pop();
        res.emplace_back(v);
        for(auto u: g[v]) {
            if(--in[u] == 0) q.emplace(u);
        }
    }

    if(res.size() == N) return res;
    return std::vector<int>();
}
