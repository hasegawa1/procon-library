/**
 * @brief 2次元imos法
 * @author hasegawa1
 */

#include <vector>
#include <numeric>
#include <cassert>

template<typename T>
class Imos2 {
private:
    const int _h, _w;
    std::vector<std::vector<T>> _imos2;
public:
    explicit Imos2(int H, int W): _h(H+1), _w(W+1), _imos2(_h, std::vector<T>(_w)) {};

    // add x to [si, gi) x [sj, gj)
    void add(int si, int sj, int gi, int gj, T x) {
        assert(0 <= si && si < gi && gi <= _h);
        assert(0 <= sj && sj < gj && gj <= _h);
        _imos2[si][sj] += x;
        _imos2[si][gj] -= x;
        _imos2[gi][sj] -= x;
        _imos2[gi][gj] += x;
    }

    std::vector<std::vector<T>> build() {
        std::vector<std::vector<T>> res = _imos2;
        for(int i=0; i<_h; i++) {
            for(int j=0; j+1<_w; j++) {
                res[i][j+1] += res[i][j];
            }
        }
        for(int i=0; i+1<_h; i++) {
            for(int j=0; j<_w; j++) {
                res[i+1][j] += res[i][j];
            }
        }
        for(int i=0; i<_h; i++) {
            res[i].pop_back();
        }
        res.pop_back();
        return res;
    }
};
