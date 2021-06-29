---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/warshall_floyd.cpp
    title: "\u5168\u70B9\u5BFE\u9593\u6700\u77ED\u7D4C\u8DEF\u9577\uFF08Warshall Floyd\uFF09"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_1_C
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_1_C
  bundledCode: "#line 1 \"aizu/grl_1_c.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_1_C\"\
    \n\n#include <iostream>\n#include <algorithm>\n#line 1 \"graph/warshall_floyd.cpp\"\
    \n/**\n * @brief \u5168\u70B9\u5BFE\u9593\u6700\u77ED\u7D4C\u8DEF\u9577\uFF08\
    Warshall Floyd\uFF09\n * @author hasegawa1\n */\n\n#include <vector>\n#include\
    \ <limits>\n#line 9 \"graph/warshall_floyd.cpp\"\n\ntemplate<typename T>\nstd::vector<std::vector<T>>\
    \ warshall_floyd(const std::vector<std::vector<T>> & adjacency_matrix, T unreachable\
    \ = std::numeric_limits<T>::max()) {\n    const int N = adjacency_matrix.size();\n\
    \    std::vector<std::vector<T>> dist = adjacency_matrix;\n\n    for(int k=0;\
    \ k<N; k++) {\n        for(int i=0; i<N; i++) {\n            for(int j=0; j<N;\
    \ j++) {\n                if(dist[i][k] == unreachable || dist[k][j] == unreachable)\
    \ continue;\n                if(dist[i][j] == unreachable) dist[i][j] = dist[i][k]\
    \ + dist[k][j];\n                else dist[i][j] = std::min(dist[i][j], dist[i][k]\
    \ + dist[k][j]);\n            }\n        }\n    }\n\n    return dist;\n}\n#line\
    \ 6 \"aizu/grl_1_c.test.cpp\"\n\nusing namespace std;\n\nint main(void) {\n  \
    \  cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\n    int V, E;\n\
    \    cin >> V >> E;\n    vector<vector<int>> g(V, vector<int>(V, numeric_limits<int>::max()));\n\
    \    for(int i=0; i<V; i++) {\n        g[i][i] = 0;\n    }\n    for(int i=0; i<E;\
    \ i++) {\n        int s, t, d;\n        cin >> s >> t >> d;\n        g[s][t] =\
    \ d;\n    }\n\n    auto dist = warshall_floyd(g);\n\n    for(int i=0; i<V; i++)\
    \ {\n        if(dist[i][i] < 0) {\n            cout << \"NEGATIVE CYCLE\" << endl;\n\
    \            return 0;\n        }\n    }\n\n    for(int i=0; i<V; i++) {\n   \
    \     for(int j=0; j<V; j++) {\n            if(dist[i][j] == numeric_limits<int>::max())\
    \ {\n                cout << \"INF\" << (j == V-1 ? '\\n' : ' ');\n          \
    \  } else {\n                cout << dist[i][j] << (j == V-1 ? '\\n' : ' ');\n\
    \            }\n        }\n    }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_1_C\"\
    \n\n#include <iostream>\n#include <algorithm>\n#include \"../graph/warshall_floyd.cpp\"\
    \n\nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int V, E;\n    cin >> V >> E;\n    vector<vector<int>> g(V, vector<int>(V,\
    \ numeric_limits<int>::max()));\n    for(int i=0; i<V; i++) {\n        g[i][i]\
    \ = 0;\n    }\n    for(int i=0; i<E; i++) {\n        int s, t, d;\n        cin\
    \ >> s >> t >> d;\n        g[s][t] = d;\n    }\n\n    auto dist = warshall_floyd(g);\n\
    \n    for(int i=0; i<V; i++) {\n        if(dist[i][i] < 0) {\n            cout\
    \ << \"NEGATIVE CYCLE\" << endl;\n            return 0;\n        }\n    }\n\n\
    \    for(int i=0; i<V; i++) {\n        for(int j=0; j<V; j++) {\n            if(dist[i][j]\
    \ == numeric_limits<int>::max()) {\n                cout << \"INF\" << (j == V-1\
    \ ? '\\n' : ' ');\n            } else {\n                cout << dist[i][j] <<\
    \ (j == V-1 ? '\\n' : ' ');\n            }\n        }\n    }\n}\n"
  dependsOn:
  - graph/warshall_floyd.cpp
  isVerificationFile: true
  path: aizu/grl_1_c.test.cpp
  requiredBy: []
  timestamp: '2021-06-29 19:12:26+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: aizu/grl_1_c.test.cpp
layout: document
redirect_from:
- /verify/aizu/grl_1_c.test.cpp
- /verify/aizu/grl_1_c.test.cpp.html
title: aizu/grl_1_c.test.cpp
---
