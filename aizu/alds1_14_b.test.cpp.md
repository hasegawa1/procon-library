---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: string/string_search_z.cpp
    title: "\u6587\u5B57\u5217\u691C\u7D22\uFF08z-algorithm\uFF09"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_14_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_14_B
  bundledCode: "#line 1 \"aizu/alds1_14_b.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_14_B\"\
    \n\n#include <iostream>\n#line 1 \"string/string_search_z.cpp\"\n/**\n * @brief\
    \ \u6587\u5B57\u5217\u691C\u7D22\uFF08z-algorithm\uFF09\n * @author hasegawa1\n\
    \ */\n\n#include <vector>\n#include <string>\n#include <atcoder/string>\n\nstd::vector<int>\
    \ string_search(const std::string &text, const std::string &pattern) {\n    int\
    \ T = text.size();\n    int P = pattern.size();\n    std::vector<int> res;\n \
    \   auto z = atcoder::z_algorithm(pattern + \"_\" + text);\n    for(int i=0; i<T;\
    \ i++) {\n        if(z[i+P+1] == P) res.emplace_back(i);\n    }\n    return res;\n\
    }\n#line 5 \"aizu/alds1_14_b.test.cpp\"\n\nusing namespace std;\n\nint main(void)\
    \ {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\n    string\
    \ T, P;\n    cin >> T >> P;\n    for(auto e: string_search(T, P)) {\n        cout\
    \ << e << endl;\n    }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_14_B\"\
    \n\n#include <iostream>\n#include \"../string/string_search_z.cpp\"\n\nusing namespace\
    \ std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    string T, P;\n    cin >> T >> P;\n    for(auto e: string_search(T, P)) {\n\
    \        cout << e << endl;\n    }\n}\n"
  dependsOn:
  - string/string_search_z.cpp
  isVerificationFile: true
  path: aizu/alds1_14_b.test.cpp
  requiredBy: []
  timestamp: '2021-08-15 13:05:14+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: aizu/alds1_14_b.test.cpp
layout: document
redirect_from:
- /verify/aizu/alds1_14_b.test.cpp
- /verify/aizu/alds1_14_b.test.cpp.html
title: aizu/alds1_14_b.test.cpp
---
