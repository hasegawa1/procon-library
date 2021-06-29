---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/prim.cpp
    title: "\u6700\u5C0F\u5168\u57DF\u68EE\uFF08Prim\uFF09"
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
  bundledCode: "#line 1 \"aizu/grl_2_a_prim.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_2_A\"\
    \n\n#include <iostream>\n#include <algorithm>\n#line 1 \"graph/prim.cpp\"\n/**\n\
    \ * @brief \u6700\u5C0F\u5168\u57DF\u68EE\uFF08Prim\uFF09\n * @author hasegawa1\n\
    \ */\n\n#include <vector>\n#include <queue>\n\ntemplate<typename T>\nusing WeightedGraph\
    \ = std::vector<std::vector<std::pair<int,T>>>;\n\ntemplate<typename T>\nT prim(const\
    \ std::vector<std::vector<std::pair<int,T>>> & adjacency_list) {\n    int N =\
    \ adjacency_list.size();\n    std::vector<int> used(N);\n    std::priority_queue<std::pair<T,int>,\
    \ std::vector<std::pair<T,int>>, std::greater<std::pair<T,int>>> pq;\n\n    T\
    \ res = 0;\n    for(int i=0; i<N; i++) {\n        if(used[i]) continue;\n    \
    \    pq.emplace(0, i);\n        while(!pq.empty()) {\n            auto [cost,\
    \ v] = pq.top(); pq.pop();\n            if(used[v]) continue;\n            used[v]\
    \ = 1;\n            res += cost;\n            for(const auto [u, cost2]: adjacency_list[v])\
    \ {\n                pq.emplace(cost2, u);\n            }\n        }\n    }\n\n\
    \    return res;\n}\n#line 6 \"aizu/grl_2_a_prim.test.cpp\"\n\nusing namespace\
    \ std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int V, E;\n    cin >> V >> E;\n    WeightedGraph<int> g(V);\n    for(int\
    \ i=0; i<E; i++) {\n        int s, t, w;\n        cin >> s >> t >> w;\n      \
    \  g[s].emplace_back(t, w);\n        g[t].emplace_back(s, w);\n    }\n\n    cout\
    \ << prim(g) << endl;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_2_A\"\
    \n\n#include <iostream>\n#include <algorithm>\n#include \"../graph/prim.cpp\"\n\
    \nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int V, E;\n    cin >> V >> E;\n    WeightedGraph<int> g(V);\n    for(int\
    \ i=0; i<E; i++) {\n        int s, t, w;\n        cin >> s >> t >> w;\n      \
    \  g[s].emplace_back(t, w);\n        g[t].emplace_back(s, w);\n    }\n\n    cout\
    \ << prim(g) << endl;\n}\n"
  dependsOn:
  - graph/prim.cpp
  isVerificationFile: true
  path: aizu/grl_2_a_prim.test.cpp
  requiredBy: []
  timestamp: '2021-06-29 19:12:26+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: aizu/grl_2_a_prim.test.cpp
layout: document
redirect_from:
- /verify/aizu/grl_2_a_prim.test.cpp
- /verify/aizu/grl_2_a_prim.test.cpp.html
title: aizu/grl_2_a_prim.test.cpp
---
