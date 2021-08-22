/**
 * @brief DAG上の最小費用流（負辺可）
 * @author hasegawa1
 */

// verify: https://atcoder.jp/contests/abc214/submissions/25282802
// verify: https://atcoder.jp/contests/past202107/submissions/25282762
// verify: https://atcoder.jp/contests/tkppc6-1/submissions/25283007

#include <vector>
#include <algorithm>
#include <queue>
#include <tuple>
#include <cassert>
#include "atcoder/mincostflow"

template<typename Cap, typename Cost>
class mcf_dag {
private:
    atcoder::mcf_graph<Cap, Cost> graph;
    std::vector<std::vector<std::tuple<int, int, Cost>>> adjacency_list;
    std::vector<Cost> potential;

    std::vector<int> topological_order() {
        size_t N = adjacency_list.size();
        std::vector<int> in(N);
        for(size_t from=0; from<N; from++) {
            for(auto [to, cap, cost]: adjacency_list[from]) {
                ++in[to];
            }
        }

        std::queue<int> q;
        for(size_t from=0; from<N; from++) {
            if(in[from] == 0) q.emplace(from);
        }

        std::vector<int> res;
        while(!q.empty()) {
            int from = q.front(); q.pop();
            res.emplace_back(from);
            for(auto [to, cap, cost]: adjacency_list[from]) {
                if(--in[to] == 0) q.emplace(to);
            }
        }

        assert(res.size() == N && "DAGになってないよ");
        return res;
    }

    void calculate_potential() {
        for(const auto from: topological_order()) {
            for(const auto [to, cap, cost]: adjacency_list[from]) {
                potential[to] = std::min(potential[to], potential[from] + cost);
            }
        }
    }

    void make_graph() {
        for(const auto from: topological_order()) {
            for(const auto [to, cap, cost]: adjacency_list[from]) {
                graph.add_edge(from, to, cap, cost + potential[from] - potential[to]);
            }
        }
    }

public:
    mcf_dag(int n) : graph(n), adjacency_list(n), potential(n) {}

    void add_edge(int from, int to, Cap cap, Cost cost) {
        adjacency_list[from].emplace_back(to, cap, cost);
    }

    std::pair<Cap, Cost> flow(int s, int t) {
        calculate_potential();
        make_graph();
        auto [flow, cost] = graph.flow(s, t);
        return make_pair(flow, cost + flow * potential[t]);
    }

    std::pair<Cap, Cost> flow(int s, int t, Cap flow_limit) {
        calculate_potential();
        make_graph();
        auto [flow, cost] = graph.flow(s, t, flow_limit);
        return make_pair(flow, cost + flow * potential[t]);
    }
};
