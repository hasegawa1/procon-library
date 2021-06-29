---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/prim.cpp
    title: "\u6700\u5C0F\u5168\u57DF\u68EE\uFF08Prim\uFF09"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_2_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_2_A
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.5/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.5/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.5/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.9.5/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: ../graph/prim.cpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_2_A\"\
    \n\n#include <iostream>\n#include <algorithm>\n#include \"../graph/prim.cpp\"\n\
    \nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int V, E;\n    cin >> V >> E;\n    WeightedGraph<int> g(V);\n    for(int\
    \ i=0; i<E; i++) {\n        int s, t, w;\n        cin >> s >> t >> w;\n      \
    \  g[s].emplace_back(t, w);\n        g[t].emplace_back(s, w);\n    }\n\n    cout\
    \ << prim(g) << endl;\n}\n"
  dependsOn:
  - graph/prim.cpp
  isVerificationFile: true
  path: test/aizu/grl_2_a.prim.test.cpp
  requiredBy: []
  timestamp: '2021-06-29 19:04:00+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aizu/grl_2_a.prim.test.cpp
layout: document
redirect_from:
- /verify/test/aizu/grl_2_a.prim.test.cpp
- /verify/test/aizu/grl_2_a.prim.test.cpp.html
title: test/aizu/grl_2_a.prim.test.cpp
---
