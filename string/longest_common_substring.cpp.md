---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/longest_common_substring.test.cpp
    title: aizu/longest_common_substring.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u6700\u9577\u5171\u901A\u90E8\u5206\u6587\u5B57\u5217"
    links: []
  bundledCode: "#line 1 \"string/longest_common_substring.cpp\"\n/**\n * @brief \u6700\
    \u9577\u5171\u901A\u90E8\u5206\u6587\u5B57\u5217\n * @author hasegawa1\n */\n\n\
    #include <atcoder/string>\n#include <algorithm>\n\nint longest_common_substring(const\
    \ std::string &s, const std::string &t) {\n    int S = s.size();\n    int res\
    \ = 0;\n\n    std::string str = s + \"_\" + t;\n    auto sa = atcoder::suffix_array(str);\n\
    \    auto lcp = atcoder::lcp_array(str, sa);\n\n    for(int i=0; i<(int)lcp.size();\
    \ i++) {\n        if((sa[i] < S) ^ (sa[i+1] < S)) res = std::max(res, lcp[i]);\n\
    \    }\n\n    return res;\n}\n"
  code: "/**\n * @brief \u6700\u9577\u5171\u901A\u90E8\u5206\u6587\u5B57\u5217\n *\
    \ @author hasegawa1\n */\n\n#include <atcoder/string>\n#include <algorithm>\n\n\
    int longest_common_substring(const std::string &s, const std::string &t) {\n \
    \   int S = s.size();\n    int res = 0;\n\n    std::string str = s + \"_\" + t;\n\
    \    auto sa = atcoder::suffix_array(str);\n    auto lcp = atcoder::lcp_array(str,\
    \ sa);\n\n    for(int i=0; i<(int)lcp.size(); i++) {\n        if((sa[i] < S) ^\
    \ (sa[i+1] < S)) res = std::max(res, lcp[i]);\n    }\n\n    return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: string/longest_common_substring.cpp
  requiredBy: []
  timestamp: '2021-08-15 13:35:05+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/longest_common_substring.test.cpp
documentation_of: string/longest_common_substring.cpp
layout: document
redirect_from:
- /library/string/longest_common_substring.cpp
- /library/string/longest_common_substring.cpp.html
title: "\u6700\u9577\u5171\u901A\u90E8\u5206\u6587\u5B57\u5217"
---
