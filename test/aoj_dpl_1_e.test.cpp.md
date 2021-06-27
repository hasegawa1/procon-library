---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: dp/edit_distance.cpp
    title: "\u7DE8\u96C6\u8DDD\u96E2"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_1_E
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_1_E
  bundledCode: "#line 1 \"test/aoj_dpl_1_e.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_1_E\"\
    \n\n#include <iostream>\n#include <string>\n#line 1 \"dp/edit_distance.cpp\"\n\
    /**\n * @brief \u7DE8\u96C6\u8DDD\u96E2\n * @author hasegawa1\n */\n\n#include\
    \ <vector>\n#line 8 \"dp/edit_distance.cpp\"\n#include <algorithm>\n\nint edit_distance(const\
    \ std::string &s, const std::string &t) {\n    const int n = s.size();\n    const\
    \ int m = t.size();\n    std::vector<std::vector<int>> dp(n+1, std::vector<int>(m+1,\
    \ n+m));\n\n    for(int i=0; i<=n; i++) {\n        dp[i][0] = i;\n    }\n    for(int\
    \ j=0; j<=m; j++) {\n        dp[0][j] = j;\n    }\n    for(int i=1; i<=n; i++)\
    \ {\n        for(int j=1; j<=m; j++) {\n            dp[i][j] = std::min({dp[i][j],\
    \ dp[i-1][j] + 1, dp[i][j-1] + 1, dp[i-1][j-1] + (s[i-1] != t[j-1])});\n     \
    \   }\n    }\n\n    return dp[n][m];\n}\n#line 6 \"test/aoj_dpl_1_e.test.cpp\"\
    \n\nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    string s1, s2;\n    cin >> s1 >> s2;\n    cout << edit_distance(s1, s2)\
    \ << endl;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_1_E\"\
    \n\n#include <iostream>\n#include <string>\n#include \"../dp/edit_distance.cpp\"\
    \n\nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    string s1, s2;\n    cin >> s1 >> s2;\n    cout << edit_distance(s1, s2)\
    \ << endl;\n}\n"
  dependsOn:
  - dp/edit_distance.cpp
  isVerificationFile: true
  path: test/aoj_dpl_1_e.test.cpp
  requiredBy: []
  timestamp: '2021-06-28 01:35:33+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_dpl_1_e.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_dpl_1_e.test.cpp
- /verify/test/aoj_dpl_1_e.test.cpp.html
title: test/aoj_dpl_1_e.test.cpp
---
