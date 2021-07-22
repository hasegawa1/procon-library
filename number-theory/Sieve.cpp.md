---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/alds1_1_c.test.cpp
    title: aizu/alds1_1_c.test.cpp
  - icon: ':heavy_check_mark:'
    path: aizu/itp1_3_d.test.cpp
    title: aizu/itp1_3_d.test.cpp
  - icon: ':heavy_check_mark:'
    path: aizu/ntl_1_a.test.cpp
    title: aizu/ntl_1_a.test.cpp
  - icon: ':heavy_check_mark:'
    path: aizu/ntl_1_d.test.cpp
    title: aizu/ntl_1_d.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\u306E\u7BE9"
    links: []
  bundledCode: "#line 1 \"number-theory/Sieve.cpp\"\n/**\n * @brief \u30A8\u30E9\u30C8\
    \u30B9\u30C6\u30CD\u30B9\u306E\u7BE9\n * @author hasegawa1\n */\n\n#include <vector>\n\
    #include <algorithm>\n#include <numeric>\n#include <cstdint>\n#include <cassert>\n\
    #include <atcoder/internal_math>\n\nclass Sieve {\nprivate:\n    const int _n;\n\
    \    std::vector<int> _max_prime_factor;\n    std::vector<int> _euler_phi;\npublic:\n\
    \    explicit Sieve(int n = 2'000'000): _n(n+1), _max_prime_factor(_n), _euler_phi(_n)\
    \ {\n        iota(_euler_phi.begin(), _euler_phi.end(), 0);\n        for(int i=2;\
    \ i<_n; i++) {\n            if(_max_prime_factor[i]) continue;\n            for(int\
    \ j=i; j<_n; j+=i) {\n                _max_prime_factor[j] = i;\n            \
    \    _euler_phi[j] -= _euler_phi[j]/i;\n            }\n        }\n    }\n\n  \
    \  bool is_prime(int64_t n) const {\n        assert(n > 0);\n        if(n < _n)\
    \ return (_max_prime_factor[n] == n);\n        return atcoder::internal::is_prime_constexpr(n);\n\
    \    }\n\n    std::vector<std::pair<int64_t,int64_t>> prime_factorize(int64_t\
    \ n) const {\n        assert(n > 0);\n        std::vector<std::pair<int64_t,int64_t>>\
    \ res;\n        if(n < _n) {\n            while(n > 1) {\n                int64_t\
    \ p = _max_prime_factor[n];\n                int64_t exp = 0;\n              \
    \  while(_max_prime_factor[n] == p) {\n                    n /= p;\n         \
    \           ++exp;\n                }\n                res.emplace_back(p, exp);\n\
    \            }\n            std::reverse(res.begin(), res.end());\n        } else\
    \ {\n            for(int64_t i=2; i*i<=n; i++) {\n                if(n%i == 0)\
    \ {\n                    int exp = 0;\n                    while(n%i == 0) {\n\
    \                        n /= i;\n                        ++exp;\n           \
    \         }\n                    res.emplace_back(i, exp);\n                }\n\
    \            }\n            if(n != 1) res.emplace_back(n, 1);\n        }\n  \
    \      return res;\n    }\n\n    std::vector<int64_t> divisors(int64_t n) const\
    \ {\n        assert(n > 0);\n        std::vector<int64_t> res = {1};\n       \
    \ for(const auto [p, exp]: prime_factorize(n)) {\n            int sz = res.size();\n\
    \            for(int i=0; i<sz; i++) {\n                int64_t now = res[i];\n\
    \                for(int j=0; j<exp; j++) {\n                    now *= p;\n \
    \                   res.emplace_back(now);\n                }\n            }\n\
    \        }\n        sort(res.begin(), res.end());\n        return res;\n    }\n\
    \n    int64_t euler_phi(int64_t n) const {\n        assert(n > 0);\n        if(n\
    \ < _n) return _euler_phi[n];\n        int64_t res = n;\n        for(const auto\
    \ [p, exp]: prime_factorize(n)) {\n            res -= res/p;\n        }\n    \
    \    return res;\n    }\n};\n"
  code: "/**\n * @brief \u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\u306E\u7BE9\n *\
    \ @author hasegawa1\n */\n\n#include <vector>\n#include <algorithm>\n#include\
    \ <numeric>\n#include <cstdint>\n#include <cassert>\n#include <atcoder/internal_math>\n\
    \nclass Sieve {\nprivate:\n    const int _n;\n    std::vector<int> _max_prime_factor;\n\
    \    std::vector<int> _euler_phi;\npublic:\n    explicit Sieve(int n = 2'000'000):\
    \ _n(n+1), _max_prime_factor(_n), _euler_phi(_n) {\n        iota(_euler_phi.begin(),\
    \ _euler_phi.end(), 0);\n        for(int i=2; i<_n; i++) {\n            if(_max_prime_factor[i])\
    \ continue;\n            for(int j=i; j<_n; j+=i) {\n                _max_prime_factor[j]\
    \ = i;\n                _euler_phi[j] -= _euler_phi[j]/i;\n            }\n   \
    \     }\n    }\n\n    bool is_prime(int64_t n) const {\n        assert(n > 0);\n\
    \        if(n < _n) return (_max_prime_factor[n] == n);\n        return atcoder::internal::is_prime_constexpr(n);\n\
    \    }\n\n    std::vector<std::pair<int64_t,int64_t>> prime_factorize(int64_t\
    \ n) const {\n        assert(n > 0);\n        std::vector<std::pair<int64_t,int64_t>>\
    \ res;\n        if(n < _n) {\n            while(n > 1) {\n                int64_t\
    \ p = _max_prime_factor[n];\n                int64_t exp = 0;\n              \
    \  while(_max_prime_factor[n] == p) {\n                    n /= p;\n         \
    \           ++exp;\n                }\n                res.emplace_back(p, exp);\n\
    \            }\n            std::reverse(res.begin(), res.end());\n        } else\
    \ {\n            for(int64_t i=2; i*i<=n; i++) {\n                if(n%i == 0)\
    \ {\n                    int exp = 0;\n                    while(n%i == 0) {\n\
    \                        n /= i;\n                        ++exp;\n           \
    \         }\n                    res.emplace_back(i, exp);\n                }\n\
    \            }\n            if(n != 1) res.emplace_back(n, 1);\n        }\n  \
    \      return res;\n    }\n\n    std::vector<int64_t> divisors(int64_t n) const\
    \ {\n        assert(n > 0);\n        std::vector<int64_t> res = {1};\n       \
    \ for(const auto [p, exp]: prime_factorize(n)) {\n            int sz = res.size();\n\
    \            for(int i=0; i<sz; i++) {\n                int64_t now = res[i];\n\
    \                for(int j=0; j<exp; j++) {\n                    now *= p;\n \
    \                   res.emplace_back(now);\n                }\n            }\n\
    \        }\n        sort(res.begin(), res.end());\n        return res;\n    }\n\
    \n    int64_t euler_phi(int64_t n) const {\n        assert(n > 0);\n        if(n\
    \ < _n) return _euler_phi[n];\n        int64_t res = n;\n        for(const auto\
    \ [p, exp]: prime_factorize(n)) {\n            res -= res/p;\n        }\n    \
    \    return res;\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: number-theory/Sieve.cpp
  requiredBy: []
  timestamp: '2021-07-22 16:28:41+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/ntl_1_d.test.cpp
  - aizu/itp1_3_d.test.cpp
  - aizu/alds1_1_c.test.cpp
  - aizu/ntl_1_a.test.cpp
documentation_of: number-theory/Sieve.cpp
layout: document
redirect_from:
- /library/number-theory/Sieve.cpp
- /library/number-theory/Sieve.cpp.html
title: "\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\u306E\u7BE9"
---
