/**
 * @brief 2次元累積和
 * @author hasegawa1
 */

#include <vector>
#include <cassert>

template<typename T>
class CumulativeSum2 {
private:
    const int _h, _w;
    std::vector<std::vector<T>> _cumulative_sum2;
public:
    explicit CumulativeSum2(const std::vector<std::vector<T>> & grid): _h(grid.size()), _w(grid[0].size()), _cumulative_sum2(_h+1, std::vector<T>(_w+1)) {
        for(int i=0; i<_h; i++) {
            for(int j=0; j<_w; j++) {
                _cumulative_sum2[i+1][j+1] = _cumulative_sum2[i][j+1] + _cumulative_sum2[i+1][j] - _cumulative_sum2[i][j] + grid[i][j];
            }
        }
    }

    // [si, sj) x [gi, gj)
    T operator()(int si, int sj, int gi, int gj) {
        assert(0 <= si && si < gi && gi <= _h);
        assert(0 <= sj && sj < gj && gj <= _w);
        return _cumulative_sum2[gi][gj] - _cumulative_sum2[si][gj] - _cumulative_sum2[gi][sj] + _cumulative_sum2[si][sj];
    }
};
