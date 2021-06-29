---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes: {}
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.5/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.5/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.5/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.9.5/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: ../../other/CumulativeSum2.cpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/challenges/sources/JOI/Final/0560\"\
    \n\n#include <iostream>\n#include <vector>\n#include \"../../other/CumulativeSum2.cpp\"\
    \n\nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int M, N, K;\n    cin >> M >> N >> K;\n\n    vector<vector<int>> J(M, vector<int>(N));\n\
    \    vector<vector<int>> O(M, vector<int>(N));\n    vector<vector<int>> I(M, vector<int>(N));\n\
    \n    for(int i=0; i<M; i++) {\n        for(int j=0; j<N; j++) {\n           \
    \ char c;\n            cin >> c;\n            if(c == 'J') J[i][j] = 1;\n    \
    \        if(c == 'O') O[i][j] = 1;\n            if(c == 'I') I[i][j] = 1;\n  \
    \      }\n    }\n\n    CumulativeSum2 Jsum(J), Osum(O), Isum(I);\n\n    while(K--)\
    \ {\n        int a, b, c, d;\n        cin >> a >> b >> c >> d;\n        cout <<\
    \ Jsum(a-1, b-1, c, d) << ' ';\n        cout << Osum(a-1, b-1, c, d) << ' ';\n\
    \        cout << Isum(a-1, b-1, c, d) << '\\n';\n    }\n}\n"
  dependsOn: []
  isVerificationFile: true
  path: aizu/planetary_exploration.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: aizu/planetary_exploration.test.cpp
layout: document
redirect_from:
- /verify/aizu/planetary_exploration.test.cpp
- /verify/aizu/planetary_exploration.test.cpp.html
title: aizu/planetary_exploration.test.cpp
---
