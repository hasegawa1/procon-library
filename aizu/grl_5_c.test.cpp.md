---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: tree/LowestCommonAncestor.cpp
    title: "\u6700\u5C0F\u5171\u901A\u7956\u5148\uFF08LCA: Lowest Common Ancestor\uFF09"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_5_C
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_5_C
  bundledCode: "#line 1 \"aizu/grl_5_c.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_5_C\"\
    \n\n#include <iostream>\n#include <vector>\n#line 1 \"tree/LowestCommonAncestor.cpp\"\
    \n/**\n * @brief \u6700\u5C0F\u5171\u901A\u7956\u5148\uFF08LCA: Lowest Common\
    \ Ancestor\uFF09\n * @author hasegawa1\n */\n\n#line 7 \"tree/LowestCommonAncestor.cpp\"\
    \n#include <cstdint>\n#include <cassert>\n#include <utility>\n\ntemplate<typename\
    \ T = int>\nclass LowestCommonAncestor {\nprivate:\n    const int _n;\n    const\
    \ int _root;\n    const int _log = 31;\n    std::vector<std::vector<std::pair<int,T>>>\
    \ _adjacency_list;\n    std::vector<int> _depth;\n    std::vector<T> _distance;\n\
    \    std::vector<std::vector<int>> _doubling;\n\n    void dfs(int v, int depth,\
    \ T distance, int parent=-1) {\n        _depth[v] = depth;\n        _distance[v]\
    \ = distance;\n        _doubling[0][v] = parent;\n        for(const auto [u, cost]:\
    \ _adjacency_list[v]) {\n            if(u == parent) continue;\n            dfs(u,\
    \ depth+1, distance+cost, v);\n        }\n    }\n\n    void doubling() {\n   \
    \     for(int k=0; k+1<_log; k++) {\n            for(int v=0; v<_n; v++) {\n \
    \               if(_doubling[k][v] == -1) {\n                    _doubling[k+1][v]\
    \ = -1;\n                } else {\n                    _doubling[k+1][v] = _doubling[k][_doubling[k][v]];\n\
    \                }\n            }\n        }\n    }\n\npublic:\n    explicit LowestCommonAncestor(const\
    \ std::vector<std::vector<int>> & g, int root)\n    : _n(g.size()), _root(root),\
    \ _adjacency_list(_n), _depth(_n), _distance(_n), _doubling(_log, std::vector<int>(_n))\
    \ {\n        for(int v=0; v<_n; v++) {\n            for(auto u: g[v]) {\n    \
    \            _adjacency_list[v].emplace_back(u, 1);\n            }\n        }\n\
    \        dfs(_root, 0, T());\n        doubling();\n    }\n    explicit LowestCommonAncestor(const\
    \ std::vector<std::vector<std::pair<int,T>>> & g, int root)\n    : _n(g.size()),\
    \ _root(root), _adjacency_list(g), _depth(_n), _distance(_n), _doubling(_log,\
    \ std::vector<int>(_n)) {\n        dfs(_root, 0, T());\n        doubling();\n\
    \    }\n\n    int ancestor(int v, int k) const {\n        assert(0 <= v && v <\
    \ _n);\n        for(int i=0; i<_log; i++) {\n            if(k>>i & 1) v = _doubling[i][v];\n\
    \        }\n        return v;\n    }\n\n    int lowest_common_ancestor(int v,\
    \ int u) const {\n        assert(0 <= v && v < _n);\n        assert(0 <= u &&\
    \ u < _n);\n        if(_depth[v] > _depth[u]) std::swap(v, u);\n        u = ancestor(u,\
    \ _depth[u]-_depth[v]);\n        if(v == u) return v;\n        for(int i=_log-1;\
    \ i>=0; i--) {\n            if(_doubling[i][v] != _doubling[i][u]) {\n       \
    \         v = _doubling[i][v];\n                u = _doubling[i][u];\n       \
    \     }\n        }\n        return _doubling[0][v];\n    }\n\n    int operator()(int\
    \ v, int u) const {\n        return lowest_common_ancestor(v, u);\n    }\n};\n\
    #line 6 \"aizu/grl_5_c.test.cpp\"\n\nusing namespace std;\n\nint main(void) {\n\
    \    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\n    int n;\n\
    \    cin >> n;\n    vector<vector<int>> g(n);\n    for(int i=0; i<n; i++) {\n\
    \        int k;\n        cin >> k;\n        while(k--) {\n            int c;\n\
    \            cin >> c;\n            g[i].emplace_back(c);\n        }\n    }\n\n\
    \    LowestCommonAncestor lca(g, 0);\n\n    int q;\n    cin >> q;\n    while(q--)\
    \ {\n        int u, v;\n        cin >> u >> v;\n        cout << lca(u, v) << endl;\n\
    \    }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_5_C\"\
    \n\n#include <iostream>\n#include <vector>\n#include \"../tree/LowestCommonAncestor.cpp\"\
    \n\nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int n;\n    cin >> n;\n    vector<vector<int>> g(n);\n    for(int i=0; i<n;\
    \ i++) {\n        int k;\n        cin >> k;\n        while(k--) {\n          \
    \  int c;\n            cin >> c;\n            g[i].emplace_back(c);\n        }\n\
    \    }\n\n    LowestCommonAncestor lca(g, 0);\n\n    int q;\n    cin >> q;\n \
    \   while(q--) {\n        int u, v;\n        cin >> u >> v;\n        cout << lca(u,\
    \ v) << endl;\n    }\n}\n"
  dependsOn:
  - tree/LowestCommonAncestor.cpp
  isVerificationFile: true
  path: aizu/grl_5_c.test.cpp
  requiredBy: []
  timestamp: '2021-07-02 00:05:14+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: aizu/grl_5_c.test.cpp
layout: document
redirect_from:
- /verify/aizu/grl_5_c.test.cpp
- /verify/aizu/grl_5_c.test.cpp.html
title: aizu/grl_5_c.test.cpp
---
