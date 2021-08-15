---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/alds1_14_d.test.cpp
    title: aizu/alds1_14_d.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u6587\u5B57\u5217\u691C\u7D22\uFF08Suffix Array\uFF09"
    links: []
  bundledCode: "#line 1 \"string/string_search_sa.cpp\"\n/**\n * @brief \u6587\u5B57\
    \u5217\u691C\u7D22\uFF08Suffix Array\uFF09\n * @author hasegawa1\n */\n\n#include\
    \ <vector>\n#include <string>\n#include <atcoder/string>\n\nbool string_search(const\
    \ std::string &text, const std::vector<int> &suffix_array, const std::string &pattern)\
    \ {\n    int T = text.size();\n    int P = pattern.size();\n\n    int low = -1,\
    \ high = T-1;\n    while(low+1 < high) {\n        int mid = (low + high) / 2;\n\
    \        if((mid == -1 ? \"\" : text.substr(suffix_array[mid], P)) < pattern)\
    \ low = mid;\n        else high = mid;\n    }\n\n    return (high == -1 ? \"\"\
    \ : text.substr(suffix_array[high], P)) == pattern;\n}\n"
  code: "/**\n * @brief \u6587\u5B57\u5217\u691C\u7D22\uFF08Suffix Array\uFF09\n *\
    \ @author hasegawa1\n */\n\n#include <vector>\n#include <string>\n#include <atcoder/string>\n\
    \nbool string_search(const std::string &text, const std::vector<int> &suffix_array,\
    \ const std::string &pattern) {\n    int T = text.size();\n    int P = pattern.size();\n\
    \n    int low = -1, high = T-1;\n    while(low+1 < high) {\n        int mid =\
    \ (low + high) / 2;\n        if((mid == -1 ? \"\" : text.substr(suffix_array[mid],\
    \ P)) < pattern) low = mid;\n        else high = mid;\n    }\n\n    return (high\
    \ == -1 ? \"\" : text.substr(suffix_array[high], P)) == pattern;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: string/string_search_sa.cpp
  requiredBy: []
  timestamp: '2021-08-15 13:05:14+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/alds1_14_d.test.cpp
documentation_of: string/string_search_sa.cpp
layout: document
redirect_from:
- /library/string/string_search_sa.cpp
- /library/string/string_search_sa.cpp.html
title: "\u6587\u5B57\u5217\u691C\u7D22\uFF08Suffix Array\uFF09"
---
