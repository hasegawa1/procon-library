/**
 * @brief ダブリング
 * @author hasegawa1
 */

// verify: https://atcoder.jp/contests/typical90/submissions/24346778

#include <vector>
#include <algorithm>
#include <limits>
#include <cassert>
#include <cstdint>

template<typename T>
class Doubling {
private:
    const int _n;
    const int _log = 63;
    std::vector<std::vector<int>> _pos;
    std::vector<std::vector<T>> _min;

    void set_pos() {
        for(int k=0; k+1<_log; k++) {
            for(int v=0; v<_n; v++) {
                _pos[k+1][v] = _pos[k][_pos[k][v]];
            }
        }
    }

    void set_min() {
        for(int k=0; k+1<_log; k++) {
            for(int v=0; v<_n; v++) {
                _min[k+1][v] = std::min(_min[k][v], _min[k][_pos[k][v]]);
            }
        }
    }

public:
    explicit Doubling(const std::vector<int> & next): _n(next.size()), _pos(_log, std::vector<int>(_n)) {
        _pos[0] = next;
        set_pos();
    }
    explicit Doubling(const std::vector<int> & next, const std::vector<T> & cost): _n(next.size()), _pos(_log, std::vector<int>(_n)), _min(_log, std::vector<T>(_n)) {
        _pos[0] = next;
        _min[0] = cost;
        set_pos();
        set_min();
    }

    int pos(int v, int64_t k) const {
        assert(0 <= v && v < _n);
        assert(k >= 0);
        for(int i=0; i<_log; i++) {
            if(k>>i & 1) v = _pos[i][v];
        }
        return v;
    }

    T min(int v, int64_t k) const {
        assert(0 <= v && v < _n);
        assert(k >= 0);
        T res = std::numeric_limits<T>::max();
        for(int i=0; i<_log; i++) {
            if(k>>i & 1) {
                res = std::min(res, _min[i][v]);
                v = _pos[i][v];
            }
        }
        return res;
    }
};
