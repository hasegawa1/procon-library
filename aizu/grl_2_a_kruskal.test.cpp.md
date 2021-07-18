---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/kruskal.cpp
    title: "\u6700\u5C0F\u5168\u57DF\u68EE\uFF08Kruskal\uFF09"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_2_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_2_A
  bundledCode: "#line 1 \"aizu/grl_2_a_kruskal.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_2_A\"\
    \n\n#include <iostream>\n#line 1 \"graph/kruskal.cpp\"\n/**\n * @brief \u6700\u5C0F\
    \u5168\u57DF\u68EE\uFF08Kruskal\uFF09\n * @author hasegawa1\n */\n\n#include <vector>\n\
    #include <tuple>\n#include <algorithm>\n#include <atcoder/dsu>\n\ntemplate<typename\
    \ T>\nusing Edges = std::vector<std::tuple<int,int,T>>;\n\ntemplate<typename T>\n\
    T kruskal(Edges<T> &edges, int N) {\n    std::sort(edges.begin(), edges.end(),\
    \ [](auto &lhs, auto &rhs) {\n        return std::get<2>(lhs) < std::get<2>(rhs);\n\
    \    });\n\n    atcoder::dsu uf(N);\n    T res = 0;\n    for(const auto [v, u,\
    \ cost]: edges) {\n        if(uf.same(u, v)) continue;\n        uf.merge(u, v);\n\
    \        res += cost;\n    }\n\n    // if(uf.size(0) != N) return -1; // \u5168\
    \u57DF\u6728\u304C\u69CB\u6210\u3067\u304D\u308B\u304B\u77E5\u308A\u305F\u3044\
    \u3068\u304D\n    return res;\n}\n#line 5 \"aizu/grl_2_a_kruskal.test.cpp\"\n\n\
    using namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int V, E;\n    cin >> V >> E;\n    Edges<int> edges;\n    for(int i=0; i<E;\
    \ i++) {\n        int s, t, w;\n        cin >> s >> t >> w;\n        edges.emplace_back(s,\
    \ t, w);\n    }\n\n    cout << kruskal(edges, V) << endl;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_2_A\"\
    \n\n#include <iostream>\n#include \"../graph/kruskal.cpp\"\n\nusing namespace\
    \ std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int V, E;\n    cin >> V >> E;\n    Edges<int> edges;\n    for(int i=0; i<E;\
    \ i++) {\n        int s, t, w;\n        cin >> s >> t >> w;\n        edges.emplace_back(s,\
    \ t, w);\n    }\n\n    cout << kruskal(edges, V) << endl;\n}\n"
  dependsOn:
  - graph/kruskal.cpp
  isVerificationFile: true
  path: aizu/grl_2_a_kruskal.test.cpp
  requiredBy: []
  timestamp: '2021-07-18 16:10:01+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: aizu/grl_2_a_kruskal.test.cpp
layout: document
redirect_from:
- /verify/aizu/grl_2_a_kruskal.test.cpp
- /verify/aizu/grl_2_a_kruskal.test.cpp.html
title: aizu/grl_2_a_kruskal.test.cpp
---
