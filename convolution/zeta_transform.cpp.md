---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: convolution/and_convolution.cpp
    title: Bitwise And Convolution
  - icon: ':warning:'
    path: convolution/or_convolution.cpp
    title: Bitwise Or Convolution
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: yosupo/bitwise_and_convolution.test.cpp
    title: yosupo/bitwise_and_convolution.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u9AD8\u901F\u30BC\u30FC\u30BF\u5909\u63DB"
    links: []
  bundledCode: "#line 1 \"convolution/zeta_transform.cpp\"\n/**\n * @brief \u9AD8\u901F\
    \u30BC\u30FC\u30BF\u5909\u63DB\n * @author hasegawa1\n */\n\n#include <vector>\n\
    #include <cassert>\n\ntemplate<typename T>\nstd::vector<T> zeta_transform(std::vector<T>\
    \ v, bool lower) {\n    const int n = v.size();\n    assert((n & (n-1)) == 0);\
    \ //ispow2\n\n    if(lower) {\n        for(int i=1; i<n; i<<=1) {\n          \
    \  for(int j=0; j<n; j++) {\n                if((i&j) == 0) v[j|i] += v[j];\n\
    \            }\n        }\n    } else {\n        for(int i=1; i<n; i<<=1) {\n\
    \            for(int j=0; j<n; j++) {\n                if((i&j) == 0) v[j] +=\
    \ v[j|i];\n            }\n        }\n    }\n\n    return v;\n}\n"
  code: "/**\n * @brief \u9AD8\u901F\u30BC\u30FC\u30BF\u5909\u63DB\n * @author hasegawa1\n\
    \ */\n\n#include <vector>\n#include <cassert>\n\ntemplate<typename T>\nstd::vector<T>\
    \ zeta_transform(std::vector<T> v, bool lower) {\n    const int n = v.size();\n\
    \    assert((n & (n-1)) == 0); //ispow2\n\n    if(lower) {\n        for(int i=1;\
    \ i<n; i<<=1) {\n            for(int j=0; j<n; j++) {\n                if((i&j)\
    \ == 0) v[j|i] += v[j];\n            }\n        }\n    } else {\n        for(int\
    \ i=1; i<n; i<<=1) {\n            for(int j=0; j<n; j++) {\n                if((i&j)\
    \ == 0) v[j] += v[j|i];\n            }\n        }\n    }\n\n    return v;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: convolution/zeta_transform.cpp
  requiredBy:
  - convolution/or_convolution.cpp
  - convolution/and_convolution.cpp
  timestamp: '2021-08-23 17:03:50+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - yosupo/bitwise_and_convolution.test.cpp
documentation_of: convolution/zeta_transform.cpp
layout: document
redirect_from:
- /library/convolution/zeta_transform.cpp
- /library/convolution/zeta_transform.cpp.html
title: "\u9AD8\u901F\u30BC\u30FC\u30BF\u5909\u63DB"
---
