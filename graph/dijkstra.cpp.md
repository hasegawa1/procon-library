---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: tree/diameter.cpp
    title: "\u6728\u306E\u76F4\u5F84"
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/festivals_in_joi_kingdom.test.cpp
    title: aizu/festivals_in_joi_kingdom.test.cpp
  - icon: ':heavy_check_mark:'
    path: aizu/grl_1_a.test.cpp
    title: aizu/grl_1_a.test.cpp
  - icon: ':heavy_check_mark:'
    path: aizu/grl_5_a.test.cpp
    title: aizu/grl_5_a.test.cpp
  - icon: ':heavy_check_mark:'
    path: aizu/railroad.test.cpp
    title: aizu/railroad.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u5358\u4E00\u59CB\u70B9\u6700\u77ED\u7D4C\u8DEF\u9577\uFF08\
      Dijkstra\uFF09"
    links: []
  bundledCode: "#line 1 \"graph/dijkstra.cpp\"\n/**\n * @brief \u5358\u4E00\u59CB\u70B9\
    \u6700\u77ED\u7D4C\u8DEF\u9577\uFF08Dijkstra\uFF09\n * @author hasegawa1\n */\n\
    \n#include <vector>\n#include <queue>\n#include <functional>\n\ntemplate<typename\
    \ T>\nusing WeightedGraph = std::vector<std::vector<std::pair<int,T>>>;\n\ntemplate<typename\
    \ T>\nstd::vector<T> dijkstra(const std::vector<std::vector<std::pair<int,T>>>\
    \ & adjacency_list, int start, T unreachable = -1) {\n    std::vector<T> dist(adjacency_list.size(),\
    \ unreachable);\n    std::priority_queue<std::pair<T,int>, std::vector<std::pair<T,int>>,\
    \ std::greater<std::pair<T,int>>> pq;\n    dist[start] = 0;\n    pq.emplace(0,\
    \ start);\n\n    while(!pq.empty()) {\n        const auto [cost, v] = pq.top();\
    \ pq.pop();\n        if(dist[v] != unreachable && dist[v] < cost) continue;\n\
    \        for(const auto [u, cost2]: adjacency_list[v]) {\n            if(cost2\
    \ == unreachable) continue;\n            T next_cost = cost + cost2;\n       \
    \     if(dist[u] != unreachable && dist[u] <= next_cost) continue;\n         \
    \   dist[u] = next_cost;\n            pq.emplace(next_cost, u);\n        }\n \
    \   }\n\n    return dist;\n}\n\ntemplate<typename T>\nstd::vector<T> dijkstra(const\
    \ std::vector<std::vector<std::pair<int,T>>> & adjacency_list, const std::vector<int>\
    \ & start, T unreachable = -1) {\n    std::vector<T> dist(adjacency_list.size(),\
    \ unreachable);\n    std::priority_queue<std::pair<T,int>, std::vector<std::pair<T,int>>,\
    \ std::greater<std::pair<T,int>>> pq;\n    for(const auto s: start) {\n      \
    \  dist[s] = 0;\n        pq.emplace(0, s);\n    }\n\n    while(!pq.empty()) {\n\
    \        const auto [cost, v] = pq.top(); pq.pop();\n        if(dist[v] != unreachable\
    \ && dist[v] < cost) continue;\n        for(const auto [u, cost2]: adjacency_list[v])\
    \ {\n            if(cost2 == unreachable) continue;\n            T next_cost =\
    \ cost + cost2;\n            if(dist[u] != unreachable && dist[u] <= next_cost)\
    \ continue;\n            dist[u] = next_cost;\n            pq.emplace(next_cost,\
    \ u);\n        }\n    }\n\n    return dist;\n}\n"
  code: "/**\n * @brief \u5358\u4E00\u59CB\u70B9\u6700\u77ED\u7D4C\u8DEF\u9577\uFF08\
    Dijkstra\uFF09\n * @author hasegawa1\n */\n\n#include <vector>\n#include <queue>\n\
    #include <functional>\n\ntemplate<typename T>\nusing WeightedGraph = std::vector<std::vector<std::pair<int,T>>>;\n\
    \ntemplate<typename T>\nstd::vector<T> dijkstra(const std::vector<std::vector<std::pair<int,T>>>\
    \ & adjacency_list, int start, T unreachable = -1) {\n    std::vector<T> dist(adjacency_list.size(),\
    \ unreachable);\n    std::priority_queue<std::pair<T,int>, std::vector<std::pair<T,int>>,\
    \ std::greater<std::pair<T,int>>> pq;\n    dist[start] = 0;\n    pq.emplace(0,\
    \ start);\n\n    while(!pq.empty()) {\n        const auto [cost, v] = pq.top();\
    \ pq.pop();\n        if(dist[v] != unreachable && dist[v] < cost) continue;\n\
    \        for(const auto [u, cost2]: adjacency_list[v]) {\n            if(cost2\
    \ == unreachable) continue;\n            T next_cost = cost + cost2;\n       \
    \     if(dist[u] != unreachable && dist[u] <= next_cost) continue;\n         \
    \   dist[u] = next_cost;\n            pq.emplace(next_cost, u);\n        }\n \
    \   }\n\n    return dist;\n}\n\ntemplate<typename T>\nstd::vector<T> dijkstra(const\
    \ std::vector<std::vector<std::pair<int,T>>> & adjacency_list, const std::vector<int>\
    \ & start, T unreachable = -1) {\n    std::vector<T> dist(adjacency_list.size(),\
    \ unreachable);\n    std::priority_queue<std::pair<T,int>, std::vector<std::pair<T,int>>,\
    \ std::greater<std::pair<T,int>>> pq;\n    for(const auto s: start) {\n      \
    \  dist[s] = 0;\n        pq.emplace(0, s);\n    }\n\n    while(!pq.empty()) {\n\
    \        const auto [cost, v] = pq.top(); pq.pop();\n        if(dist[v] != unreachable\
    \ && dist[v] < cost) continue;\n        for(const auto [u, cost2]: adjacency_list[v])\
    \ {\n            if(cost2 == unreachable) continue;\n            T next_cost =\
    \ cost + cost2;\n            if(dist[u] != unreachable && dist[u] <= next_cost)\
    \ continue;\n            dist[u] = next_cost;\n            pq.emplace(next_cost,\
    \ u);\n        }\n    }\n\n    return dist;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/dijkstra.cpp
  requiredBy:
  - tree/diameter.cpp
  timestamp: '2021-07-20 13:31:57+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/grl_1_a.test.cpp
  - aizu/festivals_in_joi_kingdom.test.cpp
  - aizu/railroad.test.cpp
  - aizu/grl_5_a.test.cpp
documentation_of: graph/dijkstra.cpp
layout: document
redirect_from:
- /library/graph/dijkstra.cpp
- /library/graph/dijkstra.cpp.html
title: "\u5358\u4E00\u59CB\u70B9\u6700\u77ED\u7D4C\u8DEF\u9577\uFF08Dijkstra\uFF09"
---
