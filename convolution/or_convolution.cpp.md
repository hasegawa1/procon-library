---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: convolution/moebius_transform.cpp
    title: "\u9AD8\u901F\u30E1\u30D3\u30A6\u30B9\u5909\u63DB"
  - icon: ':heavy_check_mark:'
    path: convolution/zeta_transform.cpp
    title: "\u9AD8\u901F\u30BC\u30FC\u30BF\u5909\u63DB"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: Bitwise Or Convolution
    links: []
  bundledCode: "#line 1 \"convolution/or_convolution.cpp\"\n/**\n * @brief Bitwise\
    \ Or Convolution\n * @author hasegawa1\n */\n\n#include <vector>\n#include <algorithm>\n\
    #line 1 \"convolution/zeta_transform.cpp\"\n/**\n * @brief \u9AD8\u901F\u30BC\u30FC\
    \u30BF\u5909\u63DB\n * @author hasegawa1\n */\n\n#line 7 \"convolution/zeta_transform.cpp\"\
    \n#include <cassert>\n\ntemplate<typename T>\nstd::vector<T> zeta_transform(std::vector<T>\
    \ v, bool lower) {\n    int n = v.size();\n    assert((n == 0) || ((n & (n-1))\
    \ == 0)); //ispow2\n\n    if(lower) {\n        for(int i=1; i<n; i<<=1) {\n  \
    \          for(int j=0; j<n; j++) {\n                if((i&j) == 0) v[j|i] +=\
    \ v[j];\n            }\n        }\n    } else {\n        for(int i=1; i<n; i<<=1)\
    \ {\n            for(int j=0; j<n; j++) {\n                if((i&j) == 0) v[j]\
    \ += v[j|i];\n            }\n        }\n    }\n\n    return v;\n}\n#line 1 \"\
    convolution/moebius_transform.cpp\"\n/**\n * @brief \u9AD8\u901F\u30E1\u30D3\u30A6\
    \u30B9\u5909\u63DB\n * @author hasegawa1\n */\n\n#line 8 \"convolution/moebius_transform.cpp\"\
    \n\ntemplate<typename T>\nstd::vector<T> moebius_transform(std::vector<T> v, bool\
    \ lower) {\n    int n = v.size();\n    assert((n == 0) || ((n & (n-1)) == 0));\
    \ //ispow2\n\n    if(lower) {\n        for(int i=1; i<n; i<<=1) {\n          \
    \  for(int j=0; j<n; j++) {\n                if((i&j) == 0) v[j|i] -= v[j];\n\
    \            }\n        }\n    } else {\n        for(int i=1; i<n; i<<=1) {\n\
    \            for(int j=0; j<n; j++) {\n                if((i&j) == 0) v[j] -=\
    \ v[j|i];\n            }\n        }\n    }\n\n    return v;\n}\n#line 10 \"convolution/or_convolution.cpp\"\
    \n\ntemplate<typename T>\nstd::vector<T> or_convolution(const std::vector<T> &a,\
    \ const std::vector<T> &b) {\n    auto sum_a = zeta_transform(a, true);\n    auto\
    \ sum_b = zeta_transform(b, true);\n    std::vector<T> sum_c;\n    std::transform(sum_a.begin(),\
    \ sum_a.end(), sum_b.begin(), std::back_inserter(sum_c), std::multiplies<T>());\n\
    \    return moebius_transform(sum_c, true);\n}\n"
  code: "/**\n * @brief Bitwise Or Convolution\n * @author hasegawa1\n */\n\n#include\
    \ <vector>\n#include <algorithm>\n#include \"./zeta_transform.cpp\"\n#include\
    \ \"./moebius_transform.cpp\"\n\ntemplate<typename T>\nstd::vector<T> or_convolution(const\
    \ std::vector<T> &a, const std::vector<T> &b) {\n    auto sum_a = zeta_transform(a,\
    \ true);\n    auto sum_b = zeta_transform(b, true);\n    std::vector<T> sum_c;\n\
    \    std::transform(sum_a.begin(), sum_a.end(), sum_b.begin(), std::back_inserter(sum_c),\
    \ std::multiplies<T>());\n    return moebius_transform(sum_c, true);\n}\n"
  dependsOn:
  - convolution/zeta_transform.cpp
  - convolution/moebius_transform.cpp
  isVerificationFile: false
  path: convolution/or_convolution.cpp
  requiredBy: []
  timestamp: '2021-08-23 16:13:48+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: convolution/or_convolution.cpp
layout: document
redirect_from:
- /library/convolution/or_convolution.cpp
- /library/convolution/or_convolution.cpp.html
title: Bitwise Or Convolution
---
