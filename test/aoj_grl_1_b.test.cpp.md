---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/bellman_ford.cpp
    title: "\u5358\u4E00\u59CB\u70B9\u6700\u77ED\u7D4C\u8DEF\u9577\uFF08Bellman Ford\uFF09"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_1_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_1_B
  bundledCode: "#line 1 \"test/aoj_grl_1_b.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_1_B\"\
    \n\n#include <iostream>\n#include <algorithm>\n#line 1 \"graph/bellman_ford.cpp\"\
    \n/**\n * @brief \u5358\u4E00\u59CB\u70B9\u6700\u77ED\u7D4C\u8DEF\u9577\uFF08\
    Bellman Ford\uFF09\n * @author hasegawa1\n */\n\n#include <vector>\n#line 8 \"\
    graph/bellman_ford.cpp\"\n#include <tuple>\n#include <limits>\n\ntemplate<typename\
    \ T>\nusing Edges = std::vector<std::tuple<int,int,T>>;\n\ntemplate<typename T>\n\
    std::vector<T> bellman_ford(const std::vector<std::tuple<int,int,T>> & edge_list,\
    \ int N, int start) {\n    constexpr T negative = std::numeric_limits<T>::min();\n\
    \    constexpr T unreachable = std::numeric_limits<T>::max();\n    std::vector<T>\
    \ dist(N, unreachable);\n    dist[start] = 0;\n\n    for(int x=0; x<N-1; x++)\
    \ {\n        for(const auto [v, u, cost]: edge_list) {\n            if(dist[v]\
    \ == unreachable) continue;\n            dist[u] = std::min(dist[u], dist[v] +\
    \ cost);\n        }\n    }\n\n    std::vector<T> dist2 = dist;\n    std::vector<int>\
    \ is_negative(N);\n    for(int x=0; x<N; x++) {\n        for(const auto [v, u,\
    \ cost]: edge_list) {\n            if(dist2[v] == unreachable) continue;\n   \
    \         if(dist2[v] + cost < dist2[u]) {\n                dist2[u] = dist2[v]\
    \ + cost;\n                is_negative[u] = 1;\n            }\n            if(is_negative[v])\
    \ is_negative[u] = 1;\n        }\n    }\n\n    for(int v=0; v<N; v++) {\n    \
    \    if(is_negative[v]) dist[v] = negative;\n    }\n\n    return dist;\n}\n#line\
    \ 6 \"test/aoj_grl_1_b.test.cpp\"\n\nusing namespace std;\n\ntemplate<typename\
    \ T>\nusing Edges = std::vector<std::tuple<int,int,T>>;\n\nint main(void) {\n\
    \    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\n    int V, E,\
    \ r;\n    cin >> V >> E >> r;\n\n    Edges<int64_t> es;\n    for(int i=0; i<E;\
    \ i++) {\n        int s, t, d;\n        cin >> s >> t >> d;\n        es.emplace_back(s,\
    \ t, d);\n    }\n\n    auto dist = bellman_ford(es, V, r);\n    if(count(dist.begin(),\
    \ dist.end(), numeric_limits<int64_t>::min())) {\n        cout << \"NEGATIVE CYCLE\"\
    \ << endl;\n        return 0;\n    }\n    for(auto d: dist) {\n        if(d ==\
    \ numeric_limits<int64_t>::max()) {\n            cout << \"INF\" << endl;\n  \
    \      } else {\n            cout << d << endl;\n        }\n    }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_1_B\"\
    \n\n#include <iostream>\n#include <algorithm>\n#include \"../graph/bellman_ford.cpp\"\
    \n\nusing namespace std;\n\ntemplate<typename T>\nusing Edges = std::vector<std::tuple<int,int,T>>;\n\
    \nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int V, E, r;\n    cin >> V >> E >> r;\n\n    Edges<int64_t> es;\n    for(int\
    \ i=0; i<E; i++) {\n        int s, t, d;\n        cin >> s >> t >> d;\n      \
    \  es.emplace_back(s, t, d);\n    }\n\n    auto dist = bellman_ford(es, V, r);\n\
    \    if(count(dist.begin(), dist.end(), numeric_limits<int64_t>::min())) {\n \
    \       cout << \"NEGATIVE CYCLE\" << endl;\n        return 0;\n    }\n    for(auto\
    \ d: dist) {\n        if(d == numeric_limits<int64_t>::max()) {\n            cout\
    \ << \"INF\" << endl;\n        } else {\n            cout << d << endl;\n    \
    \    }\n    }\n}\n"
  dependsOn:
  - graph/bellman_ford.cpp
  isVerificationFile: true
  path: test/aoj_grl_1_b.test.cpp
  requiredBy: []
  timestamp: '2021-06-22 22:19:14+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_grl_1_b.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_grl_1_b.test.cpp
- /verify/test/aoj_grl_1_b.test.cpp.html
title: test/aoj_grl_1_b.test.cpp
---
