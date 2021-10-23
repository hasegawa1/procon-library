---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/traffic_tree.test.cpp
    title: aizu/traffic_tree.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u5168\u65B9\u4F4D\u6728DP\uFF08ReRooting\uFF09"
    links: []
  bundledCode: "#line 1 \"tree/Rerooting.cpp\"\n/**\n * @brief \u5168\u65B9\u4F4D\u6728\
    DP\uFF08ReRooting\uFF09\n * @author hasegawa1\n */\n\n#include <vector>\n#include\
    \ <algorithm>\n\ntemplate<typename Subtree, typename Weight>\nclass ReRooting\
    \ {\nprivate:\n    struct Edge {\n        int to;\n        Weight weight;\n  \
    \      Subtree dp, ndp;\n    };\n\n    std::vector<std::vector<Edge>> adjacency_list;\n\
    \    const Subtree identity;\n    std::vector<Subtree> subdp, dp;\n\n    // Merge\
    \ two child-subtree.\n    // op(a, op(b, c)) = op(op(a, b), c).\n    // op(a,\
    \ identity) = op(identity, a) = a.\n    Subtree op(const Subtree &a, const Subtree\
    \ &b) {\n        return std::max(a, b); //example\n    }\n\n    Subtree lift_up(const\
    \ Subtree &a, const Weight &weight) {\n        return a + weight; //example\n\
    \    }\n\n    void dfs_sub(int v, int p) {\n        for(const auto& [u, weight,\
    \ _1, _2] : adjacency_list[v]) {\n            if(u == p) continue;\n         \
    \   dfs_sub(u, v);\n            subdp[v] = op(subdp[v], lift_up(subdp[u], weight));\n\
    \        }\n    }\n\n    void dfs_all(int v, int p, const Subtree &top) {\n  \
    \      Subtree acc = identity;\n        for(auto& [u, weight, dp, ndp]: adjacency_list[v])\
    \ {\n            ndp = acc;\n            dp = lift_up(u == p ? top : subdp[u],\
    \ weight);\n            acc = op(acc, dp);\n        }\n        dp[v] = acc;\n\
    \        acc = identity;\n        for(int i=(int) adjacency_list[v].size()-1;\
    \ i>=0; i--) {\n            auto &[u, _, dp, ndp] = adjacency_list[v][i];\n  \
    \          if(u != p) dfs_all(u, v, op(ndp, acc));\n            ndp = op(ndp,\
    \ acc);\n            acc = op(acc, dp);\n        }\n    }\n\npublic:\n    ReRooting(int\
    \ N, const Subtree &identity)\n        : adjacency_list(N), identity(identity),\
    \ subdp(N, identity), dp(N, identity) {}\n\n    void add_directed_edge(int u,\
    \ int v, const Weight &weight) {\n        adjacency_list[u].push_back(Edge{v,\
    \ weight, identity, identity});\n    }\n\n    void add_undirected_edge(int u,\
    \ int v, const Weight &weight) {\n        add_directed_edge(u, v, weight);\n \
    \       add_directed_edge(v, u, weight);\n    }\n\n    std::vector<Subtree> build()\
    \ {\n        dfs_sub(0, -1);\n        dfs_all(0, -1, identity);\n        return\
    \ dp;\n    }\n};\n"
  code: "/**\n * @brief \u5168\u65B9\u4F4D\u6728DP\uFF08ReRooting\uFF09\n * @author\
    \ hasegawa1\n */\n\n#include <vector>\n#include <algorithm>\n\ntemplate<typename\
    \ Subtree, typename Weight>\nclass ReRooting {\nprivate:\n    struct Edge {\n\
    \        int to;\n        Weight weight;\n        Subtree dp, ndp;\n    };\n\n\
    \    std::vector<std::vector<Edge>> adjacency_list;\n    const Subtree identity;\n\
    \    std::vector<Subtree> subdp, dp;\n\n    // Merge two child-subtree.\n    //\
    \ op(a, op(b, c)) = op(op(a, b), c).\n    // op(a, identity) = op(identity, a)\
    \ = a.\n    Subtree op(const Subtree &a, const Subtree &b) {\n        return std::max(a,\
    \ b); //example\n    }\n\n    Subtree lift_up(const Subtree &a, const Weight &weight)\
    \ {\n        return a + weight; //example\n    }\n\n    void dfs_sub(int v, int\
    \ p) {\n        for(const auto& [u, weight, _1, _2] : adjacency_list[v]) {\n \
    \           if(u == p) continue;\n            dfs_sub(u, v);\n            subdp[v]\
    \ = op(subdp[v], lift_up(subdp[u], weight));\n        }\n    }\n\n    void dfs_all(int\
    \ v, int p, const Subtree &top) {\n        Subtree acc = identity;\n        for(auto&\
    \ [u, weight, dp, ndp]: adjacency_list[v]) {\n            ndp = acc;\n       \
    \     dp = lift_up(u == p ? top : subdp[u], weight);\n            acc = op(acc,\
    \ dp);\n        }\n        dp[v] = acc;\n        acc = identity;\n        for(int\
    \ i=(int) adjacency_list[v].size()-1; i>=0; i--) {\n            auto &[u, _, dp,\
    \ ndp] = adjacency_list[v][i];\n            if(u != p) dfs_all(u, v, op(ndp, acc));\n\
    \            ndp = op(ndp, acc);\n            acc = op(acc, dp);\n        }\n\
    \    }\n\npublic:\n    ReRooting(int N, const Subtree &identity)\n        : adjacency_list(N),\
    \ identity(identity), subdp(N, identity), dp(N, identity) {}\n\n    void add_directed_edge(int\
    \ u, int v, const Weight &weight) {\n        adjacency_list[u].push_back(Edge{v,\
    \ weight, identity, identity});\n    }\n\n    void add_undirected_edge(int u,\
    \ int v, const Weight &weight) {\n        add_directed_edge(u, v, weight);\n \
    \       add_directed_edge(v, u, weight);\n    }\n\n    std::vector<Subtree> build()\
    \ {\n        dfs_sub(0, -1);\n        dfs_all(0, -1, identity);\n        return\
    \ dp;\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: tree/Rerooting.cpp
  requiredBy: []
  timestamp: '2021-10-23 20:16:34+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/traffic_tree.test.cpp
documentation_of: tree/Rerooting.cpp
layout: document
redirect_from:
- /library/tree/Rerooting.cpp
- /library/tree/Rerooting.cpp.html
title: "\u5168\u65B9\u4F4D\u6728DP\uFF08ReRooting\uFF09"
---
