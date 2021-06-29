---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/grl_2_a_prim.test.cpp
    title: aizu/grl_2_a_prim.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u6700\u5C0F\u5168\u57DF\u68EE\uFF08Prim\uFF09"
    links: []
  bundledCode: "#line 1 \"graph/prim.cpp\"\n/**\n * @brief \u6700\u5C0F\u5168\u57DF\
    \u68EE\uFF08Prim\uFF09\n * @author hasegawa1\n */\n\n#include <vector>\n#include\
    \ <queue>\n\ntemplate<typename T>\nusing WeightedGraph = std::vector<std::vector<std::pair<int,T>>>;\n\
    \ntemplate<typename T>\nT prim(const std::vector<std::vector<std::pair<int,T>>>\
    \ & adjacency_list) {\n    int N = adjacency_list.size();\n    std::vector<int>\
    \ used(N);\n    std::priority_queue<std::pair<T,int>, std::vector<std::pair<T,int>>,\
    \ std::greater<std::pair<T,int>>> pq;\n\n    T res = 0;\n    for(int i=0; i<N;\
    \ i++) {\n        if(used[i]) continue;\n        pq.emplace(0, i);\n        while(!pq.empty())\
    \ {\n            auto [cost, v] = pq.top(); pq.pop();\n            if(used[v])\
    \ continue;\n            used[v] = 1;\n            res += cost;\n            for(const\
    \ auto [u, cost2]: adjacency_list[v]) {\n                pq.emplace(cost2, u);\n\
    \            }\n        }\n    }\n\n    return res;\n}\n"
  code: "/**\n * @brief \u6700\u5C0F\u5168\u57DF\u68EE\uFF08Prim\uFF09\n * @author\
    \ hasegawa1\n */\n\n#include <vector>\n#include <queue>\n\ntemplate<typename T>\n\
    using WeightedGraph = std::vector<std::vector<std::pair<int,T>>>;\n\ntemplate<typename\
    \ T>\nT prim(const std::vector<std::vector<std::pair<int,T>>> & adjacency_list)\
    \ {\n    int N = adjacency_list.size();\n    std::vector<int> used(N);\n    std::priority_queue<std::pair<T,int>,\
    \ std::vector<std::pair<T,int>>, std::greater<std::pair<T,int>>> pq;\n\n    T\
    \ res = 0;\n    for(int i=0; i<N; i++) {\n        if(used[i]) continue;\n    \
    \    pq.emplace(0, i);\n        while(!pq.empty()) {\n            auto [cost,\
    \ v] = pq.top(); pq.pop();\n            if(used[v]) continue;\n            used[v]\
    \ = 1;\n            res += cost;\n            for(const auto [u, cost2]: adjacency_list[v])\
    \ {\n                pq.emplace(cost2, u);\n            }\n        }\n    }\n\n\
    \    return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/prim.cpp
  requiredBy: []
  timestamp: '2021-06-29 19:04:00+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/grl_2_a_prim.test.cpp
documentation_of: graph/prim.cpp
layout: document
redirect_from:
- /library/graph/prim.cpp
- /library/graph/prim.cpp.html
title: "\u6700\u5C0F\u5168\u57DF\u68EE\uFF08Prim\uFF09"
---
