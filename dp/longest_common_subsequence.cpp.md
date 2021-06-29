---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/alds1_10_c.test.cpp
    title: aizu/alds1_10_c.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u6700\u9577\u5171\u901A\u90E8\u5206\u5217\uFF08LCS: Longest\
      \ Common Subsequence\uFF09"
    links: []
  bundledCode: "#line 1 \"dp/longest_common_subsequence.cpp\"\n/**\n * @brief \u6700\
    \u9577\u5171\u901A\u90E8\u5206\u5217\uFF08LCS: Longest Common Subsequence\uFF09\
    \n * @author hasegawa1\n */\n\n#include <vector>\n#include <string>\n#include\
    \ <algorithm>\n\nstd::string longest_common_subsequence(const std::string & s,\
    \ const std::string & t) {\n    int n = s.size();\n    int m = t.size();\n   \
    \ std::vector<std::vector<int>> dp(n+1, std::vector<int>(m+1));\n    for(int i=1;\
    \ i<=n; i++) {\n        for(int j=1; j<=m; j++) {\n            dp[i][j] = std::max({dp[i-1][j],\
    \ dp[i][j-1], dp[i-1][j-1]+(s[i-1]==t[j-1])});\n        }\n    }\n    std::string\
    \ res;\n    while(n && m) {\n        if(s[n-1] == t[m-1]) {\n            res.push_back(s[n-1]);\n\
    \            --n; --m;\n        } else if(dp[n-1][m] == dp[n][m]) {\n        \
    \    --n;\n        } else {\n            --m;\n        }\n    }\n    reverse(res.begin(),\
    \ res.end());\n    return res;\n}\n"
  code: "/**\n * @brief \u6700\u9577\u5171\u901A\u90E8\u5206\u5217\uFF08LCS: Longest\
    \ Common Subsequence\uFF09\n * @author hasegawa1\n */\n\n#include <vector>\n#include\
    \ <string>\n#include <algorithm>\n\nstd::string longest_common_subsequence(const\
    \ std::string & s, const std::string & t) {\n    int n = s.size();\n    int m\
    \ = t.size();\n    std::vector<std::vector<int>> dp(n+1, std::vector<int>(m+1));\n\
    \    for(int i=1; i<=n; i++) {\n        for(int j=1; j<=m; j++) {\n          \
    \  dp[i][j] = std::max({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]+(s[i-1]==t[j-1])});\n\
    \        }\n    }\n    std::string res;\n    while(n && m) {\n        if(s[n-1]\
    \ == t[m-1]) {\n            res.push_back(s[n-1]);\n            --n; --m;\n  \
    \      } else if(dp[n-1][m] == dp[n][m]) {\n            --n;\n        } else {\n\
    \            --m;\n        }\n    }\n    reverse(res.begin(), res.end());\n  \
    \  return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: dp/longest_common_subsequence.cpp
  requiredBy: []
  timestamp: '2021-06-28 02:21:17+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/alds1_10_c.test.cpp
documentation_of: dp/longest_common_subsequence.cpp
layout: document
redirect_from:
- /library/dp/longest_common_subsequence.cpp
- /library/dp/longest_common_subsequence.cpp.html
title: "\u6700\u9577\u5171\u901A\u90E8\u5206\u5217\uFF08LCS: Longest Common Subsequence\uFF09"
---
