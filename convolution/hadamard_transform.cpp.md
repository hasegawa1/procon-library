---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: convolution/xor_convolution.cpp
    title: Bitwise Xor Convolution
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: yosupo/bitwise_xor_convolution.test.cpp
    title: yosupo/bitwise_xor_convolution.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u9AD8\u901F\u30A2\u30C0\u30DE\u30FC\u30EB\u5909\u63DB"
    links: []
  bundledCode: "#line 1 \"convolution/hadamard_transform.cpp\"\n/**\n * @brief \u9AD8\
    \u901F\u30A2\u30C0\u30DE\u30FC\u30EB\u5909\u63DB\n * @author hasegawa1\n */\n\n\
    #include <vector>\n#include <cassert>\n\ntemplate<typename T>\nstd::vector<T>\
    \ hadamard_transform(std::vector<T> v, bool rev) {\n    const int n = v.size();\n\
    \    assert((n & (n-1)) == 0); //ispow2\n\n    for(int i=1; i<n; i<<=1) {\n  \
    \      for(int j=0; j<n; j++) {\n            if((i&j) == 0) {\n              \
    \  T x = v[j];\n                T y = v[j|i];\n                v[j] = x + y;\n\
    \                v[j|i] = x - y;\n            }\n        }\n    }\n\n    if(rev)\
    \ {\n        T inv = T(1) / n;\n        for(auto &e: v) e *= inv;\n    }\n\n \
    \   return v;\n}\n"
  code: "/**\n * @brief \u9AD8\u901F\u30A2\u30C0\u30DE\u30FC\u30EB\u5909\u63DB\n *\
    \ @author hasegawa1\n */\n\n#include <vector>\n#include <cassert>\n\ntemplate<typename\
    \ T>\nstd::vector<T> hadamard_transform(std::vector<T> v, bool rev) {\n    const\
    \ int n = v.size();\n    assert((n & (n-1)) == 0); //ispow2\n\n    for(int i=1;\
    \ i<n; i<<=1) {\n        for(int j=0; j<n; j++) {\n            if((i&j) == 0)\
    \ {\n                T x = v[j];\n                T y = v[j|i];\n            \
    \    v[j] = x + y;\n                v[j|i] = x - y;\n            }\n        }\n\
    \    }\n\n    if(rev) {\n        T inv = T(1) / n;\n        for(auto &e: v) e\
    \ *= inv;\n    }\n\n    return v;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: convolution/hadamard_transform.cpp
  requiredBy:
  - convolution/xor_convolution.cpp
  timestamp: '2021-08-23 17:04:51+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - yosupo/bitwise_xor_convolution.test.cpp
documentation_of: convolution/hadamard_transform.cpp
layout: document
redirect_from:
- /library/convolution/hadamard_transform.cpp
- /library/convolution/hadamard_transform.cpp.html
title: "\u9AD8\u901F\u30A2\u30C0\u30DE\u30FC\u30EB\u5909\u63DB"
---
