---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: graph/offline_dag_reachability.cpp
    title: "DAG\u306E\u5230\u9054\u53EF\u80FD\u6027"
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/grl_4_a.test.cpp
    title: aizu/grl_4_a.test.cpp
  - icon: ':heavy_check_mark:'
    path: aizu/railroad.test.cpp
    title: aizu/railroad.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u30C8\u30DD\u30ED\u30B8\u30AB\u30EB\u30BD\u30FC\u30C8"
    links: []
  bundledCode: "#line 1 \"graph/topological_sort.cpp\"\n/**\n * @brief \u30C8\u30DD\
    \u30ED\u30B8\u30AB\u30EB\u30BD\u30FC\u30C8\n * @author hasegawa1\n */\n\n#include\
    \ <vector>\n#include <queue>\n\nstd::vector<int> topological_sort(const std::vector<std::vector<int>>\
    \ &g) {\n    int N = g.size();\n    std::vector<int> in(N);\n    for(int v=0;\
    \ v<N; v++) {\n        for(auto u: g[v]) {\n            ++in[u];\n        }\n\
    \    }\n\n    std::queue<int> q;\n    for(int v=0; v<N; v++) {\n        if(in[v]\
    \ == 0) q.emplace(v);\n    }\n\n    std::vector<int> res;\n    while(!q.empty())\
    \ {\n        int v = q.front(); q.pop();\n        res.emplace_back(v);\n     \
    \   for(auto u: g[v]) {\n            if(--in[u] == 0) q.emplace(u);\n        }\n\
    \    }\n\n    if(res.size() == N) return res;\n    return std::vector<int>();\n\
    }\n"
  code: "/**\n * @brief \u30C8\u30DD\u30ED\u30B8\u30AB\u30EB\u30BD\u30FC\u30C8\n *\
    \ @author hasegawa1\n */\n\n#include <vector>\n#include <queue>\n\nstd::vector<int>\
    \ topological_sort(const std::vector<std::vector<int>> &g) {\n    int N = g.size();\n\
    \    std::vector<int> in(N);\n    for(int v=0; v<N; v++) {\n        for(auto u:\
    \ g[v]) {\n            ++in[u];\n        }\n    }\n\n    std::queue<int> q;\n\
    \    for(int v=0; v<N; v++) {\n        if(in[v] == 0) q.emplace(v);\n    }\n\n\
    \    std::vector<int> res;\n    while(!q.empty()) {\n        int v = q.front();\
    \ q.pop();\n        res.emplace_back(v);\n        for(auto u: g[v]) {\n      \
    \      if(--in[u] == 0) q.emplace(u);\n        }\n    }\n\n    if(res.size() ==\
    \ N) return res;\n    return std::vector<int>();\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/topological_sort.cpp
  requiredBy:
  - graph/offline_dag_reachability.cpp
  timestamp: '2021-07-21 13:34:00+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/railroad.test.cpp
  - aizu/grl_4_a.test.cpp
documentation_of: graph/topological_sort.cpp
layout: document
redirect_from:
- /library/graph/topological_sort.cpp
- /library/graph/topological_sort.cpp.html
title: "\u30C8\u30DD\u30ED\u30B8\u30AB\u30EB\u30BD\u30FC\u30C8"
---
