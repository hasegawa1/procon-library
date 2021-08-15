---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: next_array
    links: []
  bundledCode: "#line 1 \"string/next_array.cpp\"\n/**\n * @brief next_array\n * @author\
    \ hasegawa1\n */\n\n#include <vector>\n#include <string>\n\nstd::vector<std::vector<int>>\
    \ next_array(const std::string &s) {\n    int n = s.size();\n    std::vector<std::vector<int>>\
    \ res(n+1, std::vector<int>(26, n));\n    for (int i=n-1; i>=0; i--) {\n     \
    \   for (int j=0; j<26; j++) {\n            res[i][j] = res[i+1][j];\n       \
    \ }\n        res[i][s[i]-'a'] = i;\n    }\n    return res;\n}\n"
  code: "/**\n * @brief next_array\n * @author hasegawa1\n */\n\n#include <vector>\n\
    #include <string>\n\nstd::vector<std::vector<int>> next_array(const std::string\
    \ &s) {\n    int n = s.size();\n    std::vector<std::vector<int>> res(n+1, std::vector<int>(26,\
    \ n));\n    for (int i=n-1; i>=0; i--) {\n        for (int j=0; j<26; j++) {\n\
    \            res[i][j] = res[i+1][j];\n        }\n        res[i][s[i]-'a'] = i;\n\
    \    }\n    return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: string/next_array.cpp
  requiredBy: []
  timestamp: '2021-08-15 11:47:44+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: string/next_array.cpp
layout: document
redirect_from:
- /library/string/next_array.cpp
- /library/string/next_array.cpp.html
title: next_array
---
