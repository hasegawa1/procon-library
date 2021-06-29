---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/shortest_hamilton_cycle.cpp
    title: "\u6700\u77ED\u30CF\u30DF\u30EB\u30C8\u30F3\u9589\u8DEF\uFF08TSP: Traveling\
      \ Salesman Problem\uFF09"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_2_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_2_A
  bundledCode: "#line 1 \"aizu/dpl_2_a.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_2_A\"\
    \n\n#include <iostream>\n#line 1 \"graph/shortest_hamilton_cycle.cpp\"\n/**\n\
    \ * @brief \u6700\u77ED\u30CF\u30DF\u30EB\u30C8\u30F3\u9589\u8DEF\uFF08TSP: Traveling\
    \ Salesman Problem\uFF09\n * @author hasegawa1\n */\n\n#include <vector>\n\ntemplate<typename\
    \ T>\nT shortest_hamilton_cycle(const std::vector<std::vector<T>> & adjacency_matrix,\
    \ T unreachable = -1) {\n    const int N = adjacency_matrix.size();\n    std::vector<std::vector<T>>\
    \ dist(1<<N, std::vector<T>(N, unreachable));\n    dist[0][0] = 0;\n\n    for(int\
    \ bit=0; bit<(1<<N); bit++) {\n        for(int v=0; v<N; v++) {\n            if(dist[bit][v]\
    \ == unreachable) continue;\n            for(int u=0; u<N; u++) {\n          \
    \      if(bit>>u & 1) continue;\n                if(adjacency_matrix[v][u] ==\
    \ unreachable) continue;\n                if(dist[bit | 1<<u][u] == unreachable)\
    \ dist[bit | 1<<u][u] = dist[bit][v] + adjacency_matrix[v][u];\n             \
    \   dist[bit | 1<<u][u] = std::min(dist[bit | 1<<u][u], dist[bit][v] + adjacency_matrix[v][u]);\n\
    \            }\n        }\n    }\n\n    return dist.back()[0];\n}\n#line 5 \"\
    aizu/dpl_2_a.test.cpp\"\n\nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n\
    \    ios_base::sync_with_stdio(false);\n\n    int V, E;\n    cin >> V >> E;\n\
    \    vector<vector<int>> g(V, vector<int>(V, -1));\n    for(int i=0; i<E; i++)\
    \ {\n        int s, t, d;\n        cin >> s >> t >> d;\n        g[s][t] = d;\n\
    \    }\n\n    cout << shortest_hamilton_cycle(g) << endl;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_2_A\"\
    \n\n#include <iostream>\n#include \"../graph/shortest_hamilton_cycle.cpp\"\n\n\
    using namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int V, E;\n    cin >> V >> E;\n    vector<vector<int>> g(V, vector<int>(V,\
    \ -1));\n    for(int i=0; i<E; i++) {\n        int s, t, d;\n        cin >> s\
    \ >> t >> d;\n        g[s][t] = d;\n    }\n\n    cout << shortest_hamilton_cycle(g)\
    \ << endl;\n}\n"
  dependsOn:
  - graph/shortest_hamilton_cycle.cpp
  isVerificationFile: true
  path: aizu/dpl_2_a.test.cpp
  requiredBy: []
  timestamp: '2021-06-29 19:12:26+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: aizu/dpl_2_a.test.cpp
layout: document
redirect_from:
- /verify/aizu/dpl_2_a.test.cpp
- /verify/aizu/dpl_2_a.test.cpp.html
title: aizu/dpl_2_a.test.cpp
---
