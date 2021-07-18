---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/dpl_1_d.test.cpp
    title: aizu/dpl_1_d.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u6700\u9577\u5897\u52A0\u90E8\u5206\u5217\uFF08LIS: Longest\
      \ Increasing Subsequence\uFF09"
    links: []
  bundledCode: "#line 1 \"dp/longest_increasing_subsequence.cpp\"\n/**\n * @brief\
    \ \u6700\u9577\u5897\u52A0\u90E8\u5206\u5217\uFF08LIS: Longest Increasing Subsequence\uFF09\
    \n * @author hasegawa1\n */\n\n#include <vector>\n#include <algorithm>\n\ntemplate<typename\
    \ T>\nint longest_increasing_subsequence(const std::vector<T> &v, bool strict)\
    \ {\n    std::vector<T> lis;\n    lis.reserve(v.size());\n    for(auto e: v) {\n\
    \        auto itr = strict ? std::lower_bound(lis.begin(), lis.end(), e) : std::upper_bound(lis.begin(),\
    \ lis.end(), e);\n        if(itr == lis.end()) lis.emplace_back(e);\n        else\
    \ *itr = e;\n    }\n    return lis.size();\n}\n"
  code: "/**\n * @brief \u6700\u9577\u5897\u52A0\u90E8\u5206\u5217\uFF08LIS: Longest\
    \ Increasing Subsequence\uFF09\n * @author hasegawa1\n */\n\n#include <vector>\n\
    #include <algorithm>\n\ntemplate<typename T>\nint longest_increasing_subsequence(const\
    \ std::vector<T> &v, bool strict) {\n    std::vector<T> lis;\n    lis.reserve(v.size());\n\
    \    for(auto e: v) {\n        auto itr = strict ? std::lower_bound(lis.begin(),\
    \ lis.end(), e) : std::upper_bound(lis.begin(), lis.end(), e);\n        if(itr\
    \ == lis.end()) lis.emplace_back(e);\n        else *itr = e;\n    }\n    return\
    \ lis.size();\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: dp/longest_increasing_subsequence.cpp
  requiredBy: []
  timestamp: '2021-07-18 16:07:18+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/dpl_1_d.test.cpp
documentation_of: dp/longest_increasing_subsequence.cpp
layout: document
redirect_from:
- /library/dp/longest_increasing_subsequence.cpp
- /library/dp/longest_increasing_subsequence.cpp.html
title: "\u6700\u9577\u5897\u52A0\u90E8\u5206\u5217\uFF08LIS: Longest Increasing Subsequence\uFF09"
---
