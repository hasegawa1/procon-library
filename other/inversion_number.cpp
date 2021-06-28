/**
 * @brief 1次元累積和
 * @author hasegawa1
 */

#include <vector>
#include <algorithm>
#include <cstdint>
#include <atcoder/fenwicktree>

int64_t inversion_number(const std::vector<int> & v) {
    const int N = v.size();
    const int M = *std::max_element(v.begin(), v.end()) + 1;
    atcoder::fenwick_tree<int> fen(M);

    int64_t res = 0;
    for(int i=0; i<N; i++) {
        res += fen.sum(v[i]+1, M);
        fen.add(v[i], 1);
    }

    return res;
}
