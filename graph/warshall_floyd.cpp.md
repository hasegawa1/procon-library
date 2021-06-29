---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/grl_1_c.test.cpp
    title: aizu/grl_1_c.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u5168\u70B9\u5BFE\u9593\u6700\u77ED\u7D4C\u8DEF\u9577\uFF08\
      Warshall Floyd\uFF09"
    links: []
  bundledCode: "#line 1 \"graph/warshall_floyd.cpp\"\n/**\n * @brief \u5168\u70B9\u5BFE\
    \u9593\u6700\u77ED\u7D4C\u8DEF\u9577\uFF08Warshall Floyd\uFF09\n * @author hasegawa1\n\
    \ */\n\n#include <vector>\n#include <limits>\n#include <algorithm>\n\ntemplate<typename\
    \ T>\nstd::vector<std::vector<T>> warshall_floyd(const std::vector<std::vector<T>>\
    \ & adjacency_matrix, T unreachable = std::numeric_limits<T>::max()) {\n    const\
    \ int N = adjacency_matrix.size();\n    std::vector<std::vector<T>> dist = adjacency_matrix;\n\
    \n    for(int k=0; k<N; k++) {\n        for(int i=0; i<N; i++) {\n           \
    \ for(int j=0; j<N; j++) {\n                if(dist[i][k] == unreachable || dist[k][j]\
    \ == unreachable) continue;\n                if(dist[i][j] == unreachable) dist[i][j]\
    \ = dist[i][k] + dist[k][j];\n                else dist[i][j] = std::min(dist[i][j],\
    \ dist[i][k] + dist[k][j]);\n            }\n        }\n    }\n\n    return dist;\n\
    }\n"
  code: "/**\n * @brief \u5168\u70B9\u5BFE\u9593\u6700\u77ED\u7D4C\u8DEF\u9577\uFF08\
    Warshall Floyd\uFF09\n * @author hasegawa1\n */\n\n#include <vector>\n#include\
    \ <limits>\n#include <algorithm>\n\ntemplate<typename T>\nstd::vector<std::vector<T>>\
    \ warshall_floyd(const std::vector<std::vector<T>> & adjacency_matrix, T unreachable\
    \ = std::numeric_limits<T>::max()) {\n    const int N = adjacency_matrix.size();\n\
    \    std::vector<std::vector<T>> dist = adjacency_matrix;\n\n    for(int k=0;\
    \ k<N; k++) {\n        for(int i=0; i<N; i++) {\n            for(int j=0; j<N;\
    \ j++) {\n                if(dist[i][k] == unreachable || dist[k][j] == unreachable)\
    \ continue;\n                if(dist[i][j] == unreachable) dist[i][j] = dist[i][k]\
    \ + dist[k][j];\n                else dist[i][j] = std::min(dist[i][j], dist[i][k]\
    \ + dist[k][j]);\n            }\n        }\n    }\n\n    return dist;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/warshall_floyd.cpp
  requiredBy: []
  timestamp: '2021-06-22 22:39:49+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/grl_1_c.test.cpp
documentation_of: graph/warshall_floyd.cpp
layout: document
redirect_from:
- /library/graph/warshall_floyd.cpp
- /library/graph/warshall_floyd.cpp.html
title: "\u5168\u70B9\u5BFE\u9593\u6700\u77ED\u7D4C\u8DEF\u9577\uFF08Warshall Floyd\uFF09"
---
