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
public:
    explicit Sieve(int n = 2'000'000): _n(n+1), _max_prime_factor(_n), _euler_phi(_n) {
        iota(_euler_phi.begin(), _euler_phi.end(), 0);
        for(int i=2; i<_n; i++) {
            if(_max_prime_factor[i]) continue;
            for(int j=i; j<_n; j+=i) {
                _max_prime_factor[j] = i;
                _euler_phi[j] -= _euler_phi[j]/i;
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

    std::vector<int64_t> divisors(int64_t n) const {
        assert(n > 0);
        std::vector<int64_t> res = {1};
        for(const auto [p, exp]: prime_factorize(n)) {
            int sz = res.size();
            for(int i=0; i<sz; i++) {
                int64_t now = res[i];
                for(int j=0; j<exp; j++) {
                    now *= p;
                    res.emplace_back(now);
                }
            }
        }
        sort(res.begin(), res.end());
        return res;
    }

    int64_t euler_phi(int64_t n) const {
        assert(n > 0);
        if(n < _n) return _euler_phi[n];
        int64_t res = n;
        for(const auto [p, exp]: prime_factorize(n)) {
            res -= res/p;
        }
        return res;
    }

    template<typename T>
    std::vector<T> divisor_transform(std::vector<T> v) {
        int n = v.size();
        assert(n <= _n);
        for(int i=2; i<n; i++) {
            if(is_prime(i)) {
                for(int j=1; i*j<n; j++) {
                    v[j * i] += v[j];
                }
            }
        }
        return v;
    }

    template<typename T>
    std::vector<T> inverse_divisor_transform(std::vector<T> v) {
        int n = v.size();
        assert(n <= _n);
        for(int i=2; i<n; i++) {
            if(is_prime(i)) {
                for(int j=(n-1)/i; j>0; j--) {
                    v[j * i] -= v[j];
                }
            }
        }
        return v;
    }

    template<typename T>
    std::vector<T> multiple_transform(std::vector<T> v) {
        int n = v.size();
        assert(n <= _n);
        for(int i=2; i<n; i++) {
            if(is_prime(i)) {
                for(int j=(n-1)/i; j>0; j--) {
                    v[j] += v[j * i];
                }
            }
        }
        return v;
    }


    template<typename T>
    std::vector<T> inverse_multiple_transform(std::vector<T> v) {
        int n = v.size();
        assert(n <= _n);
        for(int i=2; i<n; i++) {
            if(is_prime(i)) {
                for(int j=1; i*j<n; j++) {
                    v[j] -= v[j * i];
                }
            }
        }
        return v;
    }

    template<typename T>
    std::vector<T> gcd_convolution(const std::vector<T> &a, const std::vector<T> &b) {
        assert(a.size() == b.size());
        auto sum_a = multiple_transform(a);
        auto sum_b = multiple_transform(b);
        std::vector<T> sum_c;
        std::transform(sum_a.begin(), sum_a.end(), sum_b.begin(), std::back_inserter(sum_c), std::multiplies<T>());
        return inverse_multiple_transform(sum_c);
    }

    template<typename T>
    std::vector<T> lcm_convolution(const std::vector<T> &a, const std::vector<T> &b) {
        assert(a.size() == b.size());
        auto sum_a = divisor_transform(a);
        auto sum_b = divisor_transform(b);
        std::vector<T> sum_c;
        std::transform(sum_a.begin(), sum_a.end(), sum_b.begin(), std::back_inserter(sum_c), std::multiplies<T>());
        return inverse_divisor_transform(sum_c);
    }
};
