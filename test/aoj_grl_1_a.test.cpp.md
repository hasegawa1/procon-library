---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/dijkstra.cpp
    title: "\u5358\u4E00\u59CB\u70B9\u6700\u77ED\u7D4C\u8DEF\u9577\uFF08Dijkstra\uFF09"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A
  bundledCode: "#line 1 \"test/aoj_grl_1_a.test.cpp\"\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A\"\
    \n\n#include <iostream>\n#line 1 \"graph/dijkstra.cpp\"\n/**\n * @brief \u5358\
    \u4E00\u59CB\u70B9\u6700\u77ED\u7D4C\u8DEF\u9577\uFF08Dijkstra\uFF09\n * @author\
    \ hasegawa1\n */\n\n#include <vector>\n#include <queue>\n#include <functional>\n\
    \ntemplate<typename T>\nusing WeightedGraph = std::vector<std::vector<std::pair<int,T>>>;\n\
    \ntemplate<typename T>\nstd::vector<T> dijkstra(const std::vector<std::vector<std::pair<int,T>>>\
    \ & adjacency_list, int start, T unreachable = -1) {\n    std::vector<T> dist(adjacency_list.size(),\
    \ unreachable);\n    dist[start] = 0; // \u30B9\u30BF\u30FC\u30C8\u306B\u623B\u3063\
    \u3066\u304F\u308B\u3068\u304D\u306F\u3053\u306E\u884C\u3092\u6D88\u3059\n   \
    \ std::priority_queue<std::pair<T,int>, std::vector<std::pair<T,int>>, std::greater<std::pair<T,int>>>\
    \ pq;\n    pq.emplace(0, start);\n\n    while(!pq.empty()) {\n        const auto\
    \ [cost, v] = pq.top(); pq.pop();\n        if(dist[v] != unreachable && dist[v]\
    \ < cost) continue;\n        for(const auto [u, cost2]: adjacency_list[v]) {\n\
    \            if(cost2 == unreachable) continue;\n            T next_cost = cost\
    \ + cost2;\n            if(dist[u] != unreachable && dist[u] <= next_cost) continue;\n\
    \            dist[u] = next_cost;\n            pq.emplace(next_cost, u);\n   \
    \     }\n    }\n\n    return dist;\n}\n#line 5 \"test/aoj_grl_1_a.test.cpp\"\n\
    \nusing namespace std;\n\ntemplate<typename T>\nusing WeightedGraph = std::vector<std::vector<std::pair<int,T>>>;\n\
    \nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int V, E, r;\n    cin >> V >> E >> r;\n\n    WeightedGraph<int64_t> g(V);\n\
    \    for(int i=0; i<E; i++) {\n        int s, t, d;\n        cin >> s >> t >>\
    \ d;\n        g[s].emplace_back(t, d);\n    }\n\n    for(const auto d: dijkstra(g,\
    \ r)) {\n        if(d == -1) {\n            cout << \"INF\" << endl;\n       \
    \ } else {\n            cout << d << endl;\n        }\n    }\n}\n"
  code: "#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A\"\
    \n\n#include <iostream>\n#include \"../graph/dijkstra.cpp\"\n\nusing namespace\
    \ std;\n\ntemplate<typename T>\nusing WeightedGraph = std::vector<std::vector<std::pair<int,T>>>;\n\
    \nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int V, E, r;\n    cin >> V >> E >> r;\n\n    WeightedGraph<int64_t> g(V);\n\
    \    for(int i=0; i<E; i++) {\n        int s, t, d;\n        cin >> s >> t >>\
    \ d;\n        g[s].emplace_back(t, d);\n    }\n\n    for(const auto d: dijkstra(g,\
    \ r)) {\n        if(d == -1) {\n            cout << \"INF\" << endl;\n       \
    \ } else {\n            cout << d << endl;\n        }\n    }\n}\n"
  dependsOn:
  - graph/dijkstra.cpp
  isVerificationFile: true
  path: test/aoj_grl_1_a.test.cpp
  requiredBy: []
  timestamp: '2021-06-22 19:15:38+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_grl_1_a.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_grl_1_a.test.cpp
- /verify/test/aoj_grl_1_a.test.cpp.html
title: test/aoj_grl_1_a.test.cpp
---
