---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: other/inversion_number.cpp
    title: "1\u6B21\u5143\u7D2F\u7A4D\u548C"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_5_D
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_5_D
  bundledCode: "#line 1 \"test/aizu/alds1_5_d.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_5_D\"\
    \n\n#include <iostream>\n#include <numeric>\n#line 1 \"other/inversion_number.cpp\"\
    \n/**\n * @brief 1\u6B21\u5143\u7D2F\u7A4D\u548C\n * @author hasegawa1\n */\n\n\
    #include <vector>\n#include <algorithm>\n#include <cstdint>\n#include <atcoder/fenwicktree>\n\
    \nint64_t inversion_number(const std::vector<int> & v) {\n    const int N = v.size();\n\
    \    const int M = *std::max_element(v.begin(), v.end()) + 1;\n    atcoder::fenwick_tree<int>\
    \ fen(M);\n\n    int64_t res = 0;\n    for(int i=0; i<N; i++) {\n        res +=\
    \ fen.sum(v[i]+1, M);\n        fen.add(v[i], 1);\n    }\n\n    return res;\n}\n\
    #line 6 \"test/aizu/alds1_5_d.test.cpp\"\n\nusing namespace std;\n\nint main(void)\
    \ {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\n    int n;\n\
    \    cin >> n;\n    vector<int> a(n);\n    for(int i=0; i<n; i++) {\n        cin\
    \ >> a[i];\n    }\n\n    vector<int> ord(n);\n    iota(ord.begin(), ord.end(),\
    \ 0);\n    sort(ord.begin(), ord.end(), [&a](auto &lhs, auto &rhs) {\n       \
    \ return a[lhs] < a[rhs];\n    });\n\n    cout << inversion_number(ord) << endl;\n\
    }\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_5_D\"\
    \n\n#include <iostream>\n#include <numeric>\n#include \"../../other/inversion_number.cpp\"\
    \n\nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int n;\n    cin >> n;\n    vector<int> a(n);\n    for(int i=0; i<n; i++)\
    \ {\n        cin >> a[i];\n    }\n\n    vector<int> ord(n);\n    iota(ord.begin(),\
    \ ord.end(), 0);\n    sort(ord.begin(), ord.end(), [&a](auto &lhs, auto &rhs)\
    \ {\n        return a[lhs] < a[rhs];\n    });\n\n    cout << inversion_number(ord)\
    \ << endl;\n}\n"
  dependsOn:
  - other/inversion_number.cpp
  isVerificationFile: true
  path: test/aizu/alds1_5_d.test.cpp
  requiredBy: []
  timestamp: '2021-06-28 23:02:59+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aizu/alds1_5_d.test.cpp
layout: document
redirect_from:
- /verify/test/aizu/alds1_5_d.test.cpp
- /verify/test/aizu/alds1_5_d.test.cpp.html
title: test/aizu/alds1_5_d.test.cpp
---
