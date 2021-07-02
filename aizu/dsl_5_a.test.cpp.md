---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: other/Imos.cpp
    title: "1\u6B21\u5143imos\u6CD5"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/all/DSL_5_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/all/DSL_5_A
  bundledCode: "#line 1 \"aizu/dsl_5_a.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/all/DSL_5_A\"\
    \n\n#include <iostream>\n#include <algorithm>\n#line 1 \"other/Imos.cpp\"\n/**\n\
    \ * @brief 1\u6B21\u5143imos\u6CD5\n * @author hasegawa1\n */\n\n#include <vector>\n\
    #include <numeric>\n#include <cassert>\n\ntemplate<typename T>\nclass Imos {\n\
    private:\n    const int _n;\n    std::vector<T> _imos;\npublic:\n    explicit\
    \ Imos(int N): _n(N+1), _imos(_n) {};\n\n    // add x to [l, r)\n    void add(int\
    \ l, int r, T x) {\n        assert(0 <= l && l < r && r <= _n);\n        _imos[l]\
    \ += x;\n        _imos[r] -= x;\n    }\n\n    std::vector<T> build() {\n     \
    \   std::vector<T> res(_n);\n        std::inclusive_scan(_imos.begin(), _imos.end(),\
    \ res.begin());\n        res.pop_back();\n        return res;\n    }\n};\n#line\
    \ 6 \"aizu/dsl_5_a.test.cpp\"\n\nusing namespace std;\n\nint main(void) {\n  \
    \  cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\n    int N, T;\n\
    \    cin >> N >> T;\n\n    Imos<int> imos(T);\n\n    for(int i=0; i<N; i++) {\n\
    \        int l, r;\n        cin >> l >> r;\n        imos.add(l, r, 1);\n    }\n\
    \n    auto dp = imos.build();\n    cout << *max_element(dp.begin(), dp.end())\
    \ << endl;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/all/DSL_5_A\"\
    \n\n#include <iostream>\n#include <algorithm>\n#include \"../other/Imos.cpp\"\n\
    \nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int N, T;\n    cin >> N >> T;\n\n    Imos<int> imos(T);\n\n    for(int i=0;\
    \ i<N; i++) {\n        int l, r;\n        cin >> l >> r;\n        imos.add(l,\
    \ r, 1);\n    }\n\n    auto dp = imos.build();\n    cout << *max_element(dp.begin(),\
    \ dp.end()) << endl;\n}\n"
  dependsOn:
  - other/Imos.cpp
  isVerificationFile: true
  path: aizu/dsl_5_a.test.cpp
  requiredBy: []
  timestamp: '2021-07-02 23:09:47+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: aizu/dsl_5_a.test.cpp
layout: document
redirect_from:
- /verify/aizu/dsl_5_a.test.cpp
- /verify/aizu/dsl_5_a.test.cpp.html
title: aizu/dsl_5_a.test.cpp
---
