/**
 * @brief 商列挙
 * @author hasegawa1
 */

// verify: https://atcoder.jp/contests/abc132/submissions/21387526

#include <vector>
#include <tuple>
#include <cstdint>
#include <cassert>

std::vector<std::tuple<int64_t,int64_t,int64_t>> quotient_ranges(const int64_t n) {
    std::vector<std::tuple<int64_t,int64_t,int64_t>> res;
    int64_t m;
    for(m=1; m*m<=n; m++) {
        res.emplace_back(m, m, n/m);
    }
    for(int64_t i=m; i; i--) {
        int64_t l = n / (i+1) + 1;
        int64_t r = n / i;
        if(l <= r && std::get<1>(res.back()) < l) {
            res.emplace_back(l, r, n/l);
        }
    }
    return res;
}
