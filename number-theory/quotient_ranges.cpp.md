---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "\u5546\u5217\u6319"
    links:
    - https://atcoder.jp/contests/abc132/submissions/21387526
  bundledCode: "#line 1 \"number-theory/quotient_ranges.cpp\"\n/**\n * @brief \u5546\
    \u5217\u6319\n * @author hasegawa1\n */\n\n// verify: https://atcoder.jp/contests/abc132/submissions/21387526\n\
    \n#include <vector>\n#include <tuple>\n#include <cstdint>\n#include <cassert>\n\
    \nstd::vector<std::tuple<int64_t,int64_t,int64_t>> quotient_ranges(const int64_t\
    \ n) {\n    std::vector<std::tuple<int64_t,int64_t,int64_t>> res;\n    int64_t\
    \ m;\n    for(m=1; m*m<=n; m++) {\n        res.emplace_back(m, m, n/m);\n    }\n\
    \    for(int64_t i=m; i; i--) {\n        int64_t l = n / (i+1) + 1;\n        int64_t\
    \ r = n / i;\n        if(l <= r && std::get<1>(res.back()) < l) {\n          \
    \  res.emplace_back(l, r, n/l);\n        }\n    }\n    return res;\n}\n"
  code: "/**\n * @brief \u5546\u5217\u6319\n * @author hasegawa1\n */\n\n// verify:\
    \ https://atcoder.jp/contests/abc132/submissions/21387526\n\n#include <vector>\n\
    #include <tuple>\n#include <cstdint>\n#include <cassert>\n\nstd::vector<std::tuple<int64_t,int64_t,int64_t>>\
    \ quotient_ranges(const int64_t n) {\n    std::vector<std::tuple<int64_t,int64_t,int64_t>>\
    \ res;\n    int64_t m;\n    for(m=1; m*m<=n; m++) {\n        res.emplace_back(m,\
    \ m, n/m);\n    }\n    for(int64_t i=m; i; i--) {\n        int64_t l = n / (i+1)\
    \ + 1;\n        int64_t r = n / i;\n        if(l <= r && std::get<1>(res.back())\
    \ < l) {\n            res.emplace_back(l, r, n/l);\n        }\n    }\n    return\
    \ res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: number-theory/quotient_ranges.cpp
  requiredBy: []
  timestamp: '2021-07-26 23:10:49+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: number-theory/quotient_ranges.cpp
layout: document
redirect_from:
- /library/number-theory/quotient_ranges.cpp
- /library/number-theory/quotient_ranges.cpp.html
title: "\u5546\u5217\u6319"
---
