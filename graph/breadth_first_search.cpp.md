---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: tree/diameter.cpp
    title: "\u6728\u306E\u76F4\u5F84"
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/alds1_11_c.test.cpp
    title: aizu/alds1_11_c.test.cpp
  - icon: ':heavy_check_mark:'
    path: aizu/grl_5_a.test.cpp
    title: aizu/grl_5_a.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u5E45\u512A\u5148\u63A2\u7D22\uFF08BFS: Breadth First Search\uFF09"
    links: []
  bundledCode: "#line 1 \"graph/breadth_first_search.cpp\"\n/**\n * @brief \u5E45\u512A\
    \u5148\u63A2\u7D22\uFF08BFS: Breadth First Search\uFF09\n * @author hasegawa1\n\
    \ */\n\n#include <vector>\n#include <queue>\n\nstd::vector<int> bfs(const std::vector<std::vector<int>>\
    \ & adjacency_list, int start, int unreachable = -1) {\n    std::vector<int> dist(adjacency_list.size(),\
    \ unreachable);\n    dist[start] = 0;\n    std::queue<int> q;\n    q.emplace(start);\n\
    \n    while(!q.empty()) {\n        const auto v = q.front(); q.pop();\n      \
    \  for(const auto u: adjacency_list[v]) {\n            if(dist[u] != unreachable)\
    \ continue;\n            dist[u] = dist[v] + 1;\n            q.emplace(u);\n \
    \       }\n    }\n\n    return dist;\n}\n"
  code: "/**\n * @brief \u5E45\u512A\u5148\u63A2\u7D22\uFF08BFS: Breadth First Search\uFF09\
    \n * @author hasegawa1\n */\n\n#include <vector>\n#include <queue>\n\nstd::vector<int>\
    \ bfs(const std::vector<std::vector<int>> & adjacency_list, int start, int unreachable\
    \ = -1) {\n    std::vector<int> dist(adjacency_list.size(), unreachable);\n  \
    \  dist[start] = 0;\n    std::queue<int> q;\n    q.emplace(start);\n\n    while(!q.empty())\
    \ {\n        const auto v = q.front(); q.pop();\n        for(const auto u: adjacency_list[v])\
    \ {\n            if(dist[u] != unreachable) continue;\n            dist[u] = dist[v]\
    \ + 1;\n            q.emplace(u);\n        }\n    }\n\n    return dist;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/breadth_first_search.cpp
  requiredBy:
  - tree/diameter.cpp
  timestamp: '2021-06-28 02:10:57+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/alds1_11_c.test.cpp
  - aizu/grl_5_a.test.cpp
documentation_of: graph/breadth_first_search.cpp
layout: document
redirect_from:
- /library/graph/breadth_first_search.cpp
- /library/graph/breadth_first_search.cpp.html
title: "\u5E45\u512A\u5148\u63A2\u7D22\uFF08BFS: Breadth First Search\uFF09"
---
