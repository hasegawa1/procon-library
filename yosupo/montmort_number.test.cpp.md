---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: combinatorics/montmort_number.cpp
    title: "\u30E2\u30F3\u30E2\u30FC\u30EB\u6570"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/montmort_number_mod
    links:
    - https://judge.yosupo.jp/problem/montmort_number_mod
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.0/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.0/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.0/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.0/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: atcoder/modint:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/montmort_number_mod\"\n\
    \n#include <iostream>\n#include \"atcoder/modint\"\n#include \"../combinatorics/montmort_number.cpp\"\
    \n\nusing namespace std;\nusing mint = atcoder::modint;\n\nint main(void) {\n\
    \    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\n    int N, M;\n\
    \    cin >> N >> M;\n\n    mint::set_mod(M);\n\n    auto m = montmort_number<mint>(N);\n\
    \    for(int i=1; i<=N; i++) {\n        cout << m[i].val() << (i == N ? '\\n'\
    \ : ' ');\n    }\n}\n"
  dependsOn:
  - combinatorics/montmort_number.cpp
  isVerificationFile: true
  path: yosupo/montmort_number.test.cpp
  requiredBy: []
  timestamp: '2021-07-21 17:47:56+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: yosupo/montmort_number.test.cpp
layout: document
redirect_from:
- /verify/yosupo/montmort_number.test.cpp
- /verify/yosupo/montmort_number.test.cpp.html
title: yosupo/montmort_number.test.cpp
---
