---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: convolution/hadamard_transform.cpp
    title: "\u9AD8\u901F\u30A2\u30C0\u30DE\u30FC\u30EB\u5909\u63DB"
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: yosupo/bitwise_xor_convolution.test.cpp
    title: yosupo/bitwise_xor_convolution.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: Bitwise Xor Convolution
    links: []
  bundledCode: "#line 1 \"convolution/xor_convolution.cpp\"\n/**\n * @brief Bitwise\
    \ Xor Convolution\n * @author hasegawa1\n */\n\n#include <vector>\n#include <algorithm>\n\
    #line 1 \"convolution/hadamard_transform.cpp\"\n/**\n * @brief \u9AD8\u901F\u30A2\
    \u30C0\u30DE\u30FC\u30EB\u5909\u63DB\n * @author hasegawa1\n */\n\n#line 7 \"\
    convolution/hadamard_transform.cpp\"\n#include <cassert>\n\ntemplate<typename\
    \ T>\nstd::vector<T> hadamard_transform(std::vector<T> v, bool rev) {\n    const\
    \ int n = v.size();\n    assert((n & (n-1)) == 0); //ispow2\n\n    for(int i=1;\
    \ i<n; i<<=1) {\n        for(int j=0; j<n; j++) {\n            if((i&j) == 0)\
    \ {\n                T x = v[j];\n                T y = v[j|i];\n            \
    \    v[j] = x + y;\n                v[j|i] = x - y;\n            }\n        }\n\
    \    }\n\n    if(rev) {\n        T inv = T(1) / n;\n        for(auto &e: v) e\
    \ *= inv;\n    }\n\n    return v;\n}\n#line 9 \"convolution/xor_convolution.cpp\"\
    \n\ntemplate<typename T>\nstd::vector<T> xor_convolution(const std::vector<T>\
    \ &a, const std::vector<T> &b) {\n    assert(a.size() == b.size());\n    auto\
    \ sum_a = hadamard_transform(a, false);\n    auto sum_b = hadamard_transform(b,\
    \ false);\n    std::vector<T> sum_c;\n    std::transform(sum_a.begin(), sum_a.end(),\
    \ sum_b.begin(), std::back_inserter(sum_c), std::multiplies<T>());\n    return\
    \ hadamard_transform(sum_c, true);\n}\n"
  code: "/**\n * @brief Bitwise Xor Convolution\n * @author hasegawa1\n */\n\n#include\
    \ <vector>\n#include <algorithm>\n#include \"./hadamard_transform.cpp\"\n\ntemplate<typename\
    \ T>\nstd::vector<T> xor_convolution(const std::vector<T> &a, const std::vector<T>\
    \ &b) {\n    assert(a.size() == b.size());\n    auto sum_a = hadamard_transform(a,\
    \ false);\n    auto sum_b = hadamard_transform(b, false);\n    std::vector<T>\
    \ sum_c;\n    std::transform(sum_a.begin(), sum_a.end(), sum_b.begin(), std::back_inserter(sum_c),\
    \ std::multiplies<T>());\n    return hadamard_transform(sum_c, true);\n}\n"
  dependsOn:
  - convolution/hadamard_transform.cpp
  isVerificationFile: false
  path: convolution/xor_convolution.cpp
  requiredBy: []
  timestamp: '2021-08-24 01:07:25+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - yosupo/bitwise_xor_convolution.test.cpp
documentation_of: convolution/xor_convolution.cpp
layout: document
redirect_from:
- /library/convolution/xor_convolution.cpp
- /library/convolution/xor_convolution.cpp.html
title: Bitwise Xor Convolution
---
