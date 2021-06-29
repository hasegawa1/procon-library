---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "\u8EE2\u5012\u6570"
    links: []
  bundledCode: "#line 1 \"other/inversion_number.cpp\"\n/**\n * @brief \u8EE2\u5012\
    \u6570\n * @author hasegawa1\n */\n\n#include <vector>\n#include <algorithm>\n\
    #include <cstdint>\n#include <atcoder/fenwicktree>\n\nint64_t inversion_number(const\
    \ std::vector<int> & v) {\n    const int N = v.size();\n    const int M = *std::max_element(v.begin(),\
    \ v.end()) + 1;\n    atcoder::fenwick_tree<int> fen(M);\n\n    int64_t res = 0;\n\
    \    for(int i=0; i<N; i++) {\n        res += fen.sum(v[i]+1, M);\n        fen.add(v[i],\
    \ 1);\n    }\n\n    return res;\n}\n"
  code: "/**\n * @brief \u8EE2\u5012\u6570\n * @author hasegawa1\n */\n\n#include\
    \ <vector>\n#include <algorithm>\n#include <cstdint>\n#include <atcoder/fenwicktree>\n\
    \nint64_t inversion_number(const std::vector<int> & v) {\n    const int N = v.size();\n\
    \    const int M = *std::max_element(v.begin(), v.end()) + 1;\n    atcoder::fenwick_tree<int>\
    \ fen(M);\n\n    int64_t res = 0;\n    for(int i=0; i<N; i++) {\n        res +=\
    \ fen.sum(v[i]+1, M);\n        fen.add(v[i], 1);\n    }\n\n    return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: other/inversion_number.cpp
  requiredBy: []
  timestamp: '2021-06-28 23:39:45+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: other/inversion_number.cpp
layout: document
redirect_from:
- /library/other/inversion_number.cpp
- /library/other/inversion_number.cpp.html
title: "\u8EE2\u5012\u6570"
---
