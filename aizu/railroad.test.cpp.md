---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/dijkstra.cpp
    title: "\u5358\u4E00\u59CB\u70B9\u6700\u77ED\u7D4C\u8DEF\u9577\uFF08Dijkstra\uFF09"
  - icon: ':heavy_check_mark:'
    path: graph/offline_dag_reachability.cpp
    title: "DAG\u306E\u5230\u9054\u53EF\u80FD\u6027"
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
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0275
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0275
  bundledCode: "#line 1 \"aizu/railroad.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0275\"\
    \n\n#include <iostream>\n#include <vector>\n#include <limits>\n#line 1 \"graph/dijkstra.cpp\"\
    \n/**\n * @brief \u5358\u4E00\u59CB\u70B9\u6700\u77ED\u7D4C\u8DEF\u9577\uFF08\
    Dijkstra\uFF09\n * @author hasegawa1\n */\n\n#line 7 \"graph/dijkstra.cpp\"\n\
    #include <queue>\n#include <functional>\n\ntemplate<typename T>\nusing WeightedGraph\
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
    \ u);\n        }\n    }\n\n    return dist;\n}\n#line 1 \"graph/offline_dag_reachability.cpp\"\
    \n/**\n * @brief DAG\u306E\u5230\u9054\u53EF\u80FD\u6027\n * @author hasegawa1\n\
    \ */\n\n#line 8 \"graph/offline_dag_reachability.cpp\"\n#include <bitset>\n#line\
    \ 1 \"graph/topological_sort.cpp\"\n/**\n * @brief \u30C8\u30DD\u30ED\u30B8\u30AB\
    \u30EB\u30BD\u30FC\u30C8\n * @author hasegawa1\n */\n\n#line 8 \"graph/topological_sort.cpp\"\
    \n\nstd::vector<int> topological_sort(const std::vector<std::vector<int>> &g)\
    \ {\n    int N = g.size();\n    std::vector<int> in(N);\n    for(int v=0; v<N;\
    \ v++) {\n        for(auto u: g[v]) {\n            ++in[u];\n        }\n    }\n\
    \n    std::queue<int> q;\n    for(int v=0; v<N; v++) {\n        if(in[v] == 0)\
    \ q.emplace(v);\n    }\n\n    std::vector<int> res;\n    while(!q.empty()) {\n\
    \        int v = q.front(); q.pop();\n        res.emplace_back(v);\n        for(auto\
    \ u: g[v]) {\n            if(--in[u] == 0) q.emplace(u);\n        }\n    }\n\n\
    \    if(res.size() == N) return res;\n    return std::vector<int>();\n}\n#line\
    \ 10 \"graph/offline_dag_reachability.cpp\"\n\nstd::vector<int> offline_dag_reachability(const\
    \ std::vector<std::vector<int>> & g, const std::vector<std::pair<int,int>> & query)\
    \ {\n    const int N = g.size();\n    const int Q = query.size();\n    constexpr\
    \ int PARALLEL = 1024;\n    std::vector<int> ord = topological_sort(g);\n\n  \
    \  std::vector<int> res;\n    for(int i=0; i<Q; i+=PARALLEL) {\n        std::vector<std::bitset<PARALLEL>>\
    \ dp(N);\n        for(int j=0; j<PARALLEL; j++) {\n            if(i+j >= Q) break;\n\
    \            auto [s, t] = query[i+j];\n            dp[s].set(j);\n        }\n\
    \        for(const auto v: ord) {\n            for(const auto u: g[v]) {\n   \
    \             dp[u] |= dp[v];\n            }\n        }\n        for(int j=0;\
    \ j<PARALLEL; j++) {\n            if(i+j >= Q) break;\n            auto [s, t]\
    \ = query[i+j];\n            res.emplace_back(dp[t][j]);\n        }\n    }\n \
    \   return res;\n}\n#line 8 \"aizu/railroad.test.cpp\"\n\nusing namespace std;\n\
    \nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int S, R;\n    cin >> S >> R;\n    vector<int> u(R), v(R), w(R);\n    for(int\
    \ i=0; i<R; i++) {\n        cin >> u[i] >> v[i] >> w[i];\n        --u[i]; --v[i];\n\
    \    }\n    int a, b, Q;\n    cin >> a >> b >> Q;\n    --a; --b;\n    vector<pair<int,int>>\
    \ query(Q);\n    for(auto &[s, t]: query) {\n        cin >> s >> t;\n        --s;\
    \ --t;\n    }\n\n    WeightedGraph<int> g(S);\n    for(int i=0; i<R; i++) {\n\
    \        g[u[i]].emplace_back(v[i], w[i]);\n        g[v[i]].emplace_back(u[i],\
    \ w[i]);\n    }\n\n    auto da = dijkstra(g, a, numeric_limits<int>::max());\n\
    \    auto db = dijkstra(g, b, numeric_limits<int>::max());\n\n    vector<vector<int>>\
    \ g2(S);\n    for(int i=0; i<R; i++) {\n        if(da[u[i]] + w[i] + db[v[i]]\
    \ == da[b]) g2[u[i]].emplace_back(v[i]);\n        if(da[v[i]] + w[i] + db[u[i]]\
    \ == da[b]) g2[v[i]].emplace_back(u[i]);\n    }\n\n    for(auto e: offline_dag_reachability(g2,\
    \ query)) {\n        cout << (e ? \"Yes\" : \"No\") << endl;\n    }\n    return\
    \ 0;\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0275\"\
    \n\n#include <iostream>\n#include <vector>\n#include <limits>\n#include \"../graph/dijkstra.cpp\"\
    \n#include \"../graph/offline_dag_reachability.cpp\"\n\nusing namespace std;\n\
    \nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int S, R;\n    cin >> S >> R;\n    vector<int> u(R), v(R), w(R);\n    for(int\
    \ i=0; i<R; i++) {\n        cin >> u[i] >> v[i] >> w[i];\n        --u[i]; --v[i];\n\
    \    }\n    int a, b, Q;\n    cin >> a >> b >> Q;\n    --a; --b;\n    vector<pair<int,int>>\
    \ query(Q);\n    for(auto &[s, t]: query) {\n        cin >> s >> t;\n        --s;\
    \ --t;\n    }\n\n    WeightedGraph<int> g(S);\n    for(int i=0; i<R; i++) {\n\
    \        g[u[i]].emplace_back(v[i], w[i]);\n        g[v[i]].emplace_back(u[i],\
    \ w[i]);\n    }\n\n    auto da = dijkstra(g, a, numeric_limits<int>::max());\n\
    \    auto db = dijkstra(g, b, numeric_limits<int>::max());\n\n    vector<vector<int>>\
    \ g2(S);\n    for(int i=0; i<R; i++) {\n        if(da[u[i]] + w[i] + db[v[i]]\
    \ == da[b]) g2[u[i]].emplace_back(v[i]);\n        if(da[v[i]] + w[i] + db[u[i]]\
    \ == da[b]) g2[v[i]].emplace_back(u[i]);\n    }\n\n    for(auto e: offline_dag_reachability(g2,\
    \ query)) {\n        cout << (e ? \"Yes\" : \"No\") << endl;\n    }\n    return\
    \ 0;\n}\n"
  dependsOn:
  - graph/dijkstra.cpp
  - graph/offline_dag_reachability.cpp
  - graph/topological_sort.cpp
  isVerificationFile: true
  path: aizu/railroad.test.cpp
  requiredBy: []
  timestamp: '2021-07-21 13:34:00+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: aizu/railroad.test.cpp
layout: document
redirect_from:
- /verify/aizu/railroad.test.cpp
- /verify/aizu/railroad.test.cpp.html
title: aizu/railroad.test.cpp
---
