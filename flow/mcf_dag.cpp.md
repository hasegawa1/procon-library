---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "DAG\u4E0A\u306E\u6700\u5C0F\u8CBB\u7528\u6D41\uFF08\u8CA0\u8FBA\
      \u53EF\uFF09"
    links:
    - https://atcoder.jp/contests/abc214/submissions/25282802
    - https://atcoder.jp/contests/past202107/submissions/25282762
    - https://atcoder.jp/contests/tkppc6-1/submissions/25283007
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.6/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.6/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.6/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.9.6/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: atcoder/mincostflow:\
    \ line -1: no such header\n"
  code: "/**\n * @brief DAG\u4E0A\u306E\u6700\u5C0F\u8CBB\u7528\u6D41\uFF08\u8CA0\u8FBA\
    \u53EF\uFF09\n * @author hasegawa1\n */\n\n// verify: https://atcoder.jp/contests/abc214/submissions/25282802\n\
    // verify: https://atcoder.jp/contests/past202107/submissions/25282762\n// verify:\
    \ https://atcoder.jp/contests/tkppc6-1/submissions/25283007\n\n#include <vector>\n\
    #include <algorithm>\n#include <queue>\n#include <tuple>\n#include <cassert>\n\
    #include \"atcoder/mincostflow\"\n\ntemplate<typename Cap, typename Cost>\nclass\
    \ mcf_dag {\nprivate:\n    atcoder::mcf_graph<Cap, Cost> graph;\n    std::vector<std::vector<std::tuple<int,\
    \ int, Cost>>> adjacency_list;\n    std::vector<Cost> potential;\n\n    std::vector<int>\
    \ topological_order() {\n        size_t N = adjacency_list.size();\n        std::vector<int>\
    \ in(N);\n        for(size_t from=0; from<N; from++) {\n            for(auto [to,\
    \ cap, cost]: adjacency_list[from]) {\n                ++in[to];\n           \
    \ }\n        }\n\n        std::queue<int> q;\n        for(size_t from=0; from<N;\
    \ from++) {\n            if(in[from] == 0) q.emplace(from);\n        }\n\n   \
    \     std::vector<int> res;\n        while(!q.empty()) {\n            int from\
    \ = q.front(); q.pop();\n            res.emplace_back(from);\n            for(auto\
    \ [to, cap, cost]: adjacency_list[from]) {\n                if(--in[to] == 0)\
    \ q.emplace(to);\n            }\n        }\n\n        assert(res.size() == N &&\
    \ \"DAG\u306B\u306A\u3063\u3066\u306A\u3044\u3088\");\n        return res;\n \
    \   }\n\n    void calculate_potential() {\n        for(const auto from: topological_order())\
    \ {\n            for(const auto [to, cap, cost]: adjacency_list[from]) {\n   \
    \             potential[to] = std::min(potential[to], potential[from] + cost);\n\
    \            }\n        }\n    }\n\n    void make_graph() {\n        for(const\
    \ auto from: topological_order()) {\n            for(const auto [to, cap, cost]:\
    \ adjacency_list[from]) {\n                graph.add_edge(from, to, cap, cost\
    \ + potential[from] - potential[to]);\n            }\n        }\n    }\n\npublic:\n\
    \    mcf_dag(int n) : graph(n), adjacency_list(n), potential(n) {}\n\n    void\
    \ add_edge(int from, int to, Cap cap, Cost cost) {\n        adjacency_list[from].emplace_back(to,\
    \ cap, cost);\n    }\n\n    std::pair<Cap, Cost> flow(int s, int t) {\n      \
    \  calculate_potential();\n        make_graph();\n        auto [flow, cost] =\
    \ graph.flow(s, t);\n        return make_pair(flow, cost + flow * potential[t]);\n\
    \    }\n\n    std::pair<Cap, Cost> flow(int s, int t, Cap flow_limit) {\n    \
    \    calculate_potential();\n        make_graph();\n        auto [flow, cost]\
    \ = graph.flow(s, t, flow_limit);\n        return make_pair(flow, cost + flow\
    \ * potential[t]);\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: flow/mcf_dag.cpp
  requiredBy: []
  timestamp: '2021-08-23 00:33:23+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: flow/mcf_dag.cpp
layout: document
redirect_from:
- /library/flow/mcf_dag.cpp
- /library/flow/mcf_dag.cpp.html
title: "DAG\u4E0A\u306E\u6700\u5C0F\u8CBB\u7528\u6D41\uFF08\u8CA0\u8FBA\u53EF\uFF09"
---
