---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/dsl_5_b.test.cpp
    title: aizu/dsl_5_b.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "2\u6B21\u5143imos\u6CD5"
    links: []
  bundledCode: "#line 1 \"other/Imos2.cpp\"\n/**\n * @brief 2\u6B21\u5143imos\u6CD5\
    \n * @author hasegawa1\n */\n\n#include <vector>\n#include <numeric>\n#include\
    \ <cassert>\n\ntemplate<typename T>\nclass Imos2 {\nprivate:\n    const int _h,\
    \ _w;\n    std::vector<std::vector<T>> _imos2;\npublic:\n    explicit Imos2(int\
    \ H, int W): _h(H+1), _w(W+1), _imos2(_h, std::vector<T>(_w)) {};\n\n    // add\
    \ x to [si, gi) x [sj, gj)\n    void add(int si, int sj, int gi, int gj, T x)\
    \ {\n        assert(0 <= si && si < gi && gi <= _h);\n        assert(0 <= sj &&\
    \ sj < gj && gj <= _h);\n        _imos2[si][sj] += x;\n        _imos2[si][gj]\
    \ -= x;\n        _imos2[gi][sj] -= x;\n        _imos2[gi][gj] += x;\n    }\n\n\
    \    std::vector<std::vector<T>> build() {\n        std::vector<std::vector<T>>\
    \ res = _imos2;\n        for(int i=0; i<_h; i++) {\n            for(int j=0; j+1<_w;\
    \ j++) {\n                res[i][j+1] += res[i][j];\n            }\n        }\n\
    \        for(int i=0; i+1<_h; i++) {\n            for(int j=0; j<_w; j++) {\n\
    \                res[i+1][j] += res[i][j];\n            }\n        }\n       \
    \ for(int i=0; i<_h; i++) {\n            res[i].pop_back();\n        }\n     \
    \   res.pop_back();\n        return res;\n    }\n};\n"
  code: "/**\n * @brief 2\u6B21\u5143imos\u6CD5\n * @author hasegawa1\n */\n\n#include\
    \ <vector>\n#include <numeric>\n#include <cassert>\n\ntemplate<typename T>\nclass\
    \ Imos2 {\nprivate:\n    const int _h, _w;\n    std::vector<std::vector<T>> _imos2;\n\
    public:\n    explicit Imos2(int H, int W): _h(H+1), _w(W+1), _imos2(_h, std::vector<T>(_w))\
    \ {};\n\n    // add x to [si, gi) x [sj, gj)\n    void add(int si, int sj, int\
    \ gi, int gj, T x) {\n        assert(0 <= si && si < gi && gi <= _h);\n      \
    \  assert(0 <= sj && sj < gj && gj <= _h);\n        _imos2[si][sj] += x;\n   \
    \     _imos2[si][gj] -= x;\n        _imos2[gi][sj] -= x;\n        _imos2[gi][gj]\
    \ += x;\n    }\n\n    std::vector<std::vector<T>> build() {\n        std::vector<std::vector<T>>\
    \ res = _imos2;\n        for(int i=0; i<_h; i++) {\n            for(int j=0; j+1<_w;\
    \ j++) {\n                res[i][j+1] += res[i][j];\n            }\n        }\n\
    \        for(int i=0; i+1<_h; i++) {\n            for(int j=0; j<_w; j++) {\n\
    \                res[i+1][j] += res[i][j];\n            }\n        }\n       \
    \ for(int i=0; i<_h; i++) {\n            res[i].pop_back();\n        }\n     \
    \   res.pop_back();\n        return res;\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: other/Imos2.cpp
  requiredBy: []
  timestamp: '2021-07-02 23:27:50+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/dsl_5_b.test.cpp
documentation_of: other/Imos2.cpp
layout: document
redirect_from:
- /library/other/Imos2.cpp
- /library/other/Imos2.cpp.html
title: "2\u6B21\u5143imos\u6CD5"
---
