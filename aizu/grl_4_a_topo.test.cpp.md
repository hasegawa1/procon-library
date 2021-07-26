---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/topological_sort.cpp
    title: "\u30C8\u30DD\u30ED\u30B8\u30AB\u30EB\u30BD\u30FC\u30C8"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_4_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_4_A
  bundledCode: "#line 1 \"aizu/grl_4_a_topo.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_4_A\"\
    \n\n#include <iostream>\n#line 1 \"graph/topological_sort.cpp\"\n/**\n * @brief\
    \ \u30C8\u30DD\u30ED\u30B8\u30AB\u30EB\u30BD\u30FC\u30C8\n * @author hasegawa1\n\
    \ */\n\n#include <vector>\n#include <queue>\n\nstd::vector<int> topological_sort(const\
    \ std::vector<std::vector<int>> &g) {\n    int N = g.size();\n    std::vector<int>\
    \ in(N);\n    for(int v=0; v<N; v++) {\n        for(auto u: g[v]) {\n        \
    \    ++in[u];\n        }\n    }\n\n    std::queue<int> q;\n    for(int v=0; v<N;\
    \ v++) {\n        if(in[v] == 0) q.emplace(v);\n    }\n\n    std::vector<int>\
    \ res;\n    while(!q.empty()) {\n        int v = q.front(); q.pop();\n       \
    \ res.emplace_back(v);\n        for(auto u: g[v]) {\n            if(--in[u] ==\
    \ 0) q.emplace(u);\n        }\n    }\n\n    if(res.size() == N) return res;\n\
    \    return std::vector<int>();\n}\n#line 5 \"aizu/grl_4_a_topo.test.cpp\"\n\n\
    using namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int V, E;\n    cin >> V >> E;\n    vector<vector<int>> g(V);\n    for(int\
    \ i=0; i<E; i++) {\n        int s, t;\n        cin >> s >> t;\n        g[s].emplace_back(t);\n\
    \    }\n\n    cout << topological_sort(g).empty() << endl;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_4_A\"\
    \n\n#include <iostream>\n#include \"../graph/topological_sort.cpp\"\n\nusing namespace\
    \ std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int V, E;\n    cin >> V >> E;\n    vector<vector<int>> g(V);\n    for(int\
    \ i=0; i<E; i++) {\n        int s, t;\n        cin >> s >> t;\n        g[s].emplace_back(t);\n\
    \    }\n\n    cout << topological_sort(g).empty() << endl;\n}\n"
  dependsOn:
  - graph/topological_sort.cpp
  isVerificationFile: true
  path: aizu/grl_4_a_topo.test.cpp
  requiredBy: []
  timestamp: '2021-07-26 23:53:07+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: aizu/grl_4_a_topo.test.cpp
layout: document
redirect_from:
- /verify/aizu/grl_4_a_topo.test.cpp
- /verify/aizu/grl_4_a_topo.test.cpp.html
title: aizu/grl_4_a_topo.test.cpp
---
