---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: other/CumulativeSum2.cpp
    title: "2\u6B21\u5143\u7D2F\u7A4D\u548C"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/challenges/sources/JOI/Final/0560
    links:
    - https://onlinejudge.u-aizu.ac.jp/challenges/sources/JOI/Final/0560
  bundledCode: "#line 1 \"test/aizu/planetary_exploration.test.cpp\"\n#define PROBLEM\
    \ \"https://onlinejudge.u-aizu.ac.jp/challenges/sources/JOI/Final/0560\"\n\n#include\
    \ <iostream>\n#include <vector>\n#line 1 \"other/CumulativeSum2.cpp\"\n/**\n *\
    \ @brief 2\u6B21\u5143\u7D2F\u7A4D\u548C\n * @author hasegawa1\n */\n\n#line 7\
    \ \"other/CumulativeSum2.cpp\"\n#include <cassert>\n\ntemplate<typename T>\nclass\
    \ CumulativeSum2 {\nprivate:\n    const int _h, _w;\n    std::vector<std::vector<T>>\
    \ _cumulative_sum2;\npublic:\n    explicit CumulativeSum2(const std::vector<std::vector<T>>\
    \ & grid): _h(grid.size()), _w(grid[0].size()), _cumulative_sum2(_h+1, std::vector<T>(_w+1))\
    \ {\n        for(int i=0; i<_h; i++) {\n            for(int j=0; j<_w; j++) {\n\
    \                _cumulative_sum2[i+1][j+1] = _cumulative_sum2[i][j+1] + _cumulative_sum2[i+1][j]\
    \ - _cumulative_sum2[i][j] + grid[i][j];\n            }\n        }\n    }\n\n\
    \    // [si, sj) x [gi, gj)\n    T operator()(int si, int sj, int gi, int gj)\
    \ {\n        assert(0 <= si && si < gi && gi <= _h);\n        assert(0 <= sj &&\
    \ sj < gj && gj <= _w);\n        return _cumulative_sum2[gi][gj] - _cumulative_sum2[si][gj]\
    \ - _cumulative_sum2[gi][sj] + _cumulative_sum2[si][sj];\n    }\n};\n#line 6 \"\
    test/aizu/planetary_exploration.test.cpp\"\n\nusing namespace std;\n\nint main(void)\
    \ {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\n    int M,\
    \ N, K;\n    cin >> M >> N >> K;\n\n    vector<vector<int>> J(M, vector<int>(N));\n\
    \    vector<vector<int>> O(M, vector<int>(N));\n    vector<vector<int>> I(M, vector<int>(N));\n\
    \n    for(int i=0; i<M; i++) {\n        for(int j=0; j<N; j++) {\n           \
    \ char c;\n            cin >> c;\n            if(c == 'J') J[i][j] = 1;\n    \
    \        if(c == 'O') O[i][j] = 1;\n            if(c == 'I') I[i][j] = 1;\n  \
    \      }\n    }\n\n    CumulativeSum2 Jsum(J), Osum(O), Isum(I);\n\n    while(K--)\
    \ {\n        int a, b, c, d;\n        cin >> a >> b >> c >> d;\n        cout <<\
    \ Jsum(a-1, b-1, c, d) << ' ';\n        cout << Osum(a-1, b-1, c, d) << ' ';\n\
    \        cout << Isum(a-1, b-1, c, d) << '\\n';\n    }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/challenges/sources/JOI/Final/0560\"\
    \n\n#include <iostream>\n#include <vector>\n#include \"../../other/CumulativeSum2.cpp\"\
    \n\nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int M, N, K;\n    cin >> M >> N >> K;\n\n    vector<vector<int>> J(M, vector<int>(N));\n\
    \    vector<vector<int>> O(M, vector<int>(N));\n    vector<vector<int>> I(M, vector<int>(N));\n\
    \n    for(int i=0; i<M; i++) {\n        for(int j=0; j<N; j++) {\n           \
    \ char c;\n            cin >> c;\n            if(c == 'J') J[i][j] = 1;\n    \
    \        if(c == 'O') O[i][j] = 1;\n            if(c == 'I') I[i][j] = 1;\n  \
    \      }\n    }\n\n    CumulativeSum2 Jsum(J), Osum(O), Isum(I);\n\n    while(K--)\
    \ {\n        int a, b, c, d;\n        cin >> a >> b >> c >> d;\n        cout <<\
    \ Jsum(a-1, b-1, c, d) << ' ';\n        cout << Osum(a-1, b-1, c, d) << ' ';\n\
    \        cout << Isum(a-1, b-1, c, d) << '\\n';\n    }\n}\n"
  dependsOn:
  - other/CumulativeSum2.cpp
  isVerificationFile: true
  path: test/aizu/planetary_exploration.test.cpp
  requiredBy: []
  timestamp: '2021-06-28 17:26:15+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aizu/planetary_exploration.test.cpp
layout: document
redirect_from:
- /verify/test/aizu/planetary_exploration.test.cpp
- /verify/test/aizu/planetary_exploration.test.cpp.html
title: test/aizu/planetary_exploration.test.cpp
---
