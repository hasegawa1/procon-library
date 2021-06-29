---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: number-theory/Sieve.cpp
    title: "\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\u306E\u7BE9"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/all/NTL_1_D
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/all/NTL_1_D
  bundledCode: "#line 1 \"aizu/ntl_1_d.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/all/NTL_1_D\"\
    \n\n#include <iostream>\n#line 1 \"number-theory/Sieve.cpp\"\n/**\n * @brief \u30A8\
    \u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\u306E\u7BE9\n * @author hasegawa1\n */\n\n\
    #include <vector>\n#include <algorithm>\n#include <numeric>\n#include <cstdint>\n\
    #include <cassert>\n#include <atcoder/internal_math>\n\nclass Sieve {\nprivate:\n\
    \    const int _n;\n    std::vector<int> _max_prime_factor;\n    std::vector<int>\
    \ _euler_phi;\n    std::vector<int> _moebius_mu;\npublic:\n    explicit Sieve(int\
    \ n = 2'000'000): _n(n+1), _max_prime_factor(_n), _euler_phi(_n), _moebius_mu(_n,\
    \ 1) {\n        iota(_euler_phi.begin(), _euler_phi.end(), 0);\n        for(int\
    \ i=2; i<_n; i++) {\n            if(_max_prime_factor[i]) continue;\n        \
    \    _moebius_mu[i] = -1;\n            for(int j=i; j<_n; j+=i) {\n          \
    \      _max_prime_factor[j] = i;\n                _euler_phi[j] -= _euler_phi[j]/i;\n\
    \                if(j/i%i == 0) _moebius_mu[j] = 0;\n                else _moebius_mu[j]\
    \ = -_moebius_mu[i];\n            }\n        }\n    }\n\n    bool is_prime(int64_t\
    \ n) const {\n        assert(n > 0);\n        if(n < _n) return (_max_prime_factor[n]\
    \ == n);\n        return atcoder::internal::is_prime_constexpr(n);\n    }\n\n\
    \    std::vector<std::pair<int64_t,int64_t>> prime_factorize(int64_t n) const\
    \ {\n        assert(n > 0);\n        std::vector<std::pair<int64_t,int64_t>> res;\n\
    \        if(n < _n) {\n            while(n > 1) {\n                int64_t p =\
    \ _max_prime_factor[n];\n                int64_t exp = 0;\n                while(_max_prime_factor[n]\
    \ == p) {\n                    n /= p;\n                    ++exp;\n         \
    \       }\n                res.emplace_back(p, exp);\n            }\n        \
    \    std::reverse(res.begin(), res.end());\n        } else {\n            for(int64_t\
    \ i=2; i*i<=n; i++) {\n                if(n%i == 0) {\n                    int\
    \ exp = 0;\n                    while(n%i == 0) {\n                        n /=\
    \ i;\n                        ++exp;\n                    }\n                \
    \    res.emplace_back(i, exp);\n                }\n            }\n           \
    \ if(n != 1) res.emplace_back(n, 1);\n        }\n        return res;\n    }\n\n\
    \    // unverified\n    // std::vector<int64_t> divisors(int64_t n) const {\n\
    \    //     assert(n > 0);\n    //     std::vector<int64_t> res = {1};\n    //\
    \     for(auto [p, exp]: prime_factorize(n)) {\n    //         int sz = res.size();\n\
    \    //         for(int i=0; i<sz; i++) {\n    //             int64_t now = res[i];\n\
    \    //             while(exp--) {\n    //                 now *= p;\n    // \
    \                std::cout << now << std::endl;\n    //                 res.emplace_back(now);\n\
    \    //             }\n    //         }\n    //     }\n    //     sort(res.begin(),\
    \ res.end());\n    //     return res;\n    // }\n\n    int64_t euler_phi(int64_t\
    \ n) const {\n        assert(n > 0);\n        if(n < _n) return _euler_phi[n];\n\
    \        int64_t res = n;\n        for(const auto [p, exp]: prime_factorize(n))\
    \ {\n            res -= res/p;\n        }\n        return res;\n    }\n\n    //\
    \ unverified\n    // int moebius_mu(int64_t n) const {\n    //     assert(n >\
    \ 0);\n    //     if(n < _n) return _moebius_mu[n];\n    //     int res = 1;\n\
    \    //     for(const auto [p, exp]: prime_factorize(n)) {\n    //         if(exp\
    \ >= 2) return 0;\n    //         res *= -1;\n    //     }\n    //     return\
    \ res;\n    // }\n};\n#line 5 \"aizu/ntl_1_d.test.cpp\"\n\nusing namespace std;\n\
    \nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    Sieve s;\n\n    int n;\n    cin >> n;\n\n    cout << s.euler_phi(n) << endl;\n\
    }\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/all/NTL_1_D\"\
    \n\n#include <iostream>\n#include \"../number-theory/Sieve.cpp\"\n\nusing namespace\
    \ std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    Sieve s;\n\n    int n;\n    cin >> n;\n\n    cout << s.euler_phi(n) << endl;\n\
    }\n"
  dependsOn:
  - number-theory/Sieve.cpp
  isVerificationFile: true
  path: aizu/ntl_1_d.test.cpp
  requiredBy: []
  timestamp: '2021-06-30 00:07:55+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: aizu/ntl_1_d.test.cpp
layout: document
redirect_from:
- /verify/aizu/ntl_1_d.test.cpp
- /verify/aizu/ntl_1_d.test.cpp.html
title: aizu/ntl_1_d.test.cpp
---
