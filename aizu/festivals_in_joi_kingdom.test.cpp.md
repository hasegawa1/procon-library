---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/dijkstra.cpp
    title: "\u5358\u4E00\u59CB\u70B9\u6700\u77ED\u7D4C\u8DEF\u9577\uFF08Dijkstra\uFF09"
  - icon: ':heavy_check_mark:'
    path: graph/kruskal.cpp
    title: "\u6700\u5C0F\u5168\u57DF\u68EE\uFF08Kruskal\uFF09"
  - icon: ':heavy_check_mark:'
    path: other/Doubling.cpp
    title: "\u30C0\u30D6\u30EA\u30F3\u30B0"
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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/challenges/sources/JOI/Final/0575
    links:
    - https://onlinejudge.u-aizu.ac.jp/challenges/sources/JOI/Final/0575
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.6/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.6/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.6/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.9.6/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: atcoder/dsu: line\
    \ -1: no such header\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/challenges/sources/JOI/Final/0575\"\
    \n\n#include <iostream>\n#include <vector>\n#include \"atcoder/dsu\"\n#include\
    \ \"../graph/dijkstra.cpp\"\n#include \"../graph/kruskal.cpp\"\n#include \"../tree/LowestCommonAncestor.cpp\"\
    \n#include \"../other/Doubling.cpp\"\n\nusing namespace std;\nusing namespace\
    \ atcoder;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int N, M, K, Q;\n    cin >> N >> M >> K >> Q;\n    vector<int> A(M), B(M),\
    \ L(M), F(K);\n    for(int j=0; j<M; j++) {\n        cin >> A[j] >> B[j] >> L[j];\n\
    \        --A[j]; --B[j];\n    }\n    for(int k=0; k<K; k++) {\n        cin >>\
    \ F[k];\n        --F[k];\n    }\n\n    WeightedGraph<int> g(N);\n    for(int j=0;\
    \ j<M; j++) {\n        g[A[j]].emplace_back(B[j], L[j]);\n        g[B[j]].emplace_back(A[j],\
    \ L[j]);\n    }\n    auto dist = dijkstra(g, F);\n\n    vector<tuple<int,int,int>>\
    \ edges;\n    for(int j=0; j<M; j++) {\n        edges.emplace_back(A[j], B[j],\
    \ -min(dist[A[j]], dist[B[j]]));\n    }\n    auto mst = kruskal(edges, N).edges;\n\
    \n    WeightedGraph<int> tree(N);\n    for(const auto [u, v, cost]: mst) {\n \
    \       tree[v].emplace_back(u, 1);\n        tree[u].emplace_back(v, 1);\n   \
    \ }\n    LowestCommonAncestor lca(tree, 0);\n\n    vector<int> next(N, -1), cost(N,\
    \ 0);\n    for(int i=1; i<N; i++) {\n        next[i] = lca.parent(i);\n    }\n\
    \    for(const auto [u, v, c]: mst) {\n        if(lca.depth(v) < lca.depth(u))\
    \ {\n            cost[u] = -c;\n        } else {\n            cost[v] = -c;\n\
    \        }\n    }\n    Doubling dbl(next, cost);\n\n    while(Q--) {\n       \
    \ int S, T;\n        cin >> S >> T;\n        --S; --T;\n        int l = lca(S,\
    \ T);\n        cout << min(dbl.min(S, lca.distance(S, l)), dbl.min(T, lca.distance(T,\
    \ l))) << endl;\n    }\n    return 0;\n}\n"
  dependsOn:
  - graph/dijkstra.cpp
  - graph/kruskal.cpp
  - tree/LowestCommonAncestor.cpp
  - other/Doubling.cpp
  isVerificationFile: true
  path: aizu/festivals_in_joi_kingdom.test.cpp
  requiredBy: []
  timestamp: '2021-07-20 19:06:08+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: aizu/festivals_in_joi_kingdom.test.cpp
layout: document
redirect_from:
- /verify/aizu/festivals_in_joi_kingdom.test.cpp
- /verify/aizu/festivals_in_joi_kingdom.test.cpp.html
title: aizu/festivals_in_joi_kingdom.test.cpp
---
