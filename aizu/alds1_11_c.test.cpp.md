---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/breadth_first_search.cpp
    title: "\u5E45\u512A\u5148\u63A2\u7D22\uFF08BFS: Breadth First Search\uFF09"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_11_C
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_11_C
  bundledCode: "#line 1 \"aizu/alds1_11_c.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_11_C\"\
    \n\n#include <iostream>\n#line 1 \"graph/breadth_first_search.cpp\"\n/**\n * @brief\
    \ \u5E45\u512A\u5148\u63A2\u7D22\uFF08BFS: Breadth First Search\uFF09\n * @author\
    \ hasegawa1\n */\n\n#include <vector>\n#include <queue>\n\nstd::vector<int> bfs(const\
    \ std::vector<std::vector<int>> & adjacency_list, int start, int unreachable =\
    \ -1) {\n    std::vector<int> dist(adjacency_list.size(), unreachable);\n    dist[start]\
    \ = 0;\n    std::queue<int> q;\n    q.emplace(start);\n\n    while(!q.empty())\
    \ {\n        const auto v = q.front(); q.pop();\n        for(const auto u: adjacency_list[v])\
    \ {\n            if(dist[u] != unreachable) continue;\n            dist[u] = dist[v]\
    \ + 1;\n            q.emplace(u);\n        }\n    }\n\n    return dist;\n}\n#line\
    \ 5 \"aizu/alds1_11_c.test.cpp\"\n\nusing namespace std;\n\nint main(void) {\n\
    \    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\n    int n;\n\
    \    cin >> n;\n    vector<vector<int>> g(n);\n    for(int i=0; i<n; i++) {\n\
    \        int v, k;\n        cin >> v >> k;\n        --v;\n        for(int j=0;\
    \ j<k; j++) {\n            int u;\n            cin >> u;\n            --u;\n \
    \           g[v].emplace_back(u);\n        }\n    }\n\n    auto d = bfs(g, 0);\n\
    \    for(int i=0; i<n; i++) {\n        cout << i+1 << ' ' << d[i] << endl;\n \
    \   }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_11_C\"\
    \n\n#include <iostream>\n#include \"../graph/breadth_first_search.cpp\"\n\nusing\
    \ namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int n;\n    cin >> n;\n    vector<vector<int>> g(n);\n    for(int i=0; i<n;\
    \ i++) {\n        int v, k;\n        cin >> v >> k;\n        --v;\n        for(int\
    \ j=0; j<k; j++) {\n            int u;\n            cin >> u;\n            --u;\n\
    \            g[v].emplace_back(u);\n        }\n    }\n\n    auto d = bfs(g, 0);\n\
    \    for(int i=0; i<n; i++) {\n        cout << i+1 << ' ' << d[i] << endl;\n \
    \   }\n}\n"
  dependsOn:
  - graph/breadth_first_search.cpp
  isVerificationFile: true
  path: aizu/alds1_11_c.test.cpp
  requiredBy: []
  timestamp: '2021-06-29 19:12:26+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: aizu/alds1_11_c.test.cpp
layout: document
redirect_from:
- /verify/aizu/alds1_11_c.test.cpp
- /verify/aizu/alds1_11_c.test.cpp.html
title: aizu/alds1_11_c.test.cpp
---
