---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/grl_4_a.test.cpp
    title: aizu/grl_4_a.test.cpp
  - icon: ':heavy_check_mark:'
    path: yosupo/cycle_detection.test.cpp
    title: yosupo/cycle_detection.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u9589\u8DEF\u691C\u51FA"
    links: []
  bundledCode: "#line 1 \"graph/detect_cycle.cpp\"\n/**\n * @brief \u9589\u8DEF\u691C\
    \u51FA\n * @author hasegawa1\n */\n\n#include <vector>\n#include <queue>\n#include\
    \ <algorithm>\n\nstd::vector<int> detect_cycle(const std::vector<std::vector<int>>\
    \ &g) {\n    const int N = g.size();\n\n    std::vector<std::vector<std::pair<int,bool>>>\
    \ g2(N);\n    for(int v=0; v<N; v++) {\n        for(const auto u: g[v]) {\n  \
    \          g2[v].emplace_back(u, true);\n        }\n    }\n\n    std::vector<std::vector<std::pair<int,int>>>\
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
    \ res.end());\n    res.pop_back();\n    return res;\n}\n"
  code: "/**\n * @brief \u9589\u8DEF\u691C\u51FA\n * @author hasegawa1\n */\n\n#include\
    \ <vector>\n#include <queue>\n#include <algorithm>\n\nstd::vector<int> detect_cycle(const\
    \ std::vector<std::vector<int>> &g) {\n    const int N = g.size();\n\n    std::vector<std::vector<std::pair<int,bool>>>\
    \ g2(N);\n    for(int v=0; v<N; v++) {\n        for(const auto u: g[v]) {\n  \
    \          g2[v].emplace_back(u, true);\n        }\n    }\n\n    std::vector<std::vector<std::pair<int,int>>>\
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
    \ res.end());\n    res.pop_back();\n    return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/detect_cycle.cpp
  requiredBy: []
  timestamp: '2021-07-26 23:53:07+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/grl_4_a.test.cpp
  - yosupo/cycle_detection.test.cpp
documentation_of: graph/detect_cycle.cpp
layout: document
redirect_from:
- /library/graph/detect_cycle.cpp
- /library/graph/detect_cycle.cpp.html
title: "\u9589\u8DEF\u691C\u51FA"
---
