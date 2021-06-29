---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: other/CumulativeSum.cpp
    title: "1\u6B21\u5143\u7D2F\u7A4D\u548C"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/static_range_sum
    links:
    - https://judge.yosupo.jp/problem/static_range_sum
  bundledCode: "#line 1 \"yosupo/static_range_sum.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/static_range_sum\"\
    \n\n#include <iostream>\n#line 1 \"other/CumulativeSum.cpp\"\n/**\n * @brief 1\u6B21\
    \u5143\u7D2F\u7A4D\u548C\n * @author hasegawa1\n */\n\n#include <vector>\n#include\
    \ <numeric>\n#include <cassert>\n\ntemplate<typename T>\nclass CumulativeSum {\n\
    private:\n    const int _n;\n    std::vector<T> _cumulative_sum;\npublic:\n  \
    \  explicit CumulativeSum(const std::vector<T> & v): _n(v.size()), _cumulative_sum(v)\
    \ {\n        _cumulative_sum.emplace_back(T());\n        std::exclusive_scan(_cumulative_sum.begin(),\
    \ _cumulative_sum.end(), _cumulative_sum.begin(), T());\n    }\n\n    // [l, r)\n\
    \    T operator()(int l, int r) {\n        assert(0 <= l && r <= _n);\n      \
    \  return _cumulative_sum[r] - _cumulative_sum[l];\n    }\n};\n#line 5 \"yosupo/static_range_sum.test.cpp\"\
    \n\nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int N, Q;\n    cin >> N >> Q;\n    vector<int64_t> a(N);\n    for(int i=0;\
    \ i<N; i++) {\n        cin >> a[i];\n    }\n\n    CumulativeSum asum(a);\n\n \
    \   while(Q--) {\n        int l, r;\n        cin >> l >> r;\n        cout << asum(l,\
    \ r) << endl;\n    }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/static_range_sum\"\n\n\
    #include <iostream>\n#include \"../other/CumulativeSum.cpp\"\n\nusing namespace\
    \ std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int N, Q;\n    cin >> N >> Q;\n    vector<int64_t> a(N);\n    for(int i=0;\
    \ i<N; i++) {\n        cin >> a[i];\n    }\n\n    CumulativeSum asum(a);\n\n \
    \   while(Q--) {\n        int l, r;\n        cin >> l >> r;\n        cout << asum(l,\
    \ r) << endl;\n    }\n}\n"
  dependsOn:
  - other/CumulativeSum.cpp
  isVerificationFile: true
  path: yosupo/static_range_sum.test.cpp
  requiredBy: []
  timestamp: '2021-06-29 19:20:38+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: yosupo/static_range_sum.test.cpp
layout: document
redirect_from:
- /verify/yosupo/static_range_sum.test.cpp
- /verify/yosupo/static_range_sum.test.cpp.html
title: yosupo/static_range_sum.test.cpp
---
