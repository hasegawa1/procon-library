---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/breadth_first_search.cpp
    title: "\u5E45\u512A\u5148\u63A2\u7D22\uFF08BFS: Breadth First Search\uFF09"
  - icon: ':heavy_check_mark:'
    path: graph/dijkstra.cpp
    title: "\u5358\u4E00\u59CB\u70B9\u6700\u77ED\u7D4C\u8DEF\u9577\uFF08Dijkstra\uFF09"
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/grl_5_a.test.cpp
    title: aizu/grl_5_a.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u6728\u306E\u76F4\u5F84"
    links: []
  bundledCode: "#line 1 \"tree/diameter.cpp\"\n/**\n * @brief \u6728\u306E\u76F4\u5F84\
    \n * @author hasegawa1\n */\n\n#include <vector>\n#include <algorithm>\n#line\
    \ 1 \"graph/breadth_first_search.cpp\"\n/**\n * @brief \u5E45\u512A\u5148\u63A2\
    \u7D22\uFF08BFS: Breadth First Search\uFF09\n * @author hasegawa1\n */\n\n#line\
    \ 7 \"graph/breadth_first_search.cpp\"\n#include <queue>\n\nstd::vector<int> bfs(const\
    \ std::vector<std::vector<int>> & adjacency_list, int start, int unreachable =\
    \ -1) {\n    std::vector<int> dist(adjacency_list.size(), unreachable);\n    dist[start]\
    \ = 0;\n    std::queue<int> q;\n    q.emplace(start);\n\n    while(!q.empty())\
    \ {\n        const auto v = q.front(); q.pop();\n        for(const auto u: adjacency_list[v])\
    \ {\n            if(dist[u] != unreachable) continue;\n            dist[u] = dist[v]\
    \ + 1;\n            q.emplace(u);\n        }\n    }\n\n    return dist;\n}\n#line\
    \ 1 \"graph/dijkstra.cpp\"\n/**\n * @brief \u5358\u4E00\u59CB\u70B9\u6700\u77ED\
    \u7D4C\u8DEF\u9577\uFF08Dijkstra\uFF09\n * @author hasegawa1\n */\n\n#line 8 \"\
    graph/dijkstra.cpp\"\n#include <functional>\n\ntemplate<typename T>\nusing WeightedGraph\
    \ = std::vector<std::vector<std::pair<int,T>>>;\n\ntemplate<typename T>\nstd::vector<T>\
    \ dijkstra(const std::vector<std::vector<std::pair<int,T>>> & adjacency_list,\
    \ int start, T unreachable = -1) {\n    std::vector<T> dist(adjacency_list.size(),\
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
    \ u);\n        }\n    }\n\n    return dist;\n}\n#line 10 \"tree/diameter.cpp\"\
    \n\ntemplate<typename T>\nusing WeightedGraph = std::vector<std::vector<std::pair<int,T>>>;\n\
    \nint diameter(const std::vector<std::vector<int>> &g) {\n    auto dist = bfs(g,\
    \ 0);\n    int v = std::distance(dist.begin(), std::max_element(dist.begin(),\
    \ dist.end()));\n    dist = bfs(g, v);\n    return *std::max_element(dist.begin(),\
    \ dist.end());\n}\n\ntemplate<typename T>\nint diameter(const std::vector<std::vector<std::pair<int,T>>>\
    \ &g) {\n    auto dist = dijkstra(g, 0);\n    int v = std::distance(dist.begin(),\
    \ std::max_element(dist.begin(), dist.end()));\n    dist = dijkstra(g, v);\n \
    \   return *std::max_element(dist.begin(), dist.end());\n}\n"
  code: "/**\n * @brief \u6728\u306E\u76F4\u5F84\n * @author hasegawa1\n */\n\n#include\
    \ <vector>\n#include <algorithm>\n#include \"../graph/breadth_first_search.cpp\"\
    \n#include \"../graph/dijkstra.cpp\"\n\ntemplate<typename T>\nusing WeightedGraph\
    \ = std::vector<std::vector<std::pair<int,T>>>;\n\nint diameter(const std::vector<std::vector<int>>\
    \ &g) {\n    auto dist = bfs(g, 0);\n    int v = std::distance(dist.begin(), std::max_element(dist.begin(),\
    \ dist.end()));\n    dist = bfs(g, v);\n    return *std::max_element(dist.begin(),\
    \ dist.end());\n}\n\ntemplate<typename T>\nint diameter(const std::vector<std::vector<std::pair<int,T>>>\
    \ &g) {\n    auto dist = dijkstra(g, 0);\n    int v = std::distance(dist.begin(),\
    \ std::max_element(dist.begin(), dist.end()));\n    dist = dijkstra(g, v);\n \
    \   return *std::max_element(dist.begin(), dist.end());\n}\n"
  dependsOn:
  - graph/breadth_first_search.cpp
  - graph/dijkstra.cpp
  isVerificationFile: false
  path: tree/diameter.cpp
  requiredBy: []
  timestamp: '2021-07-21 13:42:24+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/grl_5_a.test.cpp
documentation_of: tree/diameter.cpp
layout: document
redirect_from:
- /library/tree/diameter.cpp
- /library/tree/diameter.cpp.html
title: "\u6728\u306E\u76F4\u5F84"
---