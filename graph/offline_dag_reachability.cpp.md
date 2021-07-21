---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/topological_sort.cpp
    title: "\u30C8\u30DD\u30ED\u30B8\u30AB\u30EB\u30BD\u30FC\u30C8"
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/railroad.test.cpp
    title: aizu/railroad.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "DAG\u306E\u5230\u9054\u53EF\u80FD\u6027"
    links: []
  bundledCode: "#line 1 \"graph/offline_dag_reachability.cpp\"\n/**\n * @brief DAG\u306E\
    \u5230\u9054\u53EF\u80FD\u6027\n * @author hasegawa1\n */\n\n#include <vector>\n\
    #include <queue>\n#include <bitset>\n#line 1 \"graph/topological_sort.cpp\"\n\
    /**\n * @brief \u30C8\u30DD\u30ED\u30B8\u30AB\u30EB\u30BD\u30FC\u30C8\n * @author\
    \ hasegawa1\n */\n\n#line 8 \"graph/topological_sort.cpp\"\n\nstd::vector<int>\
    \ topological_sort(const std::vector<std::vector<int>> &g) {\n    int N = g.size();\n\
    \    std::vector<int> in(N);\n    for(int v=0; v<N; v++) {\n        for(auto u:\
    \ g[v]) {\n            ++in[u];\n        }\n    }\n\n    std::queue<int> q;\n\
    \    for(int v=0; v<N; v++) {\n        if(in[v] == 0) q.emplace(v);\n    }\n\n\
    \    std::vector<int> res;\n    while(!q.empty()) {\n        int v = q.front();\
    \ q.pop();\n        res.emplace_back(v);\n        for(auto u: g[v]) {\n      \
    \      if(--in[u] == 0) q.emplace(u);\n        }\n    }\n\n    if(res.size() ==\
    \ N) return res;\n    return std::vector<int>();\n}\n#line 10 \"graph/offline_dag_reachability.cpp\"\
    \n\nstd::vector<int> offline_dag_reachability(const std::vector<std::vector<int>>\
    \ & g, const std::vector<std::pair<int,int>> & query) {\n    const int N = g.size();\n\
    \    const int Q = query.size();\n    constexpr int PARALLEL = 1024;\n    std::vector<int>\
    \ ord = topological_sort(g);\n\n    std::vector<int> res;\n    for(int i=0; i<Q;\
    \ i+=PARALLEL) {\n        std::vector<std::bitset<PARALLEL>> dp(N);\n        for(int\
    \ j=0; j<PARALLEL; j++) {\n            if(i+j >= Q) break;\n            auto [s,\
    \ t] = query[i+j];\n            dp[s].set(j);\n        }\n        for(const auto\
    \ v: ord) {\n            for(const auto u: g[v]) {\n                dp[u] |= dp[v];\n\
    \            }\n        }\n        for(int j=0; j<PARALLEL; j++) {\n         \
    \   if(i+j >= Q) break;\n            auto [s, t] = query[i+j];\n            res.emplace_back(dp[t][j]);\n\
    \        }\n    }\n    return res;\n}\n"
  code: "/**\n * @brief DAG\u306E\u5230\u9054\u53EF\u80FD\u6027\n * @author hasegawa1\n\
    \ */\n\n#include <vector>\n#include <queue>\n#include <bitset>\n#include \"./topological_sort.cpp\"\
    \n\nstd::vector<int> offline_dag_reachability(const std::vector<std::vector<int>>\
    \ & g, const std::vector<std::pair<int,int>> & query) {\n    const int N = g.size();\n\
    \    const int Q = query.size();\n    constexpr int PARALLEL = 1024;\n    std::vector<int>\
    \ ord = topological_sort(g);\n\n    std::vector<int> res;\n    for(int i=0; i<Q;\
    \ i+=PARALLEL) {\n        std::vector<std::bitset<PARALLEL>> dp(N);\n        for(int\
    \ j=0; j<PARALLEL; j++) {\n            if(i+j >= Q) break;\n            auto [s,\
    \ t] = query[i+j];\n            dp[s].set(j);\n        }\n        for(const auto\
    \ v: ord) {\n            for(const auto u: g[v]) {\n                dp[u] |= dp[v];\n\
    \            }\n        }\n        for(int j=0; j<PARALLEL; j++) {\n         \
    \   if(i+j >= Q) break;\n            auto [s, t] = query[i+j];\n            res.emplace_back(dp[t][j]);\n\
    \        }\n    }\n    return res;\n}\n"
  dependsOn:
  - graph/topological_sort.cpp
  isVerificationFile: false
  path: graph/offline_dag_reachability.cpp
  requiredBy: []
  timestamp: '2021-07-21 13:34:00+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/railroad.test.cpp
documentation_of: graph/offline_dag_reachability.cpp
layout: document
redirect_from:
- /library/graph/offline_dag_reachability.cpp
- /library/graph/offline_dag_reachability.cpp.html
title: "DAG\u306E\u5230\u9054\u53EF\u80FD\u6027"
---
