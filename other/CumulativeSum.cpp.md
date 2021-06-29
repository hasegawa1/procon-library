---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: yosupo/static_range_sum.test.cpp
    title: yosupo/static_range_sum.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "1\u6B21\u5143\u7D2F\u7A4D\u548C"
    links: []
  bundledCode: "#line 1 \"other/CumulativeSum.cpp\"\n/**\n * @brief 1\u6B21\u5143\u7D2F\
    \u7A4D\u548C\n * @author hasegawa1\n */\n\n#include <vector>\n#include <numeric>\n\
    #include <cassert>\n\ntemplate<typename T>\nclass CumulativeSum {\nprivate:\n\
    \    const int _n;\n    std::vector<T> _cumulative_sum;\npublic:\n    explicit\
    \ CumulativeSum(const std::vector<T> & v): _n(v.size()), _cumulative_sum(v) {\n\
    \        _cumulative_sum.emplace_back(T());\n        std::exclusive_scan(_cumulative_sum.begin(),\
    \ _cumulative_sum.end(), _cumulative_sum.begin(), T());\n    }\n\n    // [l, r)\n\
    \    T operator()(int l, int r) const {\n        assert(0 <= l && r <= _n);\n\
    \        return _cumulative_sum[r] - _cumulative_sum[l];\n    }\n};\n"
  code: "/**\n * @brief 1\u6B21\u5143\u7D2F\u7A4D\u548C\n * @author hasegawa1\n */\n\
    \n#include <vector>\n#include <numeric>\n#include <cassert>\n\ntemplate<typename\
    \ T>\nclass CumulativeSum {\nprivate:\n    const int _n;\n    std::vector<T> _cumulative_sum;\n\
    public:\n    explicit CumulativeSum(const std::vector<T> & v): _n(v.size()), _cumulative_sum(v)\
    \ {\n        _cumulative_sum.emplace_back(T());\n        std::exclusive_scan(_cumulative_sum.begin(),\
    \ _cumulative_sum.end(), _cumulative_sum.begin(), T());\n    }\n\n    // [l, r)\n\
    \    T operator()(int l, int r) const {\n        assert(0 <= l && r <= _n);\n\
    \        return _cumulative_sum[r] - _cumulative_sum[l];\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: other/CumulativeSum.cpp
  requiredBy: []
  timestamp: '2021-06-30 00:48:08+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - yosupo/static_range_sum.test.cpp
documentation_of: other/CumulativeSum.cpp
layout: document
redirect_from:
- /library/other/CumulativeSum.cpp
- /library/other/CumulativeSum.cpp.html
title: "1\u6B21\u5143\u7D2F\u7A4D\u548C"
---
