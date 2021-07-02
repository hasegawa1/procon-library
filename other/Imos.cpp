/**
 * @brief 1次元imos法
 * @author hasegawa1
 */

#include <vector>
#include <numeric>
#include <cassert>

template<typename T>
class Imos {
private:
    const int _n;
    std::vector<T> _imos;
public:
    explicit Imos(int N): _n(N+1), _imos(_n) {};

    // add x to [l, r)
    void add(int l, int r, T x) {
        assert(0 <= l && l < r && r <= _n);
        _imos[l] += x;
        _imos[r] -= x;
    }

    std::vector<T> build() {
        std::vector<T> res(_n);
        std::inclusive_scan(_imos.begin(), _imos.end(), res.begin());
        res.pop_back();
        return res;
    }
};
