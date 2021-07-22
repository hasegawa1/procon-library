---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/poison_swamp.test.cpp
    title: aizu/poison_swamp.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: 01-BFS
    links: []
  bundledCode: "#line 1 \"graph/breadth_first_search_01.cpp\"\n/**\n * @brief 01-BFS\n\
    \ * @author hasegawa1\n */\n\n#include <vector>\n#include <queue>\n\ntemplate<typename\
    \ T>\nusing WeightedGraph = std::vector<std::vector<std::pair<int,T>>>;\n\nstd::vector<int>\
    \ bfs01(const std::vector<std::vector<std::pair<int,int>>> & adjacency_list, int\
    \ start, int unreachable = -1) {\n    std::vector<int> dist(adjacency_list.size(),\
    \ unreachable);\n    std::deque<int> dq;\n\n    dist[start] = 0;\n    dq.emplace_front(start);\n\
    \n    while(!dq.empty()) {\n        const auto v = dq.front(); dq.pop_front();\n\
    \        for(const auto [u, cost]: adjacency_list[v]) {\n            if(dist[u]\
    \ != unreachable && dist[v] + cost >= dist[u]) continue;\n            dist[u]\
    \ = dist[v] + cost;\n            if(cost == 0) dq.emplace_front(u);\n        \
    \    if(cost == 1) dq.emplace_back(u);\n        }\n    }\n\n    return dist;\n\
    }\n"
  code: "/**\n * @brief 01-BFS\n * @author hasegawa1\n */\n\n#include <vector>\n#include\
    \ <queue>\n\ntemplate<typename T>\nusing WeightedGraph = std::vector<std::vector<std::pair<int,T>>>;\n\
    \nstd::vector<int> bfs01(const std::vector<std::vector<std::pair<int,int>>> &\
    \ adjacency_list, int start, int unreachable = -1) {\n    std::vector<int> dist(adjacency_list.size(),\
    \ unreachable);\n    std::deque<int> dq;\n\n    dist[start] = 0;\n    dq.emplace_front(start);\n\
    \n    while(!dq.empty()) {\n        const auto v = dq.front(); dq.pop_front();\n\
    \        for(const auto [u, cost]: adjacency_list[v]) {\n            if(dist[u]\
    \ != unreachable && dist[v] + cost >= dist[u]) continue;\n            dist[u]\
    \ = dist[v] + cost;\n            if(cost == 0) dq.emplace_front(u);\n        \
    \    if(cost == 1) dq.emplace_back(u);\n        }\n    }\n\n    return dist;\n\
    }\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/breadth_first_search_01.cpp
  requiredBy: []
  timestamp: '2021-07-22 17:45:24+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/poison_swamp.test.cpp
documentation_of: graph/breadth_first_search_01.cpp
layout: document
redirect_from:
- /library/graph/breadth_first_search_01.cpp
- /library/graph/breadth_first_search_01.cpp.html
title: 01-BFS
---
