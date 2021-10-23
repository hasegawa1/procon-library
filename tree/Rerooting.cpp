/**
 * @brief 全方位木DP（ReRooting）
 * @author hasegawa1
 */

#include <vector>
#include <algorithm>

template<typename Subtree, typename Weight>
class ReRooting {
private:
    struct Edge {
        int to;
        Weight weight;
        Subtree dp, ndp;
    };

    std::vector<std::vector<Edge>> adjacency_list;
    const Subtree identity;
    std::vector<Subtree> subdp, dp;

    // Merge two child-subtree.
    // op(a, op(b, c)) = op(op(a, b), c).
    // op(a, identity) = op(identity, a) = a.
    Subtree op(const Subtree &a, const Subtree &b) {
        return std::max(a, b); //example
    }

    Subtree lift_up(const Subtree &a, const Weight &weight) {
        return a + weight; //example
    }

    void dfs_sub(int v, int p) {
        for(const auto& [u, weight, _1, _2] : adjacency_list[v]) {
            if(u == p) continue;
            dfs_sub(u, v);
            subdp[v] = op(subdp[v], lift_up(subdp[u], weight));
        }
    }

    void dfs_all(int v, int p, const Subtree &top) {
        Subtree acc = identity;
        for(auto& [u, weight, dp, ndp]: adjacency_list[v]) {
            ndp = acc;
            dp = lift_up(u == p ? top : subdp[u], weight);
            acc = op(acc, dp);
        }
        dp[v] = acc;
        acc = identity;
        for(int i=(int) adjacency_list[v].size()-1; i>=0; i--) {
            auto &[u, _, dp, ndp] = adjacency_list[v][i];
            if(u != p) dfs_all(u, v, op(ndp, acc));
            ndp = op(ndp, acc);
            acc = op(acc, dp);
        }
    }

public:
    ReRooting(int N, const Subtree &identity)
        : adjacency_list(N), identity(identity), subdp(N, identity), dp(N, identity) {}

    void add_directed_edge(int u, int v, const Weight &weight) {
        adjacency_list[u].push_back(Edge{v, weight, identity, identity});
    }

    void add_undirected_edge(int u, int v, const Weight &weight) {
        add_directed_edge(u, v, weight);
        add_directed_edge(v, u, weight);
    }

    std::vector<Subtree> build() {
        dfs_sub(0, -1);
        dfs_all(0, -1, identity);
        return dp;
    }
};
