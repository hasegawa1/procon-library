---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "\u6700\u77ED\u30CF\u30DF\u30EB\u30C8\u30F3\u8DEF"
    links:
    - https://atcoder.jp/contests/abc190/submissions/24351786
    - https://atcoder.jp/contests/past202005-open/submissions/24351764
  bundledCode: "#line 1 \"graph/shortest_hamilton_path.cpp\"\n/**\n * @brief \u6700\
    \u77ED\u30CF\u30DF\u30EB\u30C8\u30F3\u8DEF\n * @author hasegawa1\n */\n\n// verify:\
    \ https://atcoder.jp/contests/abc190/submissions/24351786\n// verify: https://atcoder.jp/contests/past202005-open/submissions/24351764\n\
    \n#include <vector>\n\ntemplate<typename T>\nT shortest_hamilton_path(const std::vector<std::vector<T>>\
    \ & adjacency_matrix, int start=-1, T unreachable = -1) {\n    const int N = adjacency_matrix.size();\n\
    \    std::vector<std::vector<T>> dist(1<<N, std::vector<T>(N, unreachable));\n\
    \    for(int v=0; v<N; v++) {\n        dist[1<<v][v] = 0;\n    }\n\n    for(int\
    \ bit=0; bit<(1<<N); bit++) {\n        for(int v=0; v<N; v++) {\n            if(dist[bit][v]\
    \ == unreachable) continue;\n            for(int u=0; u<N; u++) {\n          \
    \      if(bit>>u & 1) continue;\n                if(adjacency_matrix[v][u] ==\
    \ unreachable) continue;\n                if(dist[bit | 1<<u][u] == unreachable)\
    \ dist[bit | 1<<u][u] = dist[bit][v] + adjacency_matrix[v][u];\n             \
    \   dist[bit | 1<<u][u] = std::min(dist[bit | 1<<u][u], dist[bit][v] + adjacency_matrix[v][u]);\n\
    \            }\n        }\n    }\n\n    if(start == -1) return (*min_element(dist.back().begin(),\
    \ dist.back().end()));\n    return dist.back()[start];\n}\n"
  code: "/**\n * @brief \u6700\u77ED\u30CF\u30DF\u30EB\u30C8\u30F3\u8DEF\n * @author\
    \ hasegawa1\n */\n\n// verify: https://atcoder.jp/contests/abc190/submissions/24351786\n\
    // verify: https://atcoder.jp/contests/past202005-open/submissions/24351764\n\n\
    #include <vector>\n\ntemplate<typename T>\nT shortest_hamilton_path(const std::vector<std::vector<T>>\
    \ & adjacency_matrix, int start=-1, T unreachable = -1) {\n    const int N = adjacency_matrix.size();\n\
    \    std::vector<std::vector<T>> dist(1<<N, std::vector<T>(N, unreachable));\n\
    \    for(int v=0; v<N; v++) {\n        dist[1<<v][v] = 0;\n    }\n\n    for(int\
    \ bit=0; bit<(1<<N); bit++) {\n        for(int v=0; v<N; v++) {\n            if(dist[bit][v]\
    \ == unreachable) continue;\n            for(int u=0; u<N; u++) {\n          \
    \      if(bit>>u & 1) continue;\n                if(adjacency_matrix[v][u] ==\
    \ unreachable) continue;\n                if(dist[bit | 1<<u][u] == unreachable)\
    \ dist[bit | 1<<u][u] = dist[bit][v] + adjacency_matrix[v][u];\n             \
    \   dist[bit | 1<<u][u] = std::min(dist[bit | 1<<u][u], dist[bit][v] + adjacency_matrix[v][u]);\n\
    \            }\n        }\n    }\n\n    if(start == -1) return (*min_element(dist.back().begin(),\
    \ dist.back().end()));\n    return dist.back()[start];\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/shortest_hamilton_path.cpp
  requiredBy: []
  timestamp: '2021-07-18 19:38:47+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: graph/shortest_hamilton_path.cpp
layout: document
redirect_from:
- /library/graph/shortest_hamilton_path.cpp
- /library/graph/shortest_hamilton_path.cpp.html
title: "\u6700\u77ED\u30CF\u30DF\u30EB\u30C8\u30F3\u8DEF"
---
