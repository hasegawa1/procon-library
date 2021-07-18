/**
 * @brief 二値行列
 * @author hasegawa1
 */

#include <vector>
#include <bitset>
#include <cassert>

class BinaryMatrix {
private:
    const int _max_size = 1000;
    const int _n, _m;
    std::vector<std::bitset<1000>> _mat;
public:
    BinaryMatrix(int n, int m): _n(n), _m(m), _mat(1000) {};

    void set(int i, int j) {
        assert(0 <= i && i < _n);
        assert(0 <= j && j < _m);
        _mat[i].set(j);
    }

    void reset(int i, int j) {
        assert(0 <= i && i < _n);
        assert(0 <= j && j < _m);
        _mat[i].reset(j);
    }

    // verify: https://atcoder.jp/contests/typical90/submissions/24351166
    int rank(bool is_extended) {
        std::vector<std::bitset<1000>> A = _mat;
        int rank = 0;
        for(int j=0; j<_m-is_extended; j++) {
            int pivot = -1;
            for(int i=rank; i<_n; i++) {
                if(A[i][j]) {
                    pivot = i;
                    break;
                }
            }
            if(pivot == -1) continue;
            std::swap(A[pivot], A[rank]);
            for(int i=0; i<_n; i++) {
                if(i != rank && A[i][j]) A[i] ^= A[rank];
            }
            ++rank;
        }
        if(is_extended) {
            for(int i=rank; i<_n; i++) {
                if(A[i][_m-1]) return -1;
            }
        }
        return rank;
    }
};
