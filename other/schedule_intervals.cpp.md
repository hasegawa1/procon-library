---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_alds1_15_c.test.cpp
    title: test/aoj_alds1_15_c.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u533A\u9593\u30B9\u30B1\u30B8\u30E5\u30FC\u30EA\u30F3\u30B0\u554F\
      \u984C"
    links: []
  bundledCode: "#line 1 \"other/schedule_intervals.cpp\"\n/**\n * @brief \u533A\u9593\
    \u30B9\u30B1\u30B8\u30E5\u30FC\u30EA\u30F3\u30B0\u554F\u984C\n * @author hasegawa1\n\
    \ */\n\n#include <vector>\n#include <algorithm>\n\ntemplate<typename T>\nstd::vector<std::pair<T,T>>\
    \ schedule_intervals(std::vector<std::pair<T,T>> intervals/*[l, r]*/, bool strict)\
    \ {\n    sort(intervals.begin(), intervals.end(), [](const auto &lhs, const auto\
    \ &rhs) {\n        return lhs.second < rhs.second;\n    });\n\n    T last = -1;\n\
    \    std::vector<std::pair<T,T>> res;\n    for(const auto [l, r]: intervals) {\n\
    \        if(strict) {\n            if(last < l) {\n                res.emplace_back(l,\
    \ r);\n                last = r;\n            }\n        } else if(last <= l)\
    \ {\n            res.emplace_back(l, r);\n            last = r;\n        }\n \
    \   }\n\n    return res;\n}\n"
  code: "/**\n * @brief \u533A\u9593\u30B9\u30B1\u30B8\u30E5\u30FC\u30EA\u30F3\u30B0\
    \u554F\u984C\n * @author hasegawa1\n */\n\n#include <vector>\n#include <algorithm>\n\
    \ntemplate<typename T>\nstd::vector<std::pair<T,T>> schedule_intervals(std::vector<std::pair<T,T>>\
    \ intervals/*[l, r]*/, bool strict) {\n    sort(intervals.begin(), intervals.end(),\
    \ [](const auto &lhs, const auto &rhs) {\n        return lhs.second < rhs.second;\n\
    \    });\n\n    T last = -1;\n    std::vector<std::pair<T,T>> res;\n    for(const\
    \ auto [l, r]: intervals) {\n        if(strict) {\n            if(last < l) {\n\
    \                res.emplace_back(l, r);\n                last = r;\n        \
    \    }\n        } else if(last <= l) {\n            res.emplace_back(l, r);\n\
    \            last = r;\n        }\n    }\n\n    return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: other/schedule_intervals.cpp
  requiredBy: []
  timestamp: '2021-06-28 15:47:17+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_alds1_15_c.test.cpp
documentation_of: other/schedule_intervals.cpp
layout: document
redirect_from:
- /library/other/schedule_intervals.cpp
- /library/other/schedule_intervals.cpp.html
title: "\u533A\u9593\u30B9\u30B1\u30B8\u30E5\u30FC\u30EA\u30F3\u30B0\u554F\u984C"
---
