---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/detect_cycle.cpp
    title: "\u9589\u8DEF\u691C\u51FA"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/cycle_detection
    links:
    - https://judge.yosupo.jp/problem/cycle_detection
  bundledCode: "#line 1 \"yosupo/cycle_detection.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/cycle_detection\"\
    \n\n#include <iostream>\n#include <vector>\n#include <map>\n#line 1 \"graph/detect_cycle.cpp\"\
    \n/**\n * @brief \u9589\u8DEF\u691C\u51FA\n * @author hasegawa1\n */\n\n#line\
    \ 7 \"graph/detect_cycle.cpp\"\n#include <queue>\n#include <algorithm>\n\nstd::vector<int>\
    \ detect_cycle(const std::vector<std::vector<int>> &g) {\n    const int N = g.size();\n\
    \n    std::vector<std::vector<std::pair<int,bool>>> g2(N);\n    for(int v=0; v<N;\
    \ v++) {\n        for(const auto u: g[v]) {\n            g2[v].emplace_back(u,\
    \ true);\n        }\n    }\n\n    std::vector<std::vector<std::pair<int,int>>>\
    \ in(N);\n    std::vector<int> out(N);\n    for(int v=0; v<N; v++) {\n       \
    \ for(int i=0; i<g[v].size(); i++) {\n            in[g[v][i]].emplace_back(v,\
    \ i);\n        }\n        out[v] = g[v].size();\n    }\n\n    std::queue<int>\
    \ q;\n    for(int v=0; v<N; v++) {\n        if(out[v] == 0) {\n            q.emplace(v);\n\
    \        }\n    }\n\n    while(!q.empty()) {\n        int u = q.front(); q.pop();\n\
    \        for(const auto [v, i]: in[u]) {\n            g2[v][i].second = false;\n\
    \            if(--out[v] == 0) q.emplace(v);\n        }\n    }\n\n    if(std::all_of(out.begin(),\
    \ out.end(), [](int x) {return x == 0;})) return std::vector<int>();\n\n    std::vector<int>\
    \ visited(N);\n    std::vector<int> res;\n    int now = std::distance(out.begin(),\
    \ std::find_if(out.begin(), out.end(), [](int x) {return x>0;}));\n    while(true)\
    \ {\n        res.emplace_back(now);\n        if(visited[now]) break;\n       \
    \ visited[now] = 1;\n        for(const auto [u, ok]: g2[now]) {\n            if(ok)\
    \ {\n                now = u;\n                break;\n            }\n       \
    \ }\n    }\n\n    std::reverse(res.begin(), res.end());\n    while(res.back()\
    \ != res.front()) {\n        res.pop_back();\n    }\n    std::reverse(res.begin(),\
    \ res.end());\n    res.pop_back();\n    return res;\n}\n#line 7 \"yosupo/cycle_detection.test.cpp\"\
    \n\nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int N, M;\n    cin >> N >> M;\n    vector<int> u(M), v(M);\n    for(int\
    \ i=0; i<M; i++) {\n        cin >> u[i] >> v[i];\n    }\n\n    vector<vector<int>>\
    \ g(N);\n    for(int i=0; i<M; i++) {\n        g[u[i]].emplace_back(v[i]);\n \
    \   }\n\n    auto cycle = detect_cycle(g);\n\n    if(cycle.empty()) {\n      \
    \  cout << -1 << endl;\n    } else {\n        map<pair<int,int>, int> mp;\n  \
    \      for(int i=0; i<M; i++) {\n            mp[make_pair(u[i], v[i])] = i;\n\
    \        }\n        int C = cycle.size();\n        cout << C << endl;\n      \
    \  for(int j=0; j<C; j++) {\n            cout << mp[make_pair(cycle[j], cycle[(j+1)%C])]\
    \ << endl;\n        }\n    }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/cycle_detection\"\n\n#include\
    \ <iostream>\n#include <vector>\n#include <map>\n#include \"../graph/detect_cycle.cpp\"\
    \n\nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int N, M;\n    cin >> N >> M;\n    vector<int> u(M), v(M);\n    for(int\
    \ i=0; i<M; i++) {\n        cin >> u[i] >> v[i];\n    }\n\n    vector<vector<int>>\
    \ g(N);\n    for(int i=0; i<M; i++) {\n        g[u[i]].emplace_back(v[i]);\n \
    \   }\n\n    auto cycle = detect_cycle(g);\n\n    if(cycle.empty()) {\n      \
    \  cout << -1 << endl;\n    } else {\n        map<pair<int,int>, int> mp;\n  \
    \      for(int i=0; i<M; i++) {\n            mp[make_pair(u[i], v[i])] = i;\n\
    \        }\n        int C = cycle.size();\n        cout << C << endl;\n      \
    \  for(int j=0; j<C; j++) {\n            cout << mp[make_pair(cycle[j], cycle[(j+1)%C])]\
    \ << endl;\n        }\n    }\n}\n"
  dependsOn:
  - graph/detect_cycle.cpp
  isVerificationFile: true
  path: yosupo/cycle_detection.test.cpp
  requiredBy: []
  timestamp: '2021-07-26 23:53:07+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: yosupo/cycle_detection.test.cpp
layout: document
redirect_from:
- /verify/yosupo/cycle_detection.test.cpp
- /verify/yosupo/cycle_detection.test.cpp.html
title: yosupo/cycle_detection.test.cpp
---
