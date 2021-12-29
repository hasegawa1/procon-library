---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: stovi
    links: []
  bundledCode: "#line 1 \"other/stovi.cpp\"\n/**\n * @brief stovi\n * @author hasegawa1\n\
    \ */\n\n#include <vector>\n#include <string>\n\nstd::vector<int> stovi(const std::string\
    \ &str, const char padding='0') {\n    std::vector<int> res;\n    res.reserve(str.size());\n\
    \    for(const char &c: str) {\n        res.emplace_back(c - padding);\n    }\n\
    \    return res;\n}\n"
  code: "/**\n * @brief stovi\n * @author hasegawa1\n */\n\n#include <vector>\n#include\
    \ <string>\n\nstd::vector<int> stovi(const std::string &str, const char padding='0')\
    \ {\n    std::vector<int> res;\n    res.reserve(str.size());\n    for(const char\
    \ &c: str) {\n        res.emplace_back(c - padding);\n    }\n    return res;\n\
    }\n"
  dependsOn: []
  isVerificationFile: false
  path: other/stovi.cpp
  requiredBy: []
  timestamp: '2021-12-30 01:03:05+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: other/stovi.cpp
layout: document
redirect_from:
- /library/other/stovi.cpp
- /library/other/stovi.cpp.html
title: stovi
---
