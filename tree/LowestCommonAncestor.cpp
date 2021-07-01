/**
 * @brief 最小共通祖先（LCA: Lowest Common Ancestor）
 * @author hasegawa1
 */

#include <vector>
#include <cstdint>
#include <cassert>
#include <utility>

template<typename T = int>
class LowestCommonAncestor {
private:
    const int _n;
    const int _root;
    const int _log = 31;
    std::vector<std::vector<std::pair<int,T>>> _adjacency_list;
    std::vector<int> _depth;
    std::vector<T> _distance;
    std::vector<std::vector<int>> _doubling;

    void dfs(int v, int depth, T distance, int parent=-1) {
        _depth[v] = depth;
        _distance[v] = distance;
        _doubling[0][v] = parent;
        for(const auto [u, cost]: _adjacency_list[v]) {
            if(u == parent) continue;
            dfs(u, depth+1, distance+cost, v);
        }
    }

    void doubling() {
        for(int k=0; k+1<_log; k++) {
            for(int v=0; v<_n; v++) {
                if(_doubling[k][v] == -1) {
                    _doubling[k+1][v] = -1;
                } else {
                    _doubling[k+1][v] = _doubling[k][_doubling[k][v]];
                }
            }
        }
    }

public:
    explicit LowestCommonAncestor(const std::vector<std::vector<int>> & g, int root)
    : _n(g.size()), _root(root), _adjacency_list(_n), _depth(_n), _distance(_n), _doubling(_log, std::vector<int>(_n)) {
        for(int v=0; v<_n; v++) {
            for(auto u: g[v]) {
                _adjacency_list[v].emplace_back(u, 1);
            }
        }
        dfs(_root, 0, T());
        doubling();
    }
    explicit LowestCommonAncestor(const std::vector<std::vector<std::pair<int,T>>> & g, int root)
    : _n(g.size()), _root(root), _adjacency_list(g), _depth(_n), _distance(_n), _doubling(_log, std::vector<int>(_n)) {
        dfs(_root, 0, T());
        doubling();
    }

    int ancestor(int v, int k) const {
        assert(0 <= v && v < _n);
        for(int i=0; i<_log; i++) {
            if(k>>i & 1) v = _doubling[i][v];
        }
        return v;
    }

    int lowest_common_ancestor(int v, int u) const {
        assert(0 <= v && v < _n);
        assert(0 <= u && u < _n);
        if(_depth[v] > _depth[u]) std::swap(v, u);
        u = ancestor(u, _depth[u]-_depth[v]);
        if(v == u) return v;
        for(int i=_log-1; i>=0; i--) {
            if(_doubling[i][v] != _doubling[i][u]) {
                v = _doubling[i][v];
                u = _doubling[i][u];
            }
        }
        return _doubling[0][v];
    }

    int operator()(int v, int u) const {
        return lowest_common_ancestor(v, u);
    }
};
