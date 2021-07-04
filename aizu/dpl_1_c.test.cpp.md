---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: dp/knapsack_without_limitation.cpp
    title: "\u500B\u6570\u5236\u9650\u306A\u3057\u30CA\u30C3\u30D7\u30B5\u30C3\u30AF\
      \u554F\u984C"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_1_C
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_1_C
  bundledCode: "#line 1 \"aizu/dpl_1_c.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_1_C\"\
    \n\n#include <iostream>\n#line 1 \"dp/knapsack_without_limitation.cpp\"\n/**\n\
    \ * @brief \u500B\u6570\u5236\u9650\u306A\u3057\u30CA\u30C3\u30D7\u30B5\u30C3\u30AF\
    \u554F\u984C\n * @author hasegawa1\n */\n\n#include <vector>\n#include <algorithm>\n\
    \ntemplate<typename T>\nT knapsack_without_limitation(const std::vector<T> & value,\
    \ const std::vector<int> & weight, int W) {\n    int N = value.size();\n    std::vector<T>\
    \ dp(W+1);\n\n    for(int i=0; i<N; i++) {\n        for(int j=0; j+weight[i]<=W;\
    \ j++) {\n            dp[j+weight[i]] = std::max(dp[j+weight[i]], dp[j] + value[i]);\n\
    \        }\n    }\n\n    return dp[W];\n}\n#line 5 \"aizu/dpl_1_c.test.cpp\"\n\
    \nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int N, W;\n    cin >> N >> W;\n    vector<int> v(N), w(N);\n    for(int\
    \ i=0; i<N; i++) {\n        cin >> v[i] >> w[i];\n    }\n\n    cout << knapsack_without_limitation(v,\
    \ w, W) << endl;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_1_C\"\
    \n\n#include <iostream>\n#include \"../dp/knapsack_without_limitation.cpp\"\n\n\
    using namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int N, W;\n    cin >> N >> W;\n    vector<int> v(N), w(N);\n    for(int\
    \ i=0; i<N; i++) {\n        cin >> v[i] >> w[i];\n    }\n\n    cout << knapsack_without_limitation(v,\
    \ w, W) << endl;\n}\n"
  dependsOn:
  - dp/knapsack_without_limitation.cpp
  isVerificationFile: true
  path: aizu/dpl_1_c.test.cpp
  requiredBy: []
  timestamp: '2021-07-04 23:19:20+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: aizu/dpl_1_c.test.cpp
layout: document
redirect_from:
- /verify/aizu/dpl_1_c.test.cpp
- /verify/aizu/dpl_1_c.test.cpp.html
title: aizu/dpl_1_c.test.cpp
---
