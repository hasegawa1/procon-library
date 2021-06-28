---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aizu/alds1_5_d.test.cpp
    title: test/aizu/alds1_5_d.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "1\u6B21\u5143\u7D2F\u7A4D\u548C"
    links: []
  bundledCode: "#line 1 \"other/inversion_number.cpp\"\n/**\n * @brief 1\u6B21\u5143\
    \u7D2F\u7A4D\u548C\n * @author hasegawa1\n */\n\n#include <vector>\n#include <algorithm>\n\
    #include <cstdint>\n#include <atcoder/fenwicktree>\n\nint64_t inversion_number(const\
    \ std::vector<int> & v) {\n    const int N = v.size();\n    const int M = *std::max_element(v.begin(),\
    \ v.end()) + 1;\n    atcoder::fenwick_tree<int> fen(M);\n\n    int64_t res = 0;\n\
    \    for(int i=0; i<N; i++) {\n        res += fen.sum(v[i]+1, M);\n        fen.add(v[i],\
    \ 1);\n    }\n\n    return res;\n}\n"
  code: "/**\n * @brief 1\u6B21\u5143\u7D2F\u7A4D\u548C\n * @author hasegawa1\n */\n\
    \n#include <vector>\n#include <algorithm>\n#include <cstdint>\n#include <atcoder/fenwicktree>\n\
    \nint64_t inversion_number(const std::vector<int> & v) {\n    const int N = v.size();\n\
    \    const int M = *std::max_element(v.begin(), v.end()) + 1;\n    atcoder::fenwick_tree<int>\
    \ fen(M);\n\n    int64_t res = 0;\n    for(int i=0; i<N; i++) {\n        res +=\
    \ fen.sum(v[i]+1, M);\n        fen.add(v[i], 1);\n    }\n\n    return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: other/inversion_number.cpp
  requiredBy: []
  timestamp: '2021-06-28 23:02:59+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aizu/alds1_5_d.test.cpp
documentation_of: other/inversion_number.cpp
layout: document
redirect_from:
- /library/other/inversion_number.cpp
- /library/other/inversion_number.cpp.html
title: "1\u6B21\u5143\u7D2F\u7A4D\u548C"
---
