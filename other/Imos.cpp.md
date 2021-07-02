---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/dsl_5_a.test.cpp
    title: aizu/dsl_5_a.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "1\u6B21\u5143imos\u6CD5"
    links: []
  bundledCode: "#line 1 \"other/Imos.cpp\"\n/**\n * @brief 1\u6B21\u5143imos\u6CD5\
    \n * @author hasegawa1\n */\n\n#include <vector>\n#include <numeric>\n#include\
    \ <cassert>\n\ntemplate<typename T>\nclass Imos {\nprivate:\n    const int _n;\n\
    \    std::vector<T> _imos;\npublic:\n    explicit Imos(int N): _n(N+1), _imos(_n)\
    \ {};\n\n    // add x to [l, r)\n    void add(int l, int r, T x) {\n        assert(0\
    \ <= l && l < r && r <= _n);\n        _imos[l] += x;\n        _imos[r] -= x;\n\
    \    }\n\n    std::vector<T> build() {\n        std::vector<T> res(_n);\n    \
    \    std::inclusive_scan(_imos.begin(), _imos.end(), res.begin());\n        res.pop_back();\n\
    \        return res;\n    }\n};\n"
  code: "/**\n * @brief 1\u6B21\u5143imos\u6CD5\n * @author hasegawa1\n */\n\n#include\
    \ <vector>\n#include <numeric>\n#include <cassert>\n\ntemplate<typename T>\nclass\
    \ Imos {\nprivate:\n    const int _n;\n    std::vector<T> _imos;\npublic:\n  \
    \  explicit Imos(int N): _n(N+1), _imos(_n) {};\n\n    // add x to [l, r)\n  \
    \  void add(int l, int r, T x) {\n        assert(0 <= l && l < r && r <= _n);\n\
    \        _imos[l] += x;\n        _imos[r] -= x;\n    }\n\n    std::vector<T> build()\
    \ {\n        std::vector<T> res(_n);\n        std::inclusive_scan(_imos.begin(),\
    \ _imos.end(), res.begin());\n        res.pop_back();\n        return res;\n \
    \   }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: other/Imos.cpp
  requiredBy: []
  timestamp: '2021-07-02 23:09:47+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/dsl_5_a.test.cpp
documentation_of: other/Imos.cpp
layout: document
redirect_from:
- /library/other/Imos.cpp
- /library/other/Imos.cpp.html
title: "1\u6B21\u5143imos\u6CD5"
---
