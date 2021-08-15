---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "\u6587\u5B57\u5217\u691C\u7D22"
    links: []
  bundledCode: "#line 1 \"string/string_search.cpp\"\n/**\n * @brief \u6587\u5B57\u5217\
    \u691C\u7D22\n * @author hasegawa1\n */\n\n#include <vector>\n#include <string>\n\
    #include <atcoder/string>\n\nstd::vector<int> string_search(const std::string\
    \ &text, const std::string &pattern) {\n    int T = text.size();\n    int P =\
    \ pattern.size();\n    std::vector<int> res;\n    auto z = atcoder::z_algorithm(pattern\
    \ + \"_\" + text);\n    for(int i=0; i<T; i++) {\n        if(z[i+P+1] == P) res.emplace_back(i);\n\
    \    }\n    return res;\n}\n"
  code: "/**\n * @brief \u6587\u5B57\u5217\u691C\u7D22\n * @author hasegawa1\n */\n\
    \n#include <vector>\n#include <string>\n#include <atcoder/string>\n\nstd::vector<int>\
    \ string_search(const std::string &text, const std::string &pattern) {\n    int\
    \ T = text.size();\n    int P = pattern.size();\n    std::vector<int> res;\n \
    \   auto z = atcoder::z_algorithm(pattern + \"_\" + text);\n    for(int i=0; i<T;\
    \ i++) {\n        if(z[i+P+1] == P) res.emplace_back(i);\n    }\n    return res;\n\
    }\n"
  dependsOn: []
  isVerificationFile: false
  path: string/string_search.cpp
  requiredBy: []
  timestamp: '2021-08-15 12:10:35+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: string/string_search.cpp
layout: document
redirect_from:
- /library/string/string_search.cpp
- /library/string/string_search.cpp.html
title: "\u6587\u5B57\u5217\u691C\u7D22"
---
