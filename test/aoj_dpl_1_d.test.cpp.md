---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: dp/longest_increasing_subsequence.cpp
    title: "\u6700\u9577\u5897\u52A0\u90E8\u5206\u5217\uFF08LIS: Longest Increasing\
      \ Subsequence\uFF09"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_1_D
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_1_D
  bundledCode: "#line 1 \"test/aoj_dpl_1_d.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_1_D\"\
    \n\n#include <iostream>\n#line 1 \"dp/longest_increasing_subsequence.cpp\"\n/**\n\
    \ * @brief \u6700\u9577\u5897\u52A0\u90E8\u5206\u5217\uFF08LIS: Longest Increasing\
    \ Subsequence\uFF09\n * @author hasegawa1\n */\n\n#include <vector>\n#include\
    \ <algorithm>\n\ntemplate<typename T>\nstd::vector<T> longest_increasing_subsequence(const\
    \ std::vector<T> &v, bool strict) {\n    std::vector<T> lis;\n    lis.reserve(v.size());\n\
    \    for(auto e: v) {\n        auto itr = strict ? std::lower_bound(lis.begin(),\
    \ lis.end(), e) : std::upper_bound(lis.begin(), lis.end(), e);\n        if(itr\
    \ == lis.end()) lis.emplace_back(e);\n        else *itr = e;\n    }\n    return\
    \ lis;\n}\n#line 5 \"test/aoj_dpl_1_d.test.cpp\"\n\nusing namespace std;\n\nint\
    \ main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int n;\n    cin >> n;\n    vector<int> a(n);\n    for(int i=0; i<n; i++)\
    \ {\n        cin >> a[i];\n    }\n\n    cout << longest_increasing_subsequence(a,\
    \ true).size() << endl;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_1_D\"\
    \n\n#include <iostream>\n#include \"../dp/longest_increasing_subsequence.cpp\"\
    \n\nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int n;\n    cin >> n;\n    vector<int> a(n);\n    for(int i=0; i<n; i++)\
    \ {\n        cin >> a[i];\n    }\n\n    cout << longest_increasing_subsequence(a,\
    \ true).size() << endl;\n}\n"
  dependsOn:
  - dp/longest_increasing_subsequence.cpp
  isVerificationFile: true
  path: test/aoj_dpl_1_d.test.cpp
  requiredBy: []
  timestamp: '2021-06-28 00:36:18+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_dpl_1_d.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_dpl_1_d.test.cpp
- /verify/test/aoj_dpl_1_d.test.cpp.html
title: test/aoj_dpl_1_d.test.cpp
---
