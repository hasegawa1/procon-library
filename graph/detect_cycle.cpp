/**
 * @brief 閉路検出
 * @author hasegawa1
 */

#include <vector>
#include <queue>
#include <algorithm>

std::vector<int> detect_cycle(const std::vector<std::vector<int>> &g) {
    const int N = g.size();

    std::vector<std::vector<std::pair<int,bool>>> g2(N);
    for(int v=0; v<N; v++) {
        for(const auto u: g[v]) {
            g2[v].emplace_back(u, true);
        }
    }

    std::vector<std::vector<std::pair<int,int>>> in(N);
    std::vector<int> out(N);
    for(int v=0; v<N; v++) {
        for(int i=0; i<g[v].size(); i++) {
            in[g[v][i]].emplace_back(v, i);
        }
        out[v] = g[v].size();
    }

    std::queue<int> q;
    for(int v=0; v<N; v++) {
        if(out[v] == 0) {
            q.emplace(v);
        }
    }

    while(!q.empty()) {
        int u = q.front(); q.pop();
        for(const auto [v, i]: in[u]) {
            g2[v][i].second = false;
            if(--out[v] == 0) q.emplace(v);
        }
    }

    if(std::all_of(out.begin(), out.end(), [](int x) {return x == 0;})) return std::vector<int>();

    std::vector<int> visited(N);
    std::vector<int> res;
    int now = std::distance(out.begin(), std::find_if(out.begin(), out.end(), [](int x) {return x>0;}));
    while(true) {
        res.emplace_back(now);
        if(visited[now]) break;
        visited[now] = 1;
        for(const auto [u, ok]: g2[now]) {
            if(ok) {
                now = u;
                break;
            }
        }
    }

    std::reverse(res.begin(), res.end());
    while(res.back() != res.front()) {
        res.pop_back();
    }
    std::reverse(res.begin(), res.end());
    res.pop_back();
    return res;
}
