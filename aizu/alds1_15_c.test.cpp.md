---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: other/schedule_intervals.cpp
    title: "\u533A\u9593\u30B9\u30B1\u30B8\u30E5\u30FC\u30EA\u30F3\u30B0\u554F\u984C"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_15_C
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_15_C
  bundledCode: "#line 1 \"aizu/alds1_15_c.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_15_C\"\
    \n\n#include <iostream>\n#line 1 \"other/schedule_intervals.cpp\"\n/**\n * @brief\
    \ \u533A\u9593\u30B9\u30B1\u30B8\u30E5\u30FC\u30EA\u30F3\u30B0\u554F\u984C\n *\
    \ @author hasegawa1\n */\n\n#include <vector>\n#include <algorithm>\n\ntemplate<typename\
    \ T>\nstd::vector<std::pair<T,T>> schedule_intervals(std::vector<std::pair<T,T>>\
    \ intervals/*[l, r]*/, bool strict) {\n    sort(intervals.begin(), intervals.end(),\
    \ [](const auto &lhs, const auto &rhs) {\n        return lhs.second < rhs.second;\n\
    \    });\n\n    T last = -1;\n    std::vector<std::pair<T,T>> res;\n    for(const\
    \ auto [l, r]: intervals) {\n        if(strict) {\n            if(last < l) {\n\
    \                res.emplace_back(l, r);\n                last = r;\n        \
    \    }\n        } else if(last <= l) {\n            res.emplace_back(l, r);\n\
    \            last = r;\n        }\n    }\n\n    return res;\n}\n#line 5 \"aizu/alds1_15_c.test.cpp\"\
    \n\nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int n;\n    cin >> n;\n    vector<pair<int,int>> v(n);\n    for(int i=0;\
    \ i<n; i++) {\n        cin >> v[i].first >> v[i].second;\n    }\n\n    cout <<\
    \ schedule_intervals(v, true).size() << endl;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_15_C\"\
    \n\n#include <iostream>\n#include \"../other/schedule_intervals.cpp\"\n\nusing\
    \ namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int n;\n    cin >> n;\n    vector<pair<int,int>> v(n);\n    for(int i=0;\
    \ i<n; i++) {\n        cin >> v[i].first >> v[i].second;\n    }\n\n    cout <<\
    \ schedule_intervals(v, true).size() << endl;\n}\n"
  dependsOn:
  - other/schedule_intervals.cpp
  isVerificationFile: true
  path: aizu/alds1_15_c.test.cpp
  requiredBy: []
  timestamp: '2021-06-29 19:12:26+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: aizu/alds1_15_c.test.cpp
layout: document
redirect_from:
- /verify/aizu/alds1_15_c.test.cpp
- /verify/aizu/alds1_15_c.test.cpp.html
title: aizu/alds1_15_c.test.cpp
---
