---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: other/Imos2.cpp
    title: "2\u6B21\u5143imos\u6CD5"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/all/DSL_5_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/all/DSL_5_B
  bundledCode: "#line 1 \"aizu/dsl_5_b.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/all/DSL_5_B\"\
    \n\n#include <iostream>\n#include <algorithm>\n#line 1 \"other/Imos2.cpp\"\n/**\n\
    \ * @brief 2\u6B21\u5143imos\u6CD5\n * @author hasegawa1\n */\n\n#include <vector>\n\
    #include <numeric>\n#include <cassert>\n\ntemplate<typename T>\nclass Imos2 {\n\
    private:\n    const int _h, _w;\n    std::vector<std::vector<T>> _imos2;\npublic:\n\
    \    explicit Imos2(int H, int W): _h(H+1), _w(W+1), _imos2(_h, std::vector<T>(_w))\
    \ {};\n\n    // add x to [si, gi) x [sj, gj)\n    void add(int si, int sj, int\
    \ gi, int gj, T x) {\n        assert(0 <= si && si < gi && gi <= _h);\n      \
    \  assert(0 <= sj && sj < gj && gj <= _h);\n        _imos2[si][sj] += x;\n   \
    \     _imos2[si][gj] -= x;\n        _imos2[gi][sj] -= x;\n        _imos2[gi][gj]\
    \ += x;\n    }\n\n    std::vector<std::vector<T>> build() {\n        std::vector<std::vector<T>>\
    \ res = _imos2;\n        for(int i=0; i<_h; i++) {\n            for(int j=0; j+1<_w;\
    \ j++) {\n                res[i][j+1] += res[i][j];\n            }\n        }\n\
    \        for(int i=0; i+1<_h; i++) {\n            for(int j=0; j<_w; j++) {\n\
    \                res[i+1][j] += res[i][j];\n            }\n        }\n       \
    \ for(int i=0; i<_h; i++) {\n            res[i].pop_back();\n        }\n     \
    \   res.pop_back();\n        return res;\n    }\n};\n#line 6 \"aizu/dsl_5_b.test.cpp\"\
    \n\nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int N;\n    cin >> N;\n\n    Imos2<int> imos(1000, 1000);\n    for(int i=0;\
    \ i<N; i++) {\n        int x1, y1, x2, y2;\n        cin >> x1 >> y1 >> x2 >> y2;\n\
    \        imos.add(x1, y1, x2, y2, 1);\n    }\n\n    auto dp = imos.build();\n\
    \    int ans = 0;\n    for(int i=0; i<1000; i++) {\n        for(int j=0; j<1000;\
    \ j++) {\n            ans = max(ans, dp[i][j]);\n        }\n    }\n\n    cout\
    \ << ans << endl;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/all/DSL_5_B\"\
    \n\n#include <iostream>\n#include <algorithm>\n#include \"../other/Imos2.cpp\"\
    \n\nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int N;\n    cin >> N;\n\n    Imos2<int> imos(1000, 1000);\n    for(int i=0;\
    \ i<N; i++) {\n        int x1, y1, x2, y2;\n        cin >> x1 >> y1 >> x2 >> y2;\n\
    \        imos.add(x1, y1, x2, y2, 1);\n    }\n\n    auto dp = imos.build();\n\
    \    int ans = 0;\n    for(int i=0; i<1000; i++) {\n        for(int j=0; j<1000;\
    \ j++) {\n            ans = max(ans, dp[i][j]);\n        }\n    }\n\n    cout\
    \ << ans << endl;\n}\n"
  dependsOn:
  - other/Imos2.cpp
  isVerificationFile: true
  path: aizu/dsl_5_b.test.cpp
  requiredBy: []
  timestamp: '2021-07-02 23:27:50+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: aizu/dsl_5_b.test.cpp
layout: document
redirect_from:
- /verify/aizu/dsl_5_b.test.cpp
- /verify/aizu/dsl_5_b.test.cpp.html
title: aizu/dsl_5_b.test.cpp
---
