---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_dpl_2_a.test.cpp
    title: test/aoj_dpl_2_a.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u6700\u77ED\u30CF\u30DF\u30EB\u30C8\u30F3\u9589\u8DEF\uFF08\u5DE1\
      \u56DE\u30BB\u30FC\u30EB\u30B9\u30DE\u30F3\u554F\u984C\uFF09"
    links: []
  bundledCode: "#line 1 \"graph/shortest_hamilton_cycle.cpp\"\n/**\n * @brief \u6700\
    \u77ED\u30CF\u30DF\u30EB\u30C8\u30F3\u9589\u8DEF\uFF08\u5DE1\u56DE\u30BB\u30FC\
    \u30EB\u30B9\u30DE\u30F3\u554F\u984C\uFF09\n * @author hasegawa1\n */\n\n#include\
    \ <vector>\n\ntemplate<typename T>\nT shortest_hamilton_cycle(const std::vector<std::vector<T>>\
    \ & adjacency_matrix, T unreachable = -1) {\n    const int N = adjacency_matrix.size();\n\
    \    std::vector<std::vector<T>> dist(1<<N, std::vector<T>(N, unreachable));\n\
    \    dist[0][0] = 0;\n\n    for(int bit=0; bit<(1<<N); bit++) {\n        for(int\
    \ v=0; v<N; v++) {\n            if(dist[bit][v] == unreachable) continue;\n  \
    \          for(int u=0; u<N; u++) {\n                if(bit>>u & 1) continue;\n\
    \                if(adjacency_matrix[v][u] == unreachable) continue;\n       \
    \         if(dist[bit | 1<<u][u] == unreachable) dist[bit | 1<<u][u] = dist[bit][v]\
    \ + adjacency_matrix[v][u];\n                dist[bit | 1<<u][u] = std::min(dist[bit\
    \ | 1<<u][u], dist[bit][v] + adjacency_matrix[v][u]);\n            }\n       \
    \ }\n    }\n\n    return dist.back()[0];\n}\n"
  code: "/**\n * @brief \u6700\u77ED\u30CF\u30DF\u30EB\u30C8\u30F3\u9589\u8DEF\uFF08\
    \u5DE1\u56DE\u30BB\u30FC\u30EB\u30B9\u30DE\u30F3\u554F\u984C\uFF09\n * @author\
    \ hasegawa1\n */\n\n#include <vector>\n\ntemplate<typename T>\nT shortest_hamilton_cycle(const\
    \ std::vector<std::vector<T>> & adjacency_matrix, T unreachable = -1) {\n    const\
    \ int N = adjacency_matrix.size();\n    std::vector<std::vector<T>> dist(1<<N,\
    \ std::vector<T>(N, unreachable));\n    dist[0][0] = 0;\n\n    for(int bit=0;\
    \ bit<(1<<N); bit++) {\n        for(int v=0; v<N; v++) {\n            if(dist[bit][v]\
    \ == unreachable) continue;\n            for(int u=0; u<N; u++) {\n          \
    \      if(bit>>u & 1) continue;\n                if(adjacency_matrix[v][u] ==\
    \ unreachable) continue;\n                if(dist[bit | 1<<u][u] == unreachable)\
    \ dist[bit | 1<<u][u] = dist[bit][v] + adjacency_matrix[v][u];\n             \
    \   dist[bit | 1<<u][u] = std::min(dist[bit | 1<<u][u], dist[bit][v] + adjacency_matrix[v][u]);\n\
    \            }\n        }\n    }\n\n    return dist.back()[0];\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/shortest_hamilton_cycle.cpp
  requiredBy: []
  timestamp: '2021-06-28 00:16:25+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_dpl_2_a.test.cpp
documentation_of: graph/shortest_hamilton_cycle.cpp
layout: document
redirect_from:
- /library/graph/shortest_hamilton_cycle.cpp
- /library/graph/shortest_hamilton_cycle.cpp.html
title: "\u6700\u77ED\u30CF\u30DF\u30EB\u30C8\u30F3\u9589\u8DEF\uFF08\u5DE1\u56DE\u30BB\
  \u30FC\u30EB\u30B9\u30DE\u30F3\u554F\u984C\uFF09"
---
