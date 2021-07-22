---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/breadth_first_search_01.cpp
    title: 01-BFS
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/challenges/sources/JAG/Prelim/2945?year=2019
    links:
    - https://onlinejudge.u-aizu.ac.jp/challenges/sources/JAG/Prelim/2945?year=2019
  bundledCode: "#line 1 \"aizu/poison_swamp.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/challenges/sources/JAG/Prelim/2945?year=2019\"\
    \n\n#include <iostream>\n#include <vector>\n#line 1 \"graph/breadth_first_search_01.cpp\"\
    \n/**\n * @brief 01-BFS\n * @author hasegawa1\n */\n\n#line 7 \"graph/breadth_first_search_01.cpp\"\
    \n#include <queue>\n\ntemplate<typename T>\nusing WeightedGraph = std::vector<std::vector<std::pair<int,T>>>;\n\
    \nstd::vector<int> bfs01(const std::vector<std::vector<std::pair<int,int>>> &\
    \ adjacency_list, int start, int unreachable = -1) {\n    std::vector<int> dist(adjacency_list.size(),\
    \ unreachable);\n    std::deque<int> dq;\n\n    dist[start] = 0;\n    dq.emplace_front(start);\n\
    \n    while(!dq.empty()) {\n        const auto v = dq.front(); dq.pop_front();\n\
    \        for(const auto [u, cost]: adjacency_list[v]) {\n            if(dist[u]\
    \ != unreachable && dist[v] + cost >= dist[u]) continue;\n            dist[u]\
    \ = dist[v] + cost;\n            if(cost == 0) dq.emplace_front(u);\n        \
    \    if(cost == 1) dq.emplace_back(u);\n        }\n    }\n\n    return dist;\n\
    }\n#line 6 \"aizu/poison_swamp.test.cpp\"\n\nusing namespace std;\n\nbool solve()\
    \ {\n    int N;\n    cin >> N;\n    if(N == 0) return false;\n\n    int A, B,\
    \ C, D;\n    cin >> A >> B >> C >> D;\n    --A; --B; --C; --D;\n    vector<int>\
    \ X(N+1), Y(N+1);\n    for(int i=0; i<=N; i++) {\n        cin >> X[i] >> Y[i];\n\
    \        --X[i]; --Y[i];\n    }\n\n    WeightedGraph<int> g(100*100);\n    vector<int>\
    \ di = {1, 0, -1, 0};\n    vector<int> dj = {0, 1, 0, -1};\n    for(int i=0; i<100;\
    \ i++) {\n        for(int j=0; j<100; j++) {\n            for(int k=0; k<4; k++)\
    \ {\n                int ni = i+di[k];\n                int nj = j+dj[k];\n  \
    \              if(ni < 0 || ni >= 100 || nj < 0 || nj >= 100) continue;\n    \
    \            g[i*100+j].emplace_back(ni*100+nj, !(A <= ni && ni <= C && B <= nj\
    \ && nj <= D));\n            }\n        }\n    }\n\n    int ans = 0;\n    for(int\
    \ i=0; i<N; i++) {\n        ans += bfs01(g, X[i]*100+Y[i])[X[i+1]*100+Y[i+1]];\n\
    \    }\n    cout << ans << endl;\n    return true;\n}\n\nint main(void) {\n  \
    \  cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\n    while(solve())\
    \ {};\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/challenges/sources/JAG/Prelim/2945?year=2019\"\
    \n\n#include <iostream>\n#include <vector>\n#include \"../graph/breadth_first_search_01.cpp\"\
    \n\nusing namespace std;\n\nbool solve() {\n    int N;\n    cin >> N;\n    if(N\
    \ == 0) return false;\n\n    int A, B, C, D;\n    cin >> A >> B >> C >> D;\n \
    \   --A; --B; --C; --D;\n    vector<int> X(N+1), Y(N+1);\n    for(int i=0; i<=N;\
    \ i++) {\n        cin >> X[i] >> Y[i];\n        --X[i]; --Y[i];\n    }\n\n   \
    \ WeightedGraph<int> g(100*100);\n    vector<int> di = {1, 0, -1, 0};\n    vector<int>\
    \ dj = {0, 1, 0, -1};\n    for(int i=0; i<100; i++) {\n        for(int j=0; j<100;\
    \ j++) {\n            for(int k=0; k<4; k++) {\n                int ni = i+di[k];\n\
    \                int nj = j+dj[k];\n                if(ni < 0 || ni >= 100 ||\
    \ nj < 0 || nj >= 100) continue;\n                g[i*100+j].emplace_back(ni*100+nj,\
    \ !(A <= ni && ni <= C && B <= nj && nj <= D));\n            }\n        }\n  \
    \  }\n\n    int ans = 0;\n    for(int i=0; i<N; i++) {\n        ans += bfs01(g,\
    \ X[i]*100+Y[i])[X[i+1]*100+Y[i+1]];\n    }\n    cout << ans << endl;\n    return\
    \ true;\n}\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    while(solve()) {};\n    return 0;\n}\n"
  dependsOn:
  - graph/breadth_first_search_01.cpp
  isVerificationFile: true
  path: aizu/poison_swamp.test.cpp
  requiredBy: []
  timestamp: '2021-07-22 17:45:24+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: aizu/poison_swamp.test.cpp
layout: document
redirect_from:
- /verify/aizu/poison_swamp.test.cpp
- /verify/aizu/poison_swamp.test.cpp.html
title: aizu/poison_swamp.test.cpp
---
