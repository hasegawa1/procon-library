/**
 * @brief エラトステネスの篩
 * @author hasegawa1
 */

#include <vector>
#include <algorithm>
#include <numeric>
#include <cstdint>
#include <cassert>
#include <atcoder/internal_math>

class Sieve {
private:
    const int _n;
    std::vector<int> _max_prime_factor;
    std::vector<int> _euler_phi;
    std::vector<int> _moebius_mu;
public:
    explicit Sieve(int n = 2'000'000): _n(n+1), _max_prime_factor(_n), _euler_phi(_n), _moebius_mu(_n, 1) {
        iota(_euler_phi.begin(), _euler_phi.end(), 0);
        for(int i=2; i<_n; i++) {
            if(_max_prime_factor[i]) continue;
            _moebius_mu[i] = -1;
            for(int j=i; j<_n; j+=i) {
                _max_prime_factor[j] = i;
                _euler_phi[j] -= _euler_phi[j]/i;
                if(j/i%i == 0) _moebius_mu[j] = 0;
                else _moebius_mu[j] = -_moebius_mu[i];
            }
        }
    }

    bool is_prime(int64_t n) const {
        assert(n > 0);
        if(n < _n) return (_max_prime_factor[n] == n);
        return atcoder::internal::is_prime_constexpr(n);
    }

    std::vector<std::pair<int64_t,int64_t>> prime_factorize(int64_t n) const {
        assert(n > 0);
        std::vector<std::pair<int64_t,int64_t>> res;
        if(n < _n) {
            while(n > 1) {
                int64_t p = _max_prime_factor[n];
                int64_t exp = 0;
                while(_max_prime_factor[n] == p) {
                    n /= p;
                    ++exp;
                }
                res.emplace_back(p, exp);
            }
            std::reverse(res.begin(), res.end());
        } else {
            for(int64_t i=2; i*i<=n; i++) {
                if(n%i == 0) {
                    int exp = 0;
                    while(n%i == 0) {
                        n /= i;
                        ++exp;
                    }
                    res.emplace_back(i, exp);
                }
            }
            if(n != 1) res.emplace_back(n, 1);
        }
        return res;
    }

    // unverified
    // std::vector<int64_t> divisors(int64_t n) const {
    //     assert(n > 0);
    //     std::vector<int64_t> res = {1};
    //     for(auto [p, exp]: prime_factorize(n)) {
    //         int sz = res.size();
    //         for(int i=0; i<sz; i++) {
    //             int64_t now = res[i];
    //             while(exp--) {
    //                 now *= p;
    //                 std::cout << now << std::endl;
    //                 res.emplace_back(now);
    //             }
    //         }
    //     }
    //     sort(res.begin(), res.end());
    //     return res;
    // }

    int64_t euler_phi(int64_t n) const {
        assert(n > 0);
        if(n < _n) return _euler_phi[n];
        int64_t res = n;
        for(const auto [p, exp]: prime_factorize(n)) {
            res -= res/p;
        }
        return res;
    }

    // unverified
    // int moebius_mu(int64_t n) const {
    //     assert(n > 0);
    //     if(n < _n) return _moebius_mu[n];
    //     int res = 1;
    //     for(const auto [p, exp]: prime_factorize(n)) {
    //         if(exp >= 2) return 0;
    //         res *= -1;
    //     }
    //     return res;
    // }
};
