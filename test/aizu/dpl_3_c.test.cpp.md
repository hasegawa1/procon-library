---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: dp/largest_rectangle_in_a_histogram.cpp
    title: "\u30D2\u30B9\u30C8\u30B0\u30E9\u30E0\u4E2D\u306E\u6700\u5927\u9577\u65B9\
      \u5F62\u306E\u9762\u7A4D"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_3_C
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_3_C
  bundledCode: "#line 1 \"test/aizu/dpl_3_c.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_3_C\"\
    \n\n#include <iostream>\n#include <vector>\n#line 1 \"dp/largest_rectangle_in_a_histogram.cpp\"\
    \n/**\n * @brief \u30D2\u30B9\u30C8\u30B0\u30E9\u30E0\u4E2D\u306E\u6700\u5927\u9577\
    \u65B9\u5F62\u306E\u9762\u7A4D\n * @author hasegawa1\n */\n\n#line 7 \"dp/largest_rectangle_in_a_histogram.cpp\"\
    \n#include <stack>\n#include <algorithm>\n\ntemplate<typename T>\nint64_t largest_rectangle(std::vector<T>\
    \ histogram) {\n    int N = histogram.size();\n    histogram.emplace_back(0);\n\
    \    std::vector<int> left(N+1);\n    std::stack<int> stk;\n\n    int64_t res\
    \ = 0;\n    for(int i=0; i<=N; i++) {\n        while(!stk.empty() && histogram[stk.top()]\
    \ >= histogram[i]) {\n            res = std::max(res, (int64_t)(i-left[stk.top()]-1)\
    \ * histogram[stk.top()]);\n            stk.pop();\n        }\n        left[i]\
    \ = stk.empty() ? -1 : stk.top();\n        stk.emplace(i);\n    }\n\n    return\
    \ res;\n}\n#line 6 \"test/aizu/dpl_3_c.test.cpp\"\n\nusing namespace std;\n\n\
    int main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int N;\n    cin >> N;\n    vector<int> h(N);\n    for(int i=0; i<N; i++)\
    \ {\n        cin >> h[i];\n    }\n\n    cout << largest_rectangle(h) << endl;\n\
    }\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_3_C\"\
    \n\n#include <iostream>\n#include <vector>\n#include \"../../dp/largest_rectangle_in_a_histogram.cpp\"\
    \n\nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int N;\n    cin >> N;\n    vector<int> h(N);\n    for(int i=0; i<N; i++)\
    \ {\n        cin >> h[i];\n    }\n\n    cout << largest_rectangle(h) << endl;\n\
    }\n"
  dependsOn:
  - dp/largest_rectangle_in_a_histogram.cpp
  isVerificationFile: true
  path: test/aizu/dpl_3_c.test.cpp
  requiredBy: []
  timestamp: '2021-06-28 19:51:07+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aizu/dpl_3_c.test.cpp
layout: document
redirect_from:
- /verify/test/aizu/dpl_3_c.test.cpp
- /verify/test/aizu/dpl_3_c.test.cpp.html
title: test/aizu/dpl_3_c.test.cpp
---
