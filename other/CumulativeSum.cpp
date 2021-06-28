/**
 * @brief 1次元累積和
 * @author hasegawa1
 */

#include <vector>
#include <numeric>
#include <cassert>

template<typename T>
class CumulativeSum {
private:
    const int _n;
    std::vector<T> _cumulative_sum;
public:
    explicit CumulativeSum(std::vector<T> v): _n(v.size()) {
        v.emplace_back(0);
        _cumulative_sum.reserve(_n);
        std::exclusive_scan(v.begin(), v.end(), std::back_inserter(_cumulative_sum), T());
    }

    T operator()(int l, int r) {
        assert(0 <= l && r <= _n);
        return _cumulative_sum[r] - _cumulative_sum[l];
    }
};
