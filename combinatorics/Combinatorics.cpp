/**
 * @brief 組み合わせ各種
 * @author hasegawa1
 */

#include <vector>
#include <algorithm>

template<typename Tmod>
class Combinatrics {
private:
    int _n;
    std::vector<Tmod> _fac, _ifac;
public:
    Combinatrics(int sz = 2'000'000): _n(sz), _fac(sz+1), _ifac(sz+1) {
        _fac[0] = 1;
        for(int i=1; i<=_n; i++) {
            _fac[i] = _fac[i-1] * i;
        }
        _ifac[_n] = _fac[_n].inv();
        for(int i=_n; i; i--) {
            _ifac[i-1] = _ifac[i] * i;
        }
        _ifac[0] = 1;
    }

    Tmod c(const int64_t n, int64_t k) const {
        assert(n >= 0);
        if(k < 0 || k > n) return 0;
        k = std::min(k, n-k);
        assert(k <= _n);
        if(n <= _n) {
            return _fac[n] * _ifac[k] * _ifac[n-k];
        } else {
            Tmod res = _ifac[k];
            for(int64_t i=n-k+1; i<=n; i++) {
                res *= i;
            }
            return res;
        }
    }

    Tmod operator()(const int64_t n, const int k) const {
        return c(n, k);
    }

    Tmod p(const int64_t n, const int k) const {
        return c(n, k) * _fac[k];
    }

    Tmod h(const int64_t n, const int k) const {
        return c(n-1+k, k);
    }

    Tmod fac(const int64_t n) const {
        assert(n >= 0);
        if(n <= _n) {
            return _fac[n];
        } else {
            abort();
            // https://ei1333.github.io/luzhiled/snippets/math/factorial.html
            // https://web.archive.org/web/20201226035551/https://std::min-25.hatenablog.com/entry/2017/04/10/215046
            // https://twitter.com/kiri8128/status/1376243224331706369
        }
    }

    Tmod ifac(const int64_t n) const {
        assert(n >= 0);
        if(n <= _n) {
            return _ifac[n];
        } else {
            return fac(n).inv();
        }
    }

    Tmod stirling_number2(const int64_t n, const int k) const {
        Tmod res = 0;
        for(int i=0; i<=k; i++) {
            if((k-i) & 1) {
                res -= c(k, i) * Tmod(i).pow(n);
            } else {
                res += c(k, i) * Tmod(i).pow(n);
            }
        }
        res *= _ifac[k];
        return res;
    }

    Tmod bell_number(const int64_t n, int64_t k) const {
        if(n == 0) return 1;
        k = std::min(n, k);
        Tmod res = 0;
        std::vector<Tmod> pref(k+1);
        pref[0] = 1;
        for(int i=1; i<=k; i++) {
            if(i & 1) {
                pref[i] = pref[i-1] - _ifac[i];
            } else {
                pref[i] = pref[i-1] + _ifac[i];
            }
        }
        for(int i=1; i<=k; i++) {
            res += pref[k-i] * Tmod(i).pow(n) * _ifac[i];
        }
        return res;
    }

    // unverified
    // Tmod catalan(const int n) const {
    //     assert(n >= 0);
    //     assert(n <= _n/2);
    //     return c(2*n, n) * _ifac[n+1];
    // }

    // // verified by ARC009-C
    // Tmod montmort(const int n) const {
    //     assert(n >= 0);
    //     assert(n <= _n);
    //     Tmod res = 0;
    //     for(int i=0; i<=n; i++) {
    //         if(i & 1) {
    //             res -= _ifac[i];
    //         } else {
    //             res += _ifac[i];
    //         }
    //     }
    //     res *= _fac[n];
    //     return res;
    // }

    // unverified
    // int mod2(const int64_t n, const int64_t k) const {
    //     return (n&k) == k;
    // }
};
