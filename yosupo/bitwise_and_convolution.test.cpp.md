---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: convolution/and_convolution.cpp
    title: Bitwise And Convolution
  - icon: ':heavy_check_mark:'
    path: convolution/moebius_transform.cpp
    title: "\u9AD8\u901F\u30E1\u30D3\u30A6\u30B9\u5909\u63DB"
  - icon: ':heavy_check_mark:'
    path: convolution/zeta_transform.cpp
    title: "\u9AD8\u901F\u30BC\u30FC\u30BF\u5909\u63DB"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/bitwise_and_convolution
    links:
    - https://judge.yosupo.jp/problem/bitwise_and_convolution
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.6/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.6/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.6/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.9.6/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: atcoder/modint:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/bitwise_and_convolution\"\
    \n\n#include <iostream>\n#include \"../convolution/and_convolution.cpp\"\n#include\
    \ \"atcoder/modint\"\n\nusing namespace std;\nusing mint = atcoder::modint998244353;\n\
    \nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int N;\n    cin >> N;\n    vector<mint> a(1<<N), b(1<<N);\n    for(int i=0;\
    \ i<(1<<N); i++) {\n        int x;\n        cin >> x;\n        a[i] = x;\n   \
    \ }\n    for(int i=0; i<(1<<N); i++) {\n        int x;\n        cin >> x;\n  \
    \      b[i] = x;\n    }\n\n    auto ans = and_convolution(a, b);\n    for(int\
    \ i=0; i<(1<<N); i++) {\n        cout << ans[i].val() << (i+1 == (1<<N) ? '\\\
    n' : ' ');\n    }\n}\n"
  dependsOn:
  - convolution/and_convolution.cpp
  - convolution/zeta_transform.cpp
  - convolution/moebius_transform.cpp
  isVerificationFile: true
  path: yosupo/bitwise_and_convolution.test.cpp
  requiredBy: []
  timestamp: '2021-08-24 01:07:25+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: yosupo/bitwise_and_convolution.test.cpp
layout: document
redirect_from:
- /verify/yosupo/bitwise_and_convolution.test.cpp
- /verify/yosupo/bitwise_and_convolution.test.cpp.html
title: yosupo/bitwise_and_convolution.test.cpp
---
