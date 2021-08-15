---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: string/longest_common_substring.cpp
    title: "\u6700\u9577\u5171\u901A\u90E8\u5206\u6587\u5B57\u5217"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/challenges/sources/JOI/Final/0528
    links:
    - https://onlinejudge.u-aizu.ac.jp/challenges/sources/JOI/Final/0528
  bundledCode: "#line 1 \"aizu/longest_common_substring.test.cpp\"\n#define PROBLEM\
    \ \"https://onlinejudge.u-aizu.ac.jp/challenges/sources/JOI/Final/0528\"\n\n#include\
    \ <iostream>\n#line 1 \"string/longest_common_substring.cpp\"\n/**\n * @brief\
    \ \u6700\u9577\u5171\u901A\u90E8\u5206\u6587\u5B57\u5217\n * @author hasegawa1\n\
    \ */\n\n#include <atcoder/string>\n#include <algorithm>\n\nint longest_common_substring(const\
    \ std::string &s, const std::string &t) {\n    int S = s.size();\n    int res\
    \ = 0;\n\n    std::string str = s + \"_\" + t;\n    auto sa = atcoder::suffix_array(str);\n\
    \    auto lcp = atcoder::lcp_array(str, sa);\n\n    for(int i=0; i<(int)lcp.size();\
    \ i++) {\n        if((sa[i] < S) ^ (sa[i+1] < S)) res = std::max(res, lcp[i]);\n\
    \    }\n\n    return res;\n}\n#line 5 \"aizu/longest_common_substring.test.cpp\"\
    \n\nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    string S, T;\n    while(cin >> S >> T) {\n        cout << longest_common_substring(S,\
    \ T) << endl;;\n    }\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/challenges/sources/JOI/Final/0528\"\
    \n\n#include <iostream>\n#include \"../string/longest_common_substring.cpp\"\n\
    \nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    string S, T;\n    while(cin >> S >> T) {\n        cout << longest_common_substring(S,\
    \ T) << endl;;\n    }\n    return 0;\n}\n"
  dependsOn:
  - string/longest_common_substring.cpp
  isVerificationFile: true
  path: aizu/longest_common_substring.test.cpp
  requiredBy: []
  timestamp: '2021-08-15 13:35:05+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: aizu/longest_common_substring.test.cpp
layout: document
redirect_from:
- /verify/aizu/longest_common_substring.test.cpp
- /verify/aizu/longest_common_substring.test.cpp.html
title: aizu/longest_common_substring.test.cpp
---
