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
  bundledCode: "#line 1 \"test/yosupo/static_range_sum.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/static_range_sum\"\n\n#include <iostream>\n\
    #line 1 \"other/CumulativeSum.cpp\"\n/**\n * @brief 1\u6B21\u5143\u7D2F\u7A4D\u548C\
    \n * @author hasegawa1\n */\n\n#include <vector>\n#include <numeric>\n#include\
    \ <cassert>\n\ntemplate<typename T>\nclass CumulativeSum {\nprivate:\n    const\
    \ int _n;\n    std::vector<T> _cumulative_sum;\npublic:\n    explicit CumulativeSum(std::vector<T>\
    \ v): _n(v.size()) {\n        v.emplace_back(0);\n        _cumulative_sum.reserve(_n);\n\
    \        std::exclusive_scan(v.begin(), v.end(), std::back_inserter(_cumulative_sum),\
    \ T());\n    }\n\n    T operator()(int l, int r) {\n        assert(0 <= l && r\
    \ <= _n);\n        return _cumulative_sum[r] - _cumulative_sum[l];\n    }\n};\n\
    #line 5 \"test/yosupo/static_range_sum.test.cpp\"\n\nusing namespace std;\n\n\
    int main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int N, Q;\n    cin >> N >> Q;\n    vector<int64_t> a(N);\n    for(int i=0;\
    \ i<N; i++) {\n        cin >> a[i];\n    }\n\n    CumulativeSum asum(a);\n\n \
    \   while(Q--) {\n        int l, r;\n        cin >> l >> r;\n        cout << asum(l,\
    \ r) << endl;\n    }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/static_range_sum\"\n\n\
    #include <iostream>\n#include \"../../other/CumulativeSum.cpp\"\n\nusing namespace\
    \ std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int N, Q;\n    cin >> N >> Q;\n    vector<int64_t> a(N);\n    for(int i=0;\
    \ i<N; i++) {\n        cin >> a[i];\n    }\n\n    CumulativeSum asum(a);\n\n \
    \   while(Q--) {\n        int l, r;\n        cin >> l >> r;\n        cout << asum(l,\
    \ r) << endl;\n    }\n}\n"
  dependsOn:
  - other/CumulativeSum.cpp
  isVerificationFile: true
  path: test/yosupo/static_range_sum.test.cpp
  requiredBy: []
  timestamp: '2021-06-28 16:30:56+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/yosupo/static_range_sum.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo/static_range_sum.test.cpp
- /verify/test/yosupo/static_range_sum.test.cpp.html
title: test/yosupo/static_range_sum.test.cpp
---
