---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: string/string_search_sa.cpp
    title: "\u6587\u5B57\u5217\u691C\u7D22\uFF08Suffix Array\uFF09"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_14_D
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_14_D
  bundledCode: "#line 1 \"aizu/alds1_14_d.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_14_D\"\
    \n\n#include <iostream>\n#include <atcoder/string>\n#line 1 \"string/string_search_sa.cpp\"\
    \n/**\n * @brief \u6587\u5B57\u5217\u691C\u7D22\uFF08Suffix Array\uFF09\n * @author\
    \ hasegawa1\n */\n\n#include <vector>\n#include <string>\n#line 9 \"string/string_search_sa.cpp\"\
    \n\nbool string_search(const std::string &text, const std::vector<int> &suffix_array,\
    \ const std::string &pattern) {\n    int T = text.size();\n    int P = pattern.size();\n\
    \n    int low = -1, high = T-1;\n    while(low+1 < high) {\n        int mid =\
    \ (low + high) / 2;\n        if((mid == -1 ? \"\" : text.substr(suffix_array[mid],\
    \ P)) < pattern) low = mid;\n        else high = mid;\n    }\n\n    return (high\
    \ == -1 ? \"\" : text.substr(suffix_array[high], P)) == pattern;\n}\n#line 6 \"\
    aizu/alds1_14_d.test.cpp\"\n\nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n\
    \    ios_base::sync_with_stdio(false);\n\n    string T;\n    cin >> T;\n\n   \
    \ auto sa = atcoder::suffix_array(T);\n\n    int Q;\n    cin >> Q;\n    while(Q--)\
    \ {\n        string P;\n        cin >> P;\n        cout << string_search(T, sa,\
    \ P) << endl;\n    }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_14_D\"\
    \n\n#include <iostream>\n#include <atcoder/string>\n#include \"../string/string_search_sa.cpp\"\
    \n\nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    string T;\n    cin >> T;\n\n    auto sa = atcoder::suffix_array(T);\n\n\
    \    int Q;\n    cin >> Q;\n    while(Q--) {\n        string P;\n        cin >>\
    \ P;\n        cout << string_search(T, sa, P) << endl;\n    }\n}\n"
  dependsOn:
  - string/string_search_sa.cpp
  isVerificationFile: true
  path: aizu/alds1_14_d.test.cpp
  requiredBy: []
  timestamp: '2021-08-15 13:05:14+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: aizu/alds1_14_d.test.cpp
layout: document
redirect_from:
- /verify/aizu/alds1_14_d.test.cpp
- /verify/aizu/alds1_14_d.test.cpp.html
title: aizu/alds1_14_d.test.cpp
---
