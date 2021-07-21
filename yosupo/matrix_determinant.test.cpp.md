---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: matrix/Matrix.cpp
    title: "\u884C\u5217\uFF08Mod p\uFF09"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/matrix_det
    links:
    - https://judge.yosupo.jp/problem/matrix_det
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.6/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.6/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.6/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.9.6/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: atcoder/modint:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/matrix_det\"\n\n#include\
    \ <iostream>\n#include \"atcoder/modint\"\n#include \"../matrix/Matrix.cpp\"\n\
    \nusing namespace std;\nusing mint = atcoder::modint998244353;\n\nint main(void)\
    \ {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\n    int N;\n\
    \    cin >> N;\n    Matrix<mint> a(N);\n    cin >> a;\n\n    cout << a.determinant().val()\
    \ << endl;\n    return 0;\n}\n"
  dependsOn:
  - matrix/Matrix.cpp
  isVerificationFile: true
  path: yosupo/matrix_determinant.test.cpp
  requiredBy: []
  timestamp: '2021-07-21 17:37:28+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: yosupo/matrix_determinant.test.cpp
layout: document
redirect_from:
- /verify/yosupo/matrix_determinant.test.cpp
- /verify/yosupo/matrix_determinant.test.cpp.html
title: yosupo/matrix_determinant.test.cpp
---
