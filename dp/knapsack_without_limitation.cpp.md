---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/dpl_1_c.test.cpp
    title: aizu/dpl_1_c.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u500B\u6570\u5236\u9650\u306A\u3057\u30CA\u30C3\u30D7\u30B5\u30C3\
      \u30AF\u554F\u984C"
    links: []
  bundledCode: "#line 1 \"dp/knapsack_without_limitation.cpp\"\n/**\n * @brief \u500B\
    \u6570\u5236\u9650\u306A\u3057\u30CA\u30C3\u30D7\u30B5\u30C3\u30AF\u554F\u984C\
    \n * @author hasegawa1\n */\n\n#include <vector>\n#include <algorithm>\n\ntemplate<typename\
    \ T>\nT knapsack_without_limitation(const std::vector<T> & value, const std::vector<int>\
    \ & weight, int W) {\n    int N = value.size();\n    std::vector<T> dp(W+1);\n\
    \n    for(int i=0; i<N; i++) {\n        for(int j=0; j+weight[i]<=W; j++) {\n\
    \            dp[j+weight[i]] = std::max(dp[j+weight[i]], dp[j] + value[i]);\n\
    \        }\n    }\n\n    return dp[W];\n}\n"
  code: "/**\n * @brief \u500B\u6570\u5236\u9650\u306A\u3057\u30CA\u30C3\u30D7\u30B5\
    \u30C3\u30AF\u554F\u984C\n * @author hasegawa1\n */\n\n#include <vector>\n#include\
    \ <algorithm>\n\ntemplate<typename T>\nT knapsack_without_limitation(const std::vector<T>\
    \ & value, const std::vector<int> & weight, int W) {\n    int N = value.size();\n\
    \    std::vector<T> dp(W+1);\n\n    for(int i=0; i<N; i++) {\n        for(int\
    \ j=0; j+weight[i]<=W; j++) {\n            dp[j+weight[i]] = std::max(dp[j+weight[i]],\
    \ dp[j] + value[i]);\n        }\n    }\n\n    return dp[W];\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: dp/knapsack_without_limitation.cpp
  requiredBy: []
  timestamp: '2021-07-04 23:19:20+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/dpl_1_c.test.cpp
documentation_of: dp/knapsack_without_limitation.cpp
layout: document
redirect_from:
- /library/dp/knapsack_without_limitation.cpp
- /library/dp/knapsack_without_limitation.cpp.html
title: "\u500B\u6570\u5236\u9650\u306A\u3057\u30CA\u30C3\u30D7\u30B5\u30C3\u30AF\u554F\
  \u984C"
---
