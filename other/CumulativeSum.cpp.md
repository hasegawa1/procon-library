---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
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
    \    T operator()(int l, int r) {\n        assert(0 <= l && r <= _n);\n      \
    \  return _cumulative_sum[r] - _cumulative_sum[l];\n    }\n};\n"
  code: "/**\n * @brief 1\u6B21\u5143\u7D2F\u7A4D\u548C\n * @author hasegawa1\n */\n\
    \n#include <vector>\n#include <numeric>\n#include <cassert>\n\ntemplate<typename\
    \ T>\nclass CumulativeSum {\nprivate:\n    const int _n;\n    std::vector<T> _cumulative_sum;\n\
    public:\n    explicit CumulativeSum(const std::vector<T> & v): _n(v.size()), _cumulative_sum(v)\
    \ {\n        _cumulative_sum.emplace_back(T());\n        std::exclusive_scan(_cumulative_sum.begin(),\
    \ _cumulative_sum.end(), _cumulative_sum.begin(), T());\n    }\n\n    // [l, r)\n\
    \    T operator()(int l, int r) {\n        assert(0 <= l && r <= _n);\n      \
    \  return _cumulative_sum[r] - _cumulative_sum[l];\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: other/CumulativeSum.cpp
  requiredBy: []
  timestamp: '2021-06-28 16:51:06+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: other/CumulativeSum.cpp
layout: document
redirect_from:
- /library/other/CumulativeSum.cpp
- /library/other/CumulativeSum.cpp.html
title: "1\u6B21\u5143\u7D2F\u7A4D\u548C"
---
