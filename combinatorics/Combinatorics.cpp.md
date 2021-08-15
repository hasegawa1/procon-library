---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/dpl_5_b.test.cpp
    title: aizu/dpl_5_b.test.cpp
  - icon: ':heavy_check_mark:'
    path: aizu/dpl_5_c.test.cpp
    title: aizu/dpl_5_c.test.cpp
  - icon: ':heavy_check_mark:'
    path: aizu/dpl_5_d.test.cpp
    title: aizu/dpl_5_d.test.cpp
  - icon: ':heavy_check_mark:'
    path: aizu/dpl_5_e.test.cpp
    title: aizu/dpl_5_e.test.cpp
  - icon: ':heavy_check_mark:'
    path: aizu/dpl_5_f.test.cpp
    title: aizu/dpl_5_f.test.cpp
  - icon: ':heavy_check_mark:'
    path: aizu/dpl_5_g.test.cpp
    title: aizu/dpl_5_g.test.cpp
  - icon: ':heavy_check_mark:'
    path: aizu/dpl_5_i.test.cpp
    title: aizu/dpl_5_i.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u7D44\u307F\u5408\u308F\u305B\u5404\u7A2E"
    links:
    - https://ei1333.github.io/luzhiled/snippets/math/factorial.html
    - https://twitter.com/kiri8128/status/1376243224331706369
    - https://web.archive.org/web/20201226035551/https://std::min-25.hatenablog.com/entry/2017/04/10/215046
  bundledCode: "#line 1 \"combinatorics/Combinatorics.cpp\"\n/**\n * @brief \u7D44\
    \u307F\u5408\u308F\u305B\u5404\u7A2E\n * @author hasegawa1\n */\n\n#include <vector>\n\
    #include <algorithm>\n\ntemplate<typename Tmod>\nclass Combinatrics {\nprivate:\n\
    \    int _n;\n    std::vector<Tmod> _fac, _ifac;\npublic:\n    Combinatrics(int\
    \ sz = 2'000'000): _n(sz), _fac(sz+1), _ifac(sz+1) {\n        _fac[0] = 1;\n \
    \       for(int i=1; i<=_n; i++) {\n            _fac[i] = _fac[i-1] * i;\n   \
    \     }\n        _ifac[_n] = _fac[_n].inv();\n        for(int i=_n; i; i--) {\n\
    \            _ifac[i-1] = _ifac[i] * i;\n        }\n        _ifac[0] = 1;\n  \
    \  }\n\n    Tmod c(const int64_t n, int64_t k) const {\n        assert(n >= 0);\n\
    \        if(k < 0 || k > n) return 0;\n        k = std::min(k, n-k);\n       \
    \ assert(k <= _n);\n        if(n <= _n) {\n            return _fac[n] * _ifac[k]\
    \ * _ifac[n-k];\n        } else {\n            Tmod res = _ifac[k];\n        \
    \    for(int64_t i=n-k+1; i<=n; i++) {\n                res *= i;\n          \
    \  }\n            return res;\n        }\n    }\n\n    Tmod operator()(const int64_t\
    \ n, const int k) const {\n        return c(n, k);\n    }\n\n    Tmod p(const\
    \ int64_t n, const int k) const {\n        return c(n, k) * _fac[k];\n    }\n\n\
    \    Tmod h(const int64_t n, const int k) const {\n        return c(n-1+k, k);\n\
    \    }\n\n    Tmod fac(const int64_t n) const {\n        assert(n >= 0);\n   \
    \     if(n <= _n) {\n            return _fac[n];\n        } else {\n         \
    \   abort();\n            // https://ei1333.github.io/luzhiled/snippets/math/factorial.html\n\
    \            // https://web.archive.org/web/20201226035551/https://std::min-25.hatenablog.com/entry/2017/04/10/215046\n\
    \            // https://twitter.com/kiri8128/status/1376243224331706369\n    \
    \    }\n    }\n\n    Tmod ifac(const int64_t n) const {\n        assert(n >= 0);\n\
    \        if(n <= _n) {\n            return _ifac[n];\n        } else {\n     \
    \       return fac(n).inv();\n        }\n    }\n\n    Tmod stirling_number2(const\
    \ int64_t n, const int k) const {\n        Tmod res = 0;\n        for(int i=0;\
    \ i<=k; i++) {\n            if((k-i) & 1) {\n                res -= c(k, i) *\
    \ Tmod(i).pow(n);\n            } else {\n                res += c(k, i) * Tmod(i).pow(n);\n\
    \            }\n        }\n        res *= _ifac[k];\n        return res;\n   \
    \ }\n\n    Tmod bell_number(const int64_t n, int64_t k) const {\n        if(n\
    \ == 0) return 1;\n        k = std::min(n, k);\n        Tmod res = 0;\n      \
    \  std::vector<Tmod> pref(k+1);\n        pref[0] = 1;\n        for(int i=1; i<=k;\
    \ i++) {\n            if(i & 1) {\n                pref[i] = pref[i-1] - _ifac[i];\n\
    \            } else {\n                pref[i] = pref[i-1] + _ifac[i];\n     \
    \       }\n        }\n        for(int i=1; i<=k; i++) {\n            res += pref[k-i]\
    \ * Tmod(i).pow(n) * _ifac[i];\n        }\n        return res;\n    }\n\n    //\
    \ unverified\n    // Tmod catalan(const int n) const {\n    //     assert(n >=\
    \ 0);\n    //     assert(n <= _n/2);\n    //     return c(2*n, n) * _ifac[n+1];\n\
    \    // }\n\n    // // verified by ARC009-C\n    // Tmod montmort(const int n)\
    \ const {\n    //     assert(n >= 0);\n    //     assert(n <= _n);\n    //   \
    \  Tmod res = 0;\n    //     for(int i=0; i<=n; i++) {\n    //         if(i &\
    \ 1) {\n    //             res -= _ifac[i];\n    //         } else {\n    // \
    \            res += _ifac[i];\n    //         }\n    //     }\n    //     res\
    \ *= _fac[n];\n    //     return res;\n    // }\n\n    // unverified\n    // int\
    \ mod2(const int64_t n, const int64_t k) const {\n    //     return (n&k) == k;\n\
    \    // }\n};\n"
  code: "/**\n * @brief \u7D44\u307F\u5408\u308F\u305B\u5404\u7A2E\n * @author hasegawa1\n\
    \ */\n\n#include <vector>\n#include <algorithm>\n\ntemplate<typename Tmod>\nclass\
    \ Combinatrics {\nprivate:\n    int _n;\n    std::vector<Tmod> _fac, _ifac;\n\
    public:\n    Combinatrics(int sz = 2'000'000): _n(sz), _fac(sz+1), _ifac(sz+1)\
    \ {\n        _fac[0] = 1;\n        for(int i=1; i<=_n; i++) {\n            _fac[i]\
    \ = _fac[i-1] * i;\n        }\n        _ifac[_n] = _fac[_n].inv();\n        for(int\
    \ i=_n; i; i--) {\n            _ifac[i-1] = _ifac[i] * i;\n        }\n       \
    \ _ifac[0] = 1;\n    }\n\n    Tmod c(const int64_t n, int64_t k) const {\n   \
    \     assert(n >= 0);\n        if(k < 0 || k > n) return 0;\n        k = std::min(k,\
    \ n-k);\n        assert(k <= _n);\n        if(n <= _n) {\n            return _fac[n]\
    \ * _ifac[k] * _ifac[n-k];\n        } else {\n            Tmod res = _ifac[k];\n\
    \            for(int64_t i=n-k+1; i<=n; i++) {\n                res *= i;\n  \
    \          }\n            return res;\n        }\n    }\n\n    Tmod operator()(const\
    \ int64_t n, const int k) const {\n        return c(n, k);\n    }\n\n    Tmod\
    \ p(const int64_t n, const int k) const {\n        return c(n, k) * _fac[k];\n\
    \    }\n\n    Tmod h(const int64_t n, const int k) const {\n        return c(n-1+k,\
    \ k);\n    }\n\n    Tmod fac(const int64_t n) const {\n        assert(n >= 0);\n\
    \        if(n <= _n) {\n            return _fac[n];\n        } else {\n      \
    \      abort();\n            // https://ei1333.github.io/luzhiled/snippets/math/factorial.html\n\
    \            // https://web.archive.org/web/20201226035551/https://std::min-25.hatenablog.com/entry/2017/04/10/215046\n\
    \            // https://twitter.com/kiri8128/status/1376243224331706369\n    \
    \    }\n    }\n\n    Tmod ifac(const int64_t n) const {\n        assert(n >= 0);\n\
    \        if(n <= _n) {\n            return _ifac[n];\n        } else {\n     \
    \       return fac(n).inv();\n        }\n    }\n\n    Tmod stirling_number2(const\
    \ int64_t n, const int k) const {\n        Tmod res = 0;\n        for(int i=0;\
    \ i<=k; i++) {\n            if((k-i) & 1) {\n                res -= c(k, i) *\
    \ Tmod(i).pow(n);\n            } else {\n                res += c(k, i) * Tmod(i).pow(n);\n\
    \            }\n        }\n        res *= _ifac[k];\n        return res;\n   \
    \ }\n\n    Tmod bell_number(const int64_t n, int64_t k) const {\n        if(n\
    \ == 0) return 1;\n        k = std::min(n, k);\n        Tmod res = 0;\n      \
    \  std::vector<Tmod> pref(k+1);\n        pref[0] = 1;\n        for(int i=1; i<=k;\
    \ i++) {\n            if(i & 1) {\n                pref[i] = pref[i-1] - _ifac[i];\n\
    \            } else {\n                pref[i] = pref[i-1] + _ifac[i];\n     \
    \       }\n        }\n        for(int i=1; i<=k; i++) {\n            res += pref[k-i]\
    \ * Tmod(i).pow(n) * _ifac[i];\n        }\n        return res;\n    }\n\n    //\
    \ unverified\n    // Tmod catalan(const int n) const {\n    //     assert(n >=\
    \ 0);\n    //     assert(n <= _n/2);\n    //     return c(2*n, n) * _ifac[n+1];\n\
    \    // }\n\n    // // verified by ARC009-C\n    // Tmod montmort(const int n)\
    \ const {\n    //     assert(n >= 0);\n    //     assert(n <= _n);\n    //   \
    \  Tmod res = 0;\n    //     for(int i=0; i<=n; i++) {\n    //         if(i &\
    \ 1) {\n    //             res -= _ifac[i];\n    //         } else {\n    // \
    \            res += _ifac[i];\n    //         }\n    //     }\n    //     res\
    \ *= _fac[n];\n    //     return res;\n    // }\n\n    // unverified\n    // int\
    \ mod2(const int64_t n, const int64_t k) const {\n    //     return (n&k) == k;\n\
    \    // }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: combinatorics/Combinatorics.cpp
  requiredBy: []
  timestamp: '2021-07-04 19:22:02+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/dpl_5_i.test.cpp
  - aizu/dpl_5_c.test.cpp
  - aizu/dpl_5_e.test.cpp
  - aizu/dpl_5_g.test.cpp
  - aizu/dpl_5_d.test.cpp
  - aizu/dpl_5_b.test.cpp
  - aizu/dpl_5_f.test.cpp
documentation_of: combinatorics/Combinatorics.cpp
layout: document
redirect_from:
- /library/combinatorics/Combinatorics.cpp
- /library/combinatorics/Combinatorics.cpp.html
title: "\u7D44\u307F\u5408\u308F\u305B\u5404\u7A2E"
---
