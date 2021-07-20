---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/festivals_in_joi_kingdom.test.cpp
    title: aizu/festivals_in_joi_kingdom.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u30C0\u30D6\u30EA\u30F3\u30B0"
    links:
    - https://atcoder.jp/contests/abc175/submissions/24407891
  bundledCode: "#line 1 \"other/Doubling.cpp\"\n/**\n * @brief \u30C0\u30D6\u30EA\u30F3\
    \u30B0\n * @author hasegawa1\n */\n\n#include <vector>\n#include <algorithm>\n\
    #include <limits>\n#include <cassert>\n#include <cstdint>\n\ntemplate<typename\
    \ T>\nclass Doubling {\nprivate:\n    const int _n;\n    const int _log = 63;\n\
    \    std::vector<std::vector<int>> _pos;\n    std::vector<std::vector<T>> _sum,\
    \ _min, _max;\n    std::vector<std::vector<T>> _min_of_sum, _max_of_sum;\n\n \
    \   void set_pos() {\n        for(int k=0; k+1<_log; k++) {\n            for(int\
    \ v=0; v<_n; v++) {\n                _pos[k+1][v] = _pos[k][_pos[k][v]];\n   \
    \         }\n        }\n    }\n\n    void set_sum() {\n        for(int k=0; k+1<_log;\
    \ k++) {\n            for(int v=0; v<_n; v++) {\n                _sum[k+1][v]\
    \ = _sum[k][v] + _sum[k][_pos[k][v]];\n            }\n        }\n    }\n\n   \
    \ void set_minmax() {\n        for(int k=0; k+1<_log; k++) {\n            for(int\
    \ v=0; v<_n; v++) {\n                _min[k+1][v] = std::min(_min[k][v], _min[k][_pos[k][v]]);\n\
    \                _max[k+1][v] = std::max(_max[k][v], _max[k][_pos[k][v]]);\n \
    \               _min_of_sum[k+1][v] = std::min(_min_of_sum[k][v], _sum[k][v] +\
    \ _min_of_sum[k][_pos[k][v]]);\n                _max_of_sum[k+1][v] = std::max(_max_of_sum[k][v],\
    \ _sum[k][v] + _max_of_sum[k][_pos[k][v]]);\n            }\n        }\n    }\n\
    \npublic:\n    explicit Doubling(const std::vector<int> & next): _n(next.size()),\
    \ _pos(_log, std::vector<int>(_n)) {\n        _pos[0] = next;\n        set_pos();\n\
    \    }\n    explicit Doubling(const std::vector<int> & next, const std::vector<T>\
    \ & cost): _n(next.size()), _pos(_log, std::vector<int>(_n)), _sum(_log, std::vector<T>(_n)),\
    \ _min(_log, std::vector<T>(_n)), _max(_log, std::vector<T>(_n)), _min_of_sum(_log,\
    \ std::vector<T>(_n)), _max_of_sum(_log, std::vector<T>(_n)) {\n        _pos[0]\
    \ = next;\n        _sum[0] = cost;\n        _min[0] = cost;\n        _max[0] =\
    \ cost;\n        _min_of_sum[0] = cost;\n        _max_of_sum[0] = cost;\n    \
    \    set_pos();\n        set_sum();\n        set_minmax();\n    }\n\n    int pos(int\
    \ v, int64_t k) const {\n        assert(0 <= v && v < _n);\n        assert(k >=\
    \ 0);\n        for(int i=0; i<_log; i++) {\n            if(k>>i & 1) v = _pos[i][v];\n\
    \        }\n        return v;\n    }\n\n    T sum(int v, int64_t k) const {\n\
    \        assert(0 <= v && v < _n);\n        assert(k >= 0);\n        T res = 0;\n\
    \        for(int i=0; i<_log; i++) {\n            if(k>>i & 1) {\n           \
    \     res += _sum[i][v];\n                v = _pos[i][v];\n            }\n   \
    \     }\n        return res;\n    }\n\n    T min(int v, int64_t k) const {\n \
    \       assert(0 <= v && v < _n);\n        assert(k >= 0);\n        T res = std::numeric_limits<T>::max();\n\
    \        for(int i=0; i<_log; i++) {\n            if(k>>i & 1) {\n           \
    \     res = std::min(res, _min[i][v]);\n                v = _pos[i][v];\n    \
    \        }\n        }\n        return res;\n    }\n\n    T max(int v, int64_t\
    \ k) const {\n        assert(0 <= v && v < _n);\n        assert(k >= 0);\n   \
    \     T res = std::numeric_limits<T>::min();\n        for(int i=0; i<_log; i++)\
    \ {\n            if(k>>i & 1) {\n                res = std::max(res, _max[i][v]);\n\
    \                v = _pos[i][v];\n            }\n        }\n        return res;\n\
    \    }\n\n    T min_of_sum(int v, int64_t k) const {\n        assert(0 <= v &&\
    \ v < _n);\n        assert(k >= 0);\n        T sum = 0;\n        T res = std::numeric_limits<T>::max();\n\
    \        for(int i=0; i<_log; i++) {\n            if(k>>i & 1) {\n           \
    \     res = std::min(res, sum + _min_of_sum[i][v]);\n                sum += _sum[i][v];\n\
    \                v = _pos[i][v];\n            }\n        }\n        return res;\n\
    \    }\n\n    // verify: https://atcoder.jp/contests/abc175/submissions/24407891\n\
    \    T max_of_sum(int v, int64_t k) const {\n        assert(0 <= v && v < _n);\n\
    \        assert(k >= 0);\n        T sum = 0;\n        T res = std::numeric_limits<T>::min();\n\
    \        for(int i=0; i<_log; i++) {\n            if(k>>i & 1) {\n           \
    \     res = std::max(res, sum + _max_of_sum[i][v]);\n                sum += _sum[i][v];\n\
    \                v = _pos[i][v];\n            }\n        }\n        return res;\n\
    \    }\n};\n"
  code: "/**\n * @brief \u30C0\u30D6\u30EA\u30F3\u30B0\n * @author hasegawa1\n */\n\
    \n#include <vector>\n#include <algorithm>\n#include <limits>\n#include <cassert>\n\
    #include <cstdint>\n\ntemplate<typename T>\nclass Doubling {\nprivate:\n    const\
    \ int _n;\n    const int _log = 63;\n    std::vector<std::vector<int>> _pos;\n\
    \    std::vector<std::vector<T>> _sum, _min, _max;\n    std::vector<std::vector<T>>\
    \ _min_of_sum, _max_of_sum;\n\n    void set_pos() {\n        for(int k=0; k+1<_log;\
    \ k++) {\n            for(int v=0; v<_n; v++) {\n                _pos[k+1][v]\
    \ = _pos[k][_pos[k][v]];\n            }\n        }\n    }\n\n    void set_sum()\
    \ {\n        for(int k=0; k+1<_log; k++) {\n            for(int v=0; v<_n; v++)\
    \ {\n                _sum[k+1][v] = _sum[k][v] + _sum[k][_pos[k][v]];\n      \
    \      }\n        }\n    }\n\n    void set_minmax() {\n        for(int k=0; k+1<_log;\
    \ k++) {\n            for(int v=0; v<_n; v++) {\n                _min[k+1][v]\
    \ = std::min(_min[k][v], _min[k][_pos[k][v]]);\n                _max[k+1][v] =\
    \ std::max(_max[k][v], _max[k][_pos[k][v]]);\n                _min_of_sum[k+1][v]\
    \ = std::min(_min_of_sum[k][v], _sum[k][v] + _min_of_sum[k][_pos[k][v]]);\n  \
    \              _max_of_sum[k+1][v] = std::max(_max_of_sum[k][v], _sum[k][v] +\
    \ _max_of_sum[k][_pos[k][v]]);\n            }\n        }\n    }\n\npublic:\n \
    \   explicit Doubling(const std::vector<int> & next): _n(next.size()), _pos(_log,\
    \ std::vector<int>(_n)) {\n        _pos[0] = next;\n        set_pos();\n    }\n\
    \    explicit Doubling(const std::vector<int> & next, const std::vector<T> & cost):\
    \ _n(next.size()), _pos(_log, std::vector<int>(_n)), _sum(_log, std::vector<T>(_n)),\
    \ _min(_log, std::vector<T>(_n)), _max(_log, std::vector<T>(_n)), _min_of_sum(_log,\
    \ std::vector<T>(_n)), _max_of_sum(_log, std::vector<T>(_n)) {\n        _pos[0]\
    \ = next;\n        _sum[0] = cost;\n        _min[0] = cost;\n        _max[0] =\
    \ cost;\n        _min_of_sum[0] = cost;\n        _max_of_sum[0] = cost;\n    \
    \    set_pos();\n        set_sum();\n        set_minmax();\n    }\n\n    int pos(int\
    \ v, int64_t k) const {\n        assert(0 <= v && v < _n);\n        assert(k >=\
    \ 0);\n        for(int i=0; i<_log; i++) {\n            if(k>>i & 1) v = _pos[i][v];\n\
    \        }\n        return v;\n    }\n\n    T sum(int v, int64_t k) const {\n\
    \        assert(0 <= v && v < _n);\n        assert(k >= 0);\n        T res = 0;\n\
    \        for(int i=0; i<_log; i++) {\n            if(k>>i & 1) {\n           \
    \     res += _sum[i][v];\n                v = _pos[i][v];\n            }\n   \
    \     }\n        return res;\n    }\n\n    T min(int v, int64_t k) const {\n \
    \       assert(0 <= v && v < _n);\n        assert(k >= 0);\n        T res = std::numeric_limits<T>::max();\n\
    \        for(int i=0; i<_log; i++) {\n            if(k>>i & 1) {\n           \
    \     res = std::min(res, _min[i][v]);\n                v = _pos[i][v];\n    \
    \        }\n        }\n        return res;\n    }\n\n    T max(int v, int64_t\
    \ k) const {\n        assert(0 <= v && v < _n);\n        assert(k >= 0);\n   \
    \     T res = std::numeric_limits<T>::min();\n        for(int i=0; i<_log; i++)\
    \ {\n            if(k>>i & 1) {\n                res = std::max(res, _max[i][v]);\n\
    \                v = _pos[i][v];\n            }\n        }\n        return res;\n\
    \    }\n\n    T min_of_sum(int v, int64_t k) const {\n        assert(0 <= v &&\
    \ v < _n);\n        assert(k >= 0);\n        T sum = 0;\n        T res = std::numeric_limits<T>::max();\n\
    \        for(int i=0; i<_log; i++) {\n            if(k>>i & 1) {\n           \
    \     res = std::min(res, sum + _min_of_sum[i][v]);\n                sum += _sum[i][v];\n\
    \                v = _pos[i][v];\n            }\n        }\n        return res;\n\
    \    }\n\n    // verify: https://atcoder.jp/contests/abc175/submissions/24407891\n\
    \    T max_of_sum(int v, int64_t k) const {\n        assert(0 <= v && v < _n);\n\
    \        assert(k >= 0);\n        T sum = 0;\n        T res = std::numeric_limits<T>::min();\n\
    \        for(int i=0; i<_log; i++) {\n            if(k>>i & 1) {\n           \
    \     res = std::max(res, sum + _max_of_sum[i][v]);\n                sum += _sum[i][v];\n\
    \                v = _pos[i][v];\n            }\n        }\n        return res;\n\
    \    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: other/Doubling.cpp
  requiredBy: []
  timestamp: '2021-07-20 19:06:08+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/festivals_in_joi_kingdom.test.cpp
documentation_of: other/Doubling.cpp
layout: document
redirect_from:
- /library/other/Doubling.cpp
- /library/other/Doubling.cpp.html
title: "\u30C0\u30D6\u30EA\u30F3\u30B0"
---
