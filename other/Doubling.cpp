/**
 * @brief ダブリング
 * @author hasegawa1
 */

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
    std::vector<std::vector<T>> _sum, _min, _max;
    std::vector<std::vector<T>> _min_of_sum, _max_of_sum;

    void set_pos() {
        for(int k=0; k+1<_log; k++) {
            for(int v=0; v<_n; v++) {
                _pos[k+1][v] = _pos[k][_pos[k][v]];
            }
        }
    }

    void set_sum() {
        for(int k=0; k+1<_log; k++) {
            for(int v=0; v<_n; v++) {
                _sum[k+1][v] = _sum[k][v] + _sum[k][_pos[k][v]];
            }
        }
    }

    void set_minmax() {
        for(int k=0; k+1<_log; k++) {
            for(int v=0; v<_n; v++) {
                _min[k+1][v] = std::min(_min[k][v], _min[k][_pos[k][v]]);
                _max[k+1][v] = std::max(_max[k][v], _max[k][_pos[k][v]]);
                _min_of_sum[k+1][v] = std::min(_min_of_sum[k][v], _sum[k][v] + _min_of_sum[k][_pos[k][v]]);
                _max_of_sum[k+1][v] = std::max(_max_of_sum[k][v], _sum[k][v] + _max_of_sum[k][_pos[k][v]]);
            }
        }
    }

public:
    explicit Doubling(const std::vector<int> & next): _n(next.size()), _pos(_log, std::vector<int>(_n)) {
        _pos[0] = next;
        set_pos();
    }
    explicit Doubling(const std::vector<int> & next, const std::vector<T> & cost): _n(next.size()), _pos(_log, std::vector<int>(_n)), _sum(_log, std::vector<T>(_n)), _min(_log, std::vector<T>(_n)), _max(_log, std::vector<T>(_n)), _min_of_sum(_log, std::vector<T>(_n)), _max_of_sum(_log, std::vector<T>(_n)) {
        _pos[0] = next;
        _sum[0] = cost;
        _min[0] = cost;
        _max[0] = cost;
        _min_of_sum[0] = cost;
        _max_of_sum[0] = cost;
        set_pos();
        set_sum();
        set_minmax();
    }

    int pos(int v, int64_t k) const {
        assert(0 <= v && v < _n);
        assert(k >= 0);
        for(int i=0; i<_log; i++) {
            if(k>>i & 1) v = _pos[i][v];
        }
        return v;
    }

    T sum(int v, int64_t k) const {
        assert(0 <= v && v < _n);
        assert(k >= 0);
        T res = 0;
        for(int i=0; i<_log; i++) {
            if(k>>i & 1) {
                res += _sum[i][v];
                v = _pos[i][v];
            }
        }
        return res;
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

    T max(int v, int64_t k) const {
        assert(0 <= v && v < _n);
        assert(k >= 0);
        T res = std::numeric_limits<T>::min();
        for(int i=0; i<_log; i++) {
            if(k>>i & 1) {
                res = std::max(res, _max[i][v]);
                v = _pos[i][v];
            }
        }
        return res;
    }

    T min_of_sum(int v, int64_t k) const {
        assert(0 <= v && v < _n);
        assert(k >= 0);
        T sum = 0;
        T res = std::numeric_limits<T>::max();
        for(int i=0; i<_log; i++) {
            if(k>>i & 1) {
                res = std::min(res, sum + _min_of_sum[i][v]);
                sum += _sum[i][v];
                v = _pos[i][v];
            }
        }
        return res;
    }

    // verify: https://atcoder.jp/contests/abc175/submissions/24407891
    T max_of_sum(int v, int64_t k) const {
        assert(0 <= v && v < _n);
        assert(k >= 0);
        T sum = 0;
        T res = std::numeric_limits<T>::min();
        for(int i=0; i<_log; i++) {
            if(k>>i & 1) {
                res = std::max(res, sum + _max_of_sum[i][v]);
                sum += _sum[i][v];
                v = _pos[i][v];
            }
        }
        return res;
    }
};
