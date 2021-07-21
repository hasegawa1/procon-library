---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: yosupo/montmort_number.test.cpp
    title: yosupo/montmort_number.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u30E2\u30F3\u30E2\u30FC\u30EB\u6570"
    links: []
  bundledCode: "#line 1 \"combinatorics/montmort_number.cpp\"\n/**\n * @brief \u30E2\
    \u30F3\u30E2\u30FC\u30EB\u6570\n * @author hasegawa1\n */\n\n#include <vector>\n\
    \ntemplate<typename Tmod>\nstd::vector<Tmod> montmort_number(int n) {\n    std::vector<Tmod>\
    \ res(n+1);\n    for(int i=2; i<=n; i++) {\n        res[i] = res[i-1] * i;\n \
    \       if(i & 1) res[i]--;\n        else res[i]++;\n    }\n    return res;\n\
    }\n"
  code: "/**\n * @brief \u30E2\u30F3\u30E2\u30FC\u30EB\u6570\n * @author hasegawa1\n\
    \ */\n\n#include <vector>\n\ntemplate<typename Tmod>\nstd::vector<Tmod> montmort_number(int\
    \ n) {\n    std::vector<Tmod> res(n+1);\n    for(int i=2; i<=n; i++) {\n     \
    \   res[i] = res[i-1] * i;\n        if(i & 1) res[i]--;\n        else res[i]++;\n\
    \    }\n    return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: combinatorics/montmort_number.cpp
  requiredBy: []
  timestamp: '2021-07-21 17:47:56+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - yosupo/montmort_number.test.cpp
documentation_of: combinatorics/montmort_number.cpp
layout: document
redirect_from:
- /library/combinatorics/montmort_number.cpp
- /library/combinatorics/montmort_number.cpp.html
title: "\u30E2\u30F3\u30E2\u30FC\u30EB\u6570"
---
