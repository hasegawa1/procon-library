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
    explicit CumulativeSum(const std::vector<T> & v): _n(v.size()), _cumulative_sum(v) {
        _cumulative_sum.emplace_back(T());
        std::exclusive_scan(_cumulative_sum.begin(), _cumulative_sum.end(), _cumulative_sum.begin(), T());
    }

    // [l, r)
    T operator()(int l, int r) const {
        assert(0 <= l && r <= _n);
        return _cumulative_sum[r] - _cumulative_sum[l];
    }
};
