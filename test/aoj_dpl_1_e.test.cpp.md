---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: dp/longest_common_subsequence.cpp
    title: "\u6700\u9577\u5171\u901A\u90E8\u5206\u5217\uFF08LCS: Longest Common Subsequence\uFF09"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_1_E
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_1_E
  bundledCode: "#line 1 \"test/aoj_dpl_1_e.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_1_E\"\
    \n\n#include <iostream>\n#include <string>\n#line 1 \"dp/longest_common_subsequence.cpp\"\
    \n/**\n * @brief \u6700\u9577\u5171\u901A\u90E8\u5206\u5217\uFF08LCS: Longest\
    \ Common Subsequence\uFF09\n * @author hasegawa1\n */\n\n#include <vector>\n#line\
    \ 8 \"dp/longest_common_subsequence.cpp\"\n#include <algorithm>\n\nstd::string\
    \ longest_common_subsequence(const std::string &s, const std::string &t) {\n \
    \   int n = s.size();\n    int m = t.size();\n    std::vector<std::vector<int>>\
    \ dp(n+1, std::vector<int>(m+1));\n    for(int i=1; i<=n; i++) {\n        for(int\
    \ j=1; j<=m; j++) {\n            dp[i][j] = std::max({dp[i-1][j], dp[i][j-1],\
    \ dp[i-1][j-1] + (s[i-1]==t[j-1])});\n        }\n    }\n    std::string res;\n\
    \    while(n && m) {\n        if(s[n-1] == t[m-1]) {\n            res.push_back(s[n-1]);\n\
    \            --n; --m;\n        } else if(dp[n-1][m] == dp[n][m]) {\n        \
    \    --n;\n        } else {\n            --m;\n        }\n    }\n    reverse(res.begin(),\
    \ res.end());\n    return res;\n}\n#line 6 \"test/aoj_dpl_1_e.test.cpp\"\n\nusing\
    \ namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    string s1, s2;\n    cin >> s1 >> s2;\n    cout << max(s1.size(), s2.size())\
    \ - longest_common_subsequence(s1, s2).size() << endl;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_1_E\"\
    \n\n#include <iostream>\n#include <string>\n#include \"../dp/longest_common_subsequence.cpp\"\
    \n\nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    string s1, s2;\n    cin >> s1 >> s2;\n    cout << max(s1.size(), s2.size())\
    \ - longest_common_subsequence(s1, s2).size() << endl;\n}\n"
  dependsOn:
  - dp/longest_common_subsequence.cpp
  isVerificationFile: true
  path: test/aoj_dpl_1_e.test.cpp
  requiredBy: []
  timestamp: '2021-06-28 01:04:48+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/aoj_dpl_1_e.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_dpl_1_e.test.cpp
- /verify/test/aoj_dpl_1_e.test.cpp.html
title: test/aoj_dpl_1_e.test.cpp
---
