---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_grl_1_b.test.cpp
    title: test/aoj_grl_1_b.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u5358\u4E00\u59CB\u70B9\u6700\u77ED\u7D4C\u8DEF\u9577\uFF08\
      Bellman Ford\uFF09"
    links: []
  bundledCode: "#line 1 \"graph/bellman_ford.cpp\"\n/**\n * @brief \u5358\u4E00\u59CB\
    \u70B9\u6700\u77ED\u7D4C\u8DEF\u9577\uFF08Bellman Ford\uFF09\n * @author hasegawa1\n\
    \ */\n\n#include <vector>\n#include <algorithm>\n#include <tuple>\n#include <limits>\n\
    \ntemplate<typename T>\nusing Edges = std::vector<std::tuple<int,int,T>>;\n\n\
    template<typename T>\nstd::vector<T> bellman_ford(const std::vector<std::tuple<int,int,T>>\
    \ & edge_list, int N, int start) {\n    constexpr T negative = std::numeric_limits<T>::min();\n\
    \    constexpr T unreachable = std::numeric_limits<T>::max();\n    std::vector<T>\
    \ dist(N, unreachable);\n    dist[start] = 0;\n\n    for(int x=0; x<N-1; x++)\
    \ {\n        for(const auto [v, u, cost]: edge_list) {\n            if(dist[v]\
    \ == unreachable) continue;\n            dist[u] = std::min(dist[u], dist[v] +\
    \ cost);\n        }\n    }\n\n    std::vector<T> dist2 = dist;\n    std::vector<int>\
    \ is_negative(N);\n    for(int x=0; x<N; x++) {\n        for(const auto [v, u,\
    \ cost]: edge_list) {\n            if(dist2[v] == unreachable) continue;\n   \
    \         if(dist2[v] + cost < dist2[u]) {\n                dist2[u] = dist2[v]\
    \ + cost;\n                is_negative[u] = 1;\n            }\n            if(is_negative[v])\
    \ is_negative[u] = 1;\n        }\n    }\n\n    for(int v=0; v<N; v++) {\n    \
    \    if(is_negative[v]) dist[v] = negative;\n    }\n\n    return dist;\n}\n"
  code: "/**\n * @brief \u5358\u4E00\u59CB\u70B9\u6700\u77ED\u7D4C\u8DEF\u9577\uFF08\
    Bellman Ford\uFF09\n * @author hasegawa1\n */\n\n#include <vector>\n#include <algorithm>\n\
    #include <tuple>\n#include <limits>\n\ntemplate<typename T>\nusing Edges = std::vector<std::tuple<int,int,T>>;\n\
    \ntemplate<typename T>\nstd::vector<T> bellman_ford(const std::vector<std::tuple<int,int,T>>\
    \ & edge_list, int N, int start) {\n    constexpr T negative = std::numeric_limits<T>::min();\n\
    \    constexpr T unreachable = std::numeric_limits<T>::max();\n    std::vector<T>\
    \ dist(N, unreachable);\n    dist[start] = 0;\n\n    for(int x=0; x<N-1; x++)\
    \ {\n        for(const auto [v, u, cost]: edge_list) {\n            if(dist[v]\
    \ == unreachable) continue;\n            dist[u] = std::min(dist[u], dist[v] +\
    \ cost);\n        }\n    }\n\n    std::vector<T> dist2 = dist;\n    std::vector<int>\
    \ is_negative(N);\n    for(int x=0; x<N; x++) {\n        for(const auto [v, u,\
    \ cost]: edge_list) {\n            if(dist2[v] == unreachable) continue;\n   \
    \         if(dist2[v] + cost < dist2[u]) {\n                dist2[u] = dist2[v]\
    \ + cost;\n                is_negative[u] = 1;\n            }\n            if(is_negative[v])\
    \ is_negative[u] = 1;\n        }\n    }\n\n    for(int v=0; v<N; v++) {\n    \
    \    if(is_negative[v]) dist[v] = negative;\n    }\n\n    return dist;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/bellman_ford.cpp
  requiredBy: []
  timestamp: '2021-06-22 19:39:51+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_grl_1_b.test.cpp
documentation_of: graph/bellman_ford.cpp
layout: document
redirect_from:
- /library/graph/bellman_ford.cpp
- /library/graph/bellman_ford.cpp.html
title: "\u5358\u4E00\u59CB\u70B9\u6700\u77ED\u7D4C\u8DEF\u9577\uFF08Bellman Ford\uFF09"
---
