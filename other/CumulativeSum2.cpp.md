---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/planetary_exploration.test.cpp
    title: aizu/planetary_exploration.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "2\u6B21\u5143\u7D2F\u7A4D\u548C"
    links: []
  bundledCode: "#line 1 \"other/CumulativeSum2.cpp\"\n/**\n * @brief 2\u6B21\u5143\
    \u7D2F\u7A4D\u548C\n * @author hasegawa1\n */\n\n#include <vector>\n#include <cassert>\n\
    \ntemplate<typename T>\nclass CumulativeSum2 {\nprivate:\n    const int _h, _w;\n\
    \    std::vector<std::vector<T>> _cumulative_sum2;\npublic:\n    explicit CumulativeSum2(const\
    \ std::vector<std::vector<T>> & grid): _h(grid.size()), _w(grid[0].size()), _cumulative_sum2(_h+1,\
    \ std::vector<T>(_w+1)) {\n        for(int i=0; i<_h; i++) {\n            for(int\
    \ j=0; j<_w; j++) {\n                _cumulative_sum2[i+1][j+1] = _cumulative_sum2[i][j+1]\
    \ + _cumulative_sum2[i+1][j] - _cumulative_sum2[i][j] + grid[i][j];\n        \
    \    }\n        }\n    }\n\n    // [si, gi) x [sj, gj)\n    T operator()(int si,\
    \ int sj, int gi, int gj) const {\n        assert(0 <= si && si < gi && gi <=\
    \ _h);\n        assert(0 <= sj && sj < gj && gj <= _w);\n        return _cumulative_sum2[gi][gj]\
    \ - _cumulative_sum2[si][gj] - _cumulative_sum2[gi][sj] + _cumulative_sum2[si][sj];\n\
    \    }\n};\n"
  code: "/**\n * @brief 2\u6B21\u5143\u7D2F\u7A4D\u548C\n * @author hasegawa1\n */\n\
    \n#include <vector>\n#include <cassert>\n\ntemplate<typename T>\nclass CumulativeSum2\
    \ {\nprivate:\n    const int _h, _w;\n    std::vector<std::vector<T>> _cumulative_sum2;\n\
    public:\n    explicit CumulativeSum2(const std::vector<std::vector<T>> & grid):\
    \ _h(grid.size()), _w(grid[0].size()), _cumulative_sum2(_h+1, std::vector<T>(_w+1))\
    \ {\n        for(int i=0; i<_h; i++) {\n            for(int j=0; j<_w; j++) {\n\
    \                _cumulative_sum2[i+1][j+1] = _cumulative_sum2[i][j+1] + _cumulative_sum2[i+1][j]\
    \ - _cumulative_sum2[i][j] + grid[i][j];\n            }\n        }\n    }\n\n\
    \    // [si, gi) x [sj, gj)\n    T operator()(int si, int sj, int gi, int gj)\
    \ const {\n        assert(0 <= si && si < gi && gi <= _h);\n        assert(0 <=\
    \ sj && sj < gj && gj <= _w);\n        return _cumulative_sum2[gi][gj] - _cumulative_sum2[si][gj]\
    \ - _cumulative_sum2[gi][sj] + _cumulative_sum2[si][sj];\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: other/CumulativeSum2.cpp
  requiredBy: []
  timestamp: '2021-06-30 00:48:20+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/planetary_exploration.test.cpp
documentation_of: other/CumulativeSum2.cpp
layout: document
redirect_from:
- /library/other/CumulativeSum2.cpp
- /library/other/CumulativeSum2.cpp.html
title: "2\u6B21\u5143\u7D2F\u7A4D\u548C"
---
