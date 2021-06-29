---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/dpl_3_c.test.cpp
    title: aizu/dpl_3_c.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u30D2\u30B9\u30C8\u30B0\u30E9\u30E0\u4E2D\u306E\u6700\u5927\u9577\
      \u65B9\u5F62\u306E\u9762\u7A4D"
    links: []
  bundledCode: "#line 1 \"dp/largest_rectangle_in_a_histogram.cpp\"\n/**\n * @brief\
    \ \u30D2\u30B9\u30C8\u30B0\u30E9\u30E0\u4E2D\u306E\u6700\u5927\u9577\u65B9\u5F62\
    \u306E\u9762\u7A4D\n * @author hasegawa1\n */\n\n#include <vector>\n#include <stack>\n\
    #include <algorithm>\n\ntemplate<typename T>\nint64_t largest_rectangle(std::vector<T>\
    \ histogram) {\n    int N = histogram.size();\n    histogram.emplace_back(0);\n\
    \    std::vector<int> left(N+1);\n    std::stack<int> stk;\n\n    int64_t res\
    \ = 0;\n    for(int i=0; i<=N; i++) {\n        while(!stk.empty() && histogram[stk.top()]\
    \ >= histogram[i]) {\n            res = std::max(res, (int64_t)(i-left[stk.top()]-1)\
    \ * histogram[stk.top()]);\n            stk.pop();\n        }\n        left[i]\
    \ = stk.empty() ? -1 : stk.top();\n        stk.emplace(i);\n    }\n\n    return\
    \ res;\n}\n"
  code: "/**\n * @brief \u30D2\u30B9\u30C8\u30B0\u30E9\u30E0\u4E2D\u306E\u6700\u5927\
    \u9577\u65B9\u5F62\u306E\u9762\u7A4D\n * @author hasegawa1\n */\n\n#include <vector>\n\
    #include <stack>\n#include <algorithm>\n\ntemplate<typename T>\nint64_t largest_rectangle(std::vector<T>\
    \ histogram) {\n    int N = histogram.size();\n    histogram.emplace_back(0);\n\
    \    std::vector<int> left(N+1);\n    std::stack<int> stk;\n\n    int64_t res\
    \ = 0;\n    for(int i=0; i<=N; i++) {\n        while(!stk.empty() && histogram[stk.top()]\
    \ >= histogram[i]) {\n            res = std::max(res, (int64_t)(i-left[stk.top()]-1)\
    \ * histogram[stk.top()]);\n            stk.pop();\n        }\n        left[i]\
    \ = stk.empty() ? -1 : stk.top();\n        stk.emplace(i);\n    }\n\n    return\
    \ res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: dp/largest_rectangle_in_a_histogram.cpp
  requiredBy: []
  timestamp: '2021-06-28 19:51:07+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/dpl_3_c.test.cpp
documentation_of: dp/largest_rectangle_in_a_histogram.cpp
layout: document
redirect_from:
- /library/dp/largest_rectangle_in_a_histogram.cpp
- /library/dp/largest_rectangle_in_a_histogram.cpp.html
title: "\u30D2\u30B9\u30C8\u30B0\u30E9\u30E0\u4E2D\u306E\u6700\u5927\u9577\u65B9\u5F62\
  \u306E\u9762\u7A4D"
---
