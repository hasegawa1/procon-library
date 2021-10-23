---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/festivals_in_joi_kingdom.test.cpp
    title: aizu/festivals_in_joi_kingdom.test.cpp
  - icon: ':heavy_check_mark:'
    path: aizu/grl_2_a_kruskal.test.cpp
    title: aizu/grl_2_a_kruskal.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u6700\u5C0F\u5168\u57DF\u68EE\uFF08Kruskal\uFF09"
    links: []
  bundledCode: "#line 1 \"graph/kruskal.cpp\"\n/**\n * @brief \u6700\u5C0F\u5168\u57DF\
    \u68EE\uFF08Kruskal\uFF09\n * @author hasegawa1\n */\n\n#include <vector>\n#include\
    \ <tuple>\n#include <algorithm>\n#include <atcoder/dsu>\n\ntemplate<typename T>\n\
    using Edges = std::vector<std::tuple<int,int,T>>;\n\ntemplate<typename T>\nstruct\
    \ MinimumSpanningForest {\n    T cost = 0;\n    Edges<T> edges;\n};\n\ntemplate<typename\
    \ T>\nMinimumSpanningForest<T> kruskal(Edges<T> &edges, int N) {\n    std::sort(edges.begin(),\
    \ edges.end(), [](auto &lhs, auto &rhs) {\n        return std::get<2>(lhs) < std::get<2>(rhs);\n\
    \    });\n\n    atcoder::dsu uf(N);\n    MinimumSpanningForest<T> res;\n    for(const\
    \ auto [v, u, cost]: edges) {\n        if(uf.same(u, v)) continue;\n        uf.merge(u,\
    \ v);\n        res.cost += cost;\n        res.edges.emplace_back(v, u, cost);\n\
    \    }\n\n    return res;\n}\n"
  code: "/**\n * @brief \u6700\u5C0F\u5168\u57DF\u68EE\uFF08Kruskal\uFF09\n * @author\
    \ hasegawa1\n */\n\n#include <vector>\n#include <tuple>\n#include <algorithm>\n\
    #include <atcoder/dsu>\n\ntemplate<typename T>\nusing Edges = std::vector<std::tuple<int,int,T>>;\n\
    \ntemplate<typename T>\nstruct MinimumSpanningForest {\n    T cost = 0;\n    Edges<T>\
    \ edges;\n};\n\ntemplate<typename T>\nMinimumSpanningForest<T> kruskal(Edges<T>\
    \ &edges, int N) {\n    std::sort(edges.begin(), edges.end(), [](auto &lhs, auto\
    \ &rhs) {\n        return std::get<2>(lhs) < std::get<2>(rhs);\n    });\n\n  \
    \  atcoder::dsu uf(N);\n    MinimumSpanningForest<T> res;\n    for(const auto\
    \ [v, u, cost]: edges) {\n        if(uf.same(u, v)) continue;\n        uf.merge(u,\
    \ v);\n        res.cost += cost;\n        res.edges.emplace_back(v, u, cost);\n\
    \    }\n\n    return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/kruskal.cpp
  requiredBy: []
  timestamp: '2021-07-20 14:18:41+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/festivals_in_joi_kingdom.test.cpp
  - aizu/grl_2_a_kruskal.test.cpp
documentation_of: graph/kruskal.cpp
layout: document
redirect_from:
- /library/graph/kruskal.cpp
- /library/graph/kruskal.cpp.html
title: "\u6700\u5C0F\u5168\u57DF\u68EE\uFF08Kruskal\uFF09"
---
