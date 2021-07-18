---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "\u30C0\u30D6\u30EA\u30F3\u30B0"
    links:
    - https://atcoder.jp/contests/typical90/submissions/24346778
  bundledCode: "#line 1 \"other/Doubling.cpp\"\n/**\n * @brief \u30C0\u30D6\u30EA\u30F3\
    \u30B0\n * @author hasegawa1\n */\n\n// verify: https://atcoder.jp/contests/typical90/submissions/24346778\n\
    \n#include <vector>\n#include <cassert>\n#include <cstdint>\n\nclass Doubling\
    \ {\nprivate:\n    const int _n;\n    const int _log = 63;\n    std::vector<std::vector<int>>\
    \ _pos;\n\n    void set_pos() {\n        for(int k=0; k+1<_log; k++) {\n     \
    \       for(int v=0; v<_n; v++) {\n                _pos[k+1][v] = _pos[k][_pos[k][v]];\n\
    \            }\n        }\n    }\npublic:\n    Doubling(const std::vector<int>\
    \ next): _n(next.size()), _pos(_log, std::vector<int>(_n)) {\n        _pos[0]\
    \ = next;\n        set_pos();\n    }\n\n    int pos(int v, int64_t k) const {\n\
    \        assert(0 <= v && v < _n);\n        assert(k >= 0);\n        for(int i=0;\
    \ i<_log; i++) {\n            if(k>>i & 1) v = _pos[i][v];\n        }\n      \
    \  return v;\n    }\n};\n"
  code: "/**\n * @brief \u30C0\u30D6\u30EA\u30F3\u30B0\n * @author hasegawa1\n */\n\
    \n// verify: https://atcoder.jp/contests/typical90/submissions/24346778\n\n#include\
    \ <vector>\n#include <cassert>\n#include <cstdint>\n\nclass Doubling {\nprivate:\n\
    \    const int _n;\n    const int _log = 63;\n    std::vector<std::vector<int>>\
    \ _pos;\n\n    void set_pos() {\n        for(int k=0; k+1<_log; k++) {\n     \
    \       for(int v=0; v<_n; v++) {\n                _pos[k+1][v] = _pos[k][_pos[k][v]];\n\
    \            }\n        }\n    }\npublic:\n    Doubling(const std::vector<int>\
    \ next): _n(next.size()), _pos(_log, std::vector<int>(_n)) {\n        _pos[0]\
    \ = next;\n        set_pos();\n    }\n\n    int pos(int v, int64_t k) const {\n\
    \        assert(0 <= v && v < _n);\n        assert(k >= 0);\n        for(int i=0;\
    \ i<_log; i++) {\n            if(k>>i & 1) v = _pos[i][v];\n        }\n      \
    \  return v;\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: other/Doubling.cpp
  requiredBy: []
  timestamp: '2021-07-18 16:20:25+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: other/Doubling.cpp
layout: document
redirect_from:
- /library/other/Doubling.cpp
- /library/other/Doubling.cpp.html
title: "\u30C0\u30D6\u30EA\u30F3\u30B0"
---
