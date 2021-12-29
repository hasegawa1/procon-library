---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/alds1_14_a.test.cpp
    title: aizu/alds1_14_a.test.cpp
  - icon: ':heavy_check_mark:'
    path: aizu/alds1_14_b.test.cpp
    title: aizu/alds1_14_b.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u6587\u5B57\u5217\u691C\u7D22\uFF08z-algorithm\uFF09"
    links: []
  bundledCode: "#line 1 \"string/string_search_z.cpp\"\n/**\n * @brief \u6587\u5B57\
    \u5217\u691C\u7D22\uFF08z-algorithm\uFF09\n * @author hasegawa1\n */\n\n#include\
    \ <vector>\n#include <string>\n#include <atcoder/string>\n\nstd::vector<int> string_search(const\
    \ std::string &text, const std::string &pattern) {\n    int T = text.size();\n\
    \    int P = pattern.size();\n    std::vector<int> res;\n    auto z = atcoder::z_algorithm(pattern\
    \ + \"_\" + text);\n    for(int i=0; i<T; i++) {\n        if(z[i+P+1] == P) res.emplace_back(i);\n\
    \    }\n    return res;\n}\n"
  code: "/**\n * @brief \u6587\u5B57\u5217\u691C\u7D22\uFF08z-algorithm\uFF09\n *\
    \ @author hasegawa1\n */\n\n#include <vector>\n#include <string>\n#include <atcoder/string>\n\
    \nstd::vector<int> string_search(const std::string &text, const std::string &pattern)\
    \ {\n    int T = text.size();\n    int P = pattern.size();\n    std::vector<int>\
    \ res;\n    auto z = atcoder::z_algorithm(pattern + \"_\" + text);\n    for(int\
    \ i=0; i<T; i++) {\n        if(z[i+P+1] == P) res.emplace_back(i);\n    }\n  \
    \  return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: string/string_search_z.cpp
  requiredBy: []
  timestamp: '2021-08-15 13:05:14+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/alds1_14_a.test.cpp
  - aizu/alds1_14_b.test.cpp
documentation_of: string/string_search_z.cpp
layout: document
redirect_from:
- /library/string/string_search_z.cpp
- /library/string/string_search_z.cpp.html
title: "\u6587\u5B57\u5217\u691C\u7D22\uFF08z-algorithm\uFF09"
---
