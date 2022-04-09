---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/illumination.test.cpp
    title: aizu/illumination.test.cpp
  - icon: ':heavy_check_mark:'
    path: aizu/illumination_string.test.cpp
    title: aizu/illumination_string.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u9023\u9577\u5727\u7E2E"
    links: []
  bundledCode: "#line 1 \"other/run_length_encoding.cpp\"\n/**\n * @brief \u9023\u9577\
    \u5727\u7E2E\n * @author hasegawa1\n */\n\n#include <vector>\n#include <string>\n\
    #include <algorithm>\n\ntemplate<class T>\nauto run_length_encoding(const T& s)\
    \ {\n    std::vector<std::pair<typename T::value_type, int>> res;\n    for(const\
    \ auto& e: s) {\n        if(res.empty() || e != res.back().first) {\n        \
    \    res.emplace_back(e, 1);\n        } else {\n            res.back().second++;\n\
    \        }\n    }\n    return res;\n}\n"
  code: "/**\n * @brief \u9023\u9577\u5727\u7E2E\n * @author hasegawa1\n */\n\n#include\
    \ <vector>\n#include <string>\n#include <algorithm>\n\ntemplate<class T>\nauto\
    \ run_length_encoding(const T& s) {\n    std::vector<std::pair<typename T::value_type,\
    \ int>> res;\n    for(const auto& e: s) {\n        if(res.empty() || e != res.back().first)\
    \ {\n            res.emplace_back(e, 1);\n        } else {\n            res.back().second++;\n\
    \        }\n    }\n    return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: other/run_length_encoding.cpp
  requiredBy: []
  timestamp: '2022-04-09 15:55:28+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/illumination_string.test.cpp
  - aizu/illumination.test.cpp
documentation_of: other/run_length_encoding.cpp
layout: document
redirect_from:
- /library/other/run_length_encoding.cpp
- /library/other/run_length_encoding.cpp.html
title: "\u9023\u9577\u5727\u7E2E"
---
