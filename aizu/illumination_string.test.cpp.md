---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: other/run_length_encoding.cpp
    title: "\u9023\u9577\u5727\u7E2E"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/challenges/sources/JOI/Final/0603
    links:
    - https://onlinejudge.u-aizu.ac.jp/challenges/sources/JOI/Final/0603
  bundledCode: "#line 1 \"aizu/illumination_string.test.cpp\"\n#define PROBLEM \"\
    https://onlinejudge.u-aizu.ac.jp/challenges/sources/JOI/Final/0603\"\n\n#include\
    \ <iostream>\n#include <vector>\n#include <string>\n#line 1 \"other/run_length_encoding.cpp\"\
    \n/**\n * @brief \u9023\u9577\u5727\u7E2E\n * @author hasegawa1\n */\n\n#line\
    \ 8 \"other/run_length_encoding.cpp\"\n#include <algorithm>\n\n// verify: https://atcoder.jp/contests/typical90/submissions/24392343\n\
    std::vector<std::pair<char,int>> run_length_encoding(const std::string & s) {\n\
    \    std::vector<std::pair<char,int>> res;\n    for(const auto e: s) {\n     \
    \   if(res.empty() || e != res.back().first) {\n            res.emplace_back(e,\
    \ 1);\n        } else {\n            res.back().second++;\n        }\n    }\n\
    \    return res;\n}\n\ntemplate<typename T>\nstd::vector<std::pair<T,int>> run_length_encoding(const\
    \ std::vector<T> & v) {\n    std::vector<std::pair<T,int>> res;\n    for(const\
    \ auto e: v) {\n        if(res.empty() || e != res.back().first) {\n         \
    \   res.emplace_back(e, 1);\n        } else {\n            res.back().second++;\n\
    \        }\n    }\n    return res;\n}\n#line 7 \"aizu/illumination_string.test.cpp\"\
    \n\nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int N;\n    cin >> N;\n    vector<int> v(N);\n    for(int i=0; i<N; i++)\
    \ {\n        cin >> v[i];\n    }\n\n    string s;\n    for(int i=0; i<N; i++)\
    \ {\n        s.push_back('0' + (v[i] ^ (i%2)));\n    }\n\n    auto v2 = run_length_encoding(s);\n\
    \    v2.emplace_back('_', 0);\n    v2.emplace_back('_', 0);\n\n    int ans = 0;\n\
    \    for(int i=0; i+2<v2.size(); i++) {\n        ans = max(ans, v2[i].second +\
    \ v2[i+1].second + v2[i+2].second);\n    }\n    cout << ans << endl;\n    return\
    \ 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/challenges/sources/JOI/Final/0603\"\
    \n\n#include <iostream>\n#include <vector>\n#include <string>\n#include \"../other/run_length_encoding.cpp\"\
    \n\nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int N;\n    cin >> N;\n    vector<int> v(N);\n    for(int i=0; i<N; i++)\
    \ {\n        cin >> v[i];\n    }\n\n    string s;\n    for(int i=0; i<N; i++)\
    \ {\n        s.push_back('0' + (v[i] ^ (i%2)));\n    }\n\n    auto v2 = run_length_encoding(s);\n\
    \    v2.emplace_back('_', 0);\n    v2.emplace_back('_', 0);\n\n    int ans = 0;\n\
    \    for(int i=0; i+2<v2.size(); i++) {\n        ans = max(ans, v2[i].second +\
    \ v2[i+1].second + v2[i+2].second);\n    }\n    cout << ans << endl;\n    return\
    \ 0;\n}\n"
  dependsOn:
  - other/run_length_encoding.cpp
  isVerificationFile: true
  path: aizu/illumination_string.test.cpp
  requiredBy: []
  timestamp: '2021-07-20 00:04:24+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: aizu/illumination_string.test.cpp
layout: document
redirect_from:
- /verify/aizu/illumination_string.test.cpp
- /verify/aizu/illumination_string.test.cpp.html
title: aizu/illumination_string.test.cpp
---
