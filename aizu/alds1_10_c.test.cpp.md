---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: dp/longest_common_subsequence.cpp
    title: "\u6700\u9577\u5171\u901A\u90E8\u5206\u5217\uFF08LCS: Longest Common Subsequence\uFF09"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_10_C
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_10_C
  bundledCode: "#line 1 \"aizu/alds1_10_c.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_10_C\"\
    \n\n#include <iostream>\n#line 1 \"dp/longest_common_subsequence.cpp\"\n/**\n\
    \ * @brief \u6700\u9577\u5171\u901A\u90E8\u5206\u5217\uFF08LCS: Longest Common\
    \ Subsequence\uFF09\n * @author hasegawa1\n */\n\n#include <vector>\n#include\
    \ <string>\n#include <algorithm>\n\nstd::string longest_common_subsequence(const\
    \ std::string & s, const std::string & t) {\n    int n = s.size();\n    int m\
    \ = t.size();\n    std::vector<std::vector<int>> dp(n+1, std::vector<int>(m+1));\n\
    \    for(int i=1; i<=n; i++) {\n        for(int j=1; j<=m; j++) {\n          \
    \  dp[i][j] = std::max({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]+(s[i-1]==t[j-1])});\n\
    \        }\n    }\n    std::string res;\n    while(n && m) {\n        if(s[n-1]\
    \ == t[m-1]) {\n            res.push_back(s[n-1]);\n            --n; --m;\n  \
    \      } else if(dp[n-1][m] == dp[n][m]) {\n            --n;\n        } else {\n\
    \            --m;\n        }\n    }\n    reverse(res.begin(), res.end());\n  \
    \  return res;\n}\n#line 5 \"aizu/alds1_10_c.test.cpp\"\n\nusing namespace std;\n\
    \nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int q;\n    cin >> q;\n    while(q--) {\n        string X, Y;\n        cin\
    \ >> X >> Y;\n        cout << longest_common_subsequence(X, Y).size() << endl;\n\
    \    }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_10_C\"\
    \n\n#include <iostream>\n#include \"../dp/longest_common_subsequence.cpp\"\n\n\
    using namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int q;\n    cin >> q;\n    while(q--) {\n        string X, Y;\n        cin\
    \ >> X >> Y;\n        cout << longest_common_subsequence(X, Y).size() << endl;\n\
    \    }\n}\n"
  dependsOn:
  - dp/longest_common_subsequence.cpp
  isVerificationFile: true
  path: aizu/alds1_10_c.test.cpp
  requiredBy: []
  timestamp: '2021-06-29 19:12:26+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: aizu/alds1_10_c.test.cpp
layout: document
redirect_from:
- /verify/aizu/alds1_10_c.test.cpp
- /verify/aizu/alds1_10_c.test.cpp.html
title: aizu/alds1_10_c.test.cpp
---
