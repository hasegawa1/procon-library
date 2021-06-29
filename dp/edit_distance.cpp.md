---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/dpl_1_e.test.cpp
    title: aizu/dpl_1_e.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u7DE8\u96C6\u8DDD\u96E2"
    links: []
  bundledCode: "#line 1 \"dp/edit_distance.cpp\"\n/**\n * @brief \u7DE8\u96C6\u8DDD\
    \u96E2\n * @author hasegawa1\n */\n\n#include <vector>\n#include <string>\n#include\
    \ <algorithm>\n\nint edit_distance(const std::string &s, const std::string &t)\
    \ {\n    const int n = s.size();\n    const int m = t.size();\n    std::vector<std::vector<int>>\
    \ dp(n+1, std::vector<int>(m+1, n+m));\n\n    for(int i=0; i<=n; i++) {\n    \
    \    dp[i][0] = i;\n    }\n    for(int j=0; j<=m; j++) {\n        dp[0][j] = j;\n\
    \    }\n    for(int i=1; i<=n; i++) {\n        for(int j=1; j<=m; j++) {\n   \
    \         dp[i][j] = std::min({dp[i][j], dp[i-1][j] + 1, dp[i][j-1] + 1, dp[i-1][j-1]\
    \ + (s[i-1] != t[j-1])});\n        }\n    }\n\n    return dp[n][m];\n}\n"
  code: "/**\n * @brief \u7DE8\u96C6\u8DDD\u96E2\n * @author hasegawa1\n */\n\n#include\
    \ <vector>\n#include <string>\n#include <algorithm>\n\nint edit_distance(const\
    \ std::string &s, const std::string &t) {\n    const int n = s.size();\n    const\
    \ int m = t.size();\n    std::vector<std::vector<int>> dp(n+1, std::vector<int>(m+1,\
    \ n+m));\n\n    for(int i=0; i<=n; i++) {\n        dp[i][0] = i;\n    }\n    for(int\
    \ j=0; j<=m; j++) {\n        dp[0][j] = j;\n    }\n    for(int i=1; i<=n; i++)\
    \ {\n        for(int j=1; j<=m; j++) {\n            dp[i][j] = std::min({dp[i][j],\
    \ dp[i-1][j] + 1, dp[i][j-1] + 1, dp[i-1][j-1] + (s[i-1] != t[j-1])});\n     \
    \   }\n    }\n\n    return dp[n][m];\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: dp/edit_distance.cpp
  requiredBy: []
  timestamp: '2021-06-28 01:35:33+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/dpl_1_e.test.cpp
documentation_of: dp/edit_distance.cpp
layout: document
redirect_from:
- /library/dp/edit_distance.cpp
- /library/dp/edit_distance.cpp.html
title: "\u7DE8\u96C6\u8DDD\u96E2"
---
