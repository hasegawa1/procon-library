---
data:
  _extendedDependsOn: []
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
  bundledCode: "#line 1 \"graph/diameter.cpp\"\n/**\n * @brief \u6728\u306E\u76F4\u5F84\
    \n * @author hasegawa1\n */\n\n#include <vector>\n#include <algorithm>\n\ntemplate<typename\
    \ T>\nusing WeightedGraph = std::vector<std::vector<std::pair<int,T>>>;\n\nint\
    \ diameter(const std::vector<std::vector<int>> &g) {\n    auto dist = bfs(g, 0);\n\
    \    int v = std::distance(dist.begin(), std::max_element(dist.begin(), dist.end()));\n\
    \    dist = bfs(g, v);\n    return *std::max_element(dist.begin(), dist.end());\n\
    }\n\ntemplate<typename T>\nint diameter(const std::vector<std::vector<std::pair<int,T>>>\
    \ &g) {\n    auto dist = dijkstra(g, 0);\n    int v = std::distance(dist.begin(),\
    \ std::max_element(dist.begin(), dist.end()));\n    dist = dijkstra(g, v);\n \
    \   return *std::max_element(dist.begin(), dist.end());\n}\n"
  code: "/**\n * @brief \u6728\u306E\u76F4\u5F84\n * @author hasegawa1\n */\n\n#include\
    \ <vector>\n#include <algorithm>\n\ntemplate<typename T>\nusing WeightedGraph\
    \ = std::vector<std::vector<std::pair<int,T>>>;\n\nint diameter(const std::vector<std::vector<int>>\
    \ &g) {\n    auto dist = bfs(g, 0);\n    int v = std::distance(dist.begin(), std::max_element(dist.begin(),\
    \ dist.end()));\n    dist = bfs(g, v);\n    return *std::max_element(dist.begin(),\
    \ dist.end());\n}\n\ntemplate<typename T>\nint diameter(const std::vector<std::vector<std::pair<int,T>>>\
    \ &g) {\n    auto dist = dijkstra(g, 0);\n    int v = std::distance(dist.begin(),\
    \ std::max_element(dist.begin(), dist.end()));\n    dist = dijkstra(g, v);\n \
    \   return *std::max_element(dist.begin(), dist.end());\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/diameter.cpp
  requiredBy: []
  timestamp: '2021-07-17 13:23:02+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/grl_5_a.test.cpp
documentation_of: graph/diameter.cpp
layout: document
redirect_from:
- /library/graph/diameter.cpp
- /library/graph/diameter.cpp.html
title: "\u6728\u306E\u76F4\u5F84"
---
