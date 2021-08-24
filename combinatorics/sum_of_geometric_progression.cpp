/**
 * @brief 等比数列の和
 * @author hasegawa1
 */

// veirfy: https://atcoder.jp/contests/arc020/submissions/25307694

#include <vector>
#include <cassert>
#include "atcoder/math"
#include "atcoder/modint"

template<typename Modint>
// requires atcoder::modint
Modint sum_of_geometric_progression(const Modint &a, const Modint &r, long long int n) {
    assert(n > 0);
    if(r.val() == 0) return a;
    if(r.val() == 1) return a * n;

    if(atcoder::internal::is_prime_constexpr(Modint::mod())) return a * (r.pow(n)-1) / (r-1);

    std::vector<Modint> r_pow(63, r);
    std::vector<Modint> r_pow_sum(63, 1);
    for(int i=1; i<63; i++) {
        r_pow[i] = r_pow[i-1] * r_pow[i-1];
        r_pow_sum[i] = (1+r_pow[i-1]) * r_pow_sum[i-1];
    }
    Modint res;
    long long int tmp = 0;
    for(int i=0; i<63; i++) {
        if(n>>i & 1) {
            res += r_pow_sum[i] * r.pow(tmp);
            tmp |= 1LL<<i;
        }
    }
    return a * res;
}
