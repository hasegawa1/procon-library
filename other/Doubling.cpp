/**
 * @brief ダブリング
 * @author hasegawa1
 */

#include <vector>
#include <cassert>
#include <cstdint>

class Doubling {
private:
    const int _n;
    const int _log = 63;
    std::vector<std::vector<int>> _pos;

    void set_pos() {
        for(int k=0; k+1<_log; k++) {
            for(int v=0; v<_n; v++) {
                _pos[k+1][v] = _pos[k][_pos[k][v]];
            }
        }
    }
public:
    Doubling(const std::vector<int> next): _n(next.size()), _pos(_log, std::vector<int>(_n)) {
        _pos[0] = next;
        set_pos();
    }

    int pos(int v, int64_t k) const {
        assert(0 <= v && v < _n);
        assert(k >= 0);
        for(int i=0; i<_log; i++) {
            if(k>>i & 1) v = _pos[i][v];
        }
        return v;
    }
};
