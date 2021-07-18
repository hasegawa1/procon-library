---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "\u4E8C\u5024\u884C\u5217"
    links:
    - https://atcoder.jp/contests/typical90/submissions/24351166
  bundledCode: "#line 1 \"matrix/BinaryMatrix.cpp\"\n/**\n * @brief \u4E8C\u5024\u884C\
    \u5217\n * @author hasegawa1\n */\n\n#include <vector>\n#include <bitset>\n#include\
    \ <cassert>\n\nclass BinaryMatrix {\nprivate:\n    const int _max_size = 1000;\n\
    \    const int _n, _m;\n    std::vector<std::bitset<1000>> _mat;\npublic:\n  \
    \  BinaryMatrix(int n, int m): _n(n), _m(m), _mat(1000) {};\n\n    void set(int\
    \ i, int j) {\n        assert(0 <= i && i < _n);\n        assert(0 <= j && j <\
    \ _m);\n        _mat[i].set(j);\n    }\n\n    void reset(int i, int j) {\n   \
    \     assert(0 <= i && i < _n);\n        assert(0 <= j && j < _m);\n        _mat[i].reset(j);\n\
    \    }\n\n    // verify: https://atcoder.jp/contests/typical90/submissions/24351166\n\
    \    int rank(bool is_extended) {\n        std::vector<std::bitset<1000>> A =\
    \ _mat;\n        int rank = 0;\n        for(int j=0; j<_m-is_extended; j++) {\n\
    \            int pivot = -1;\n            for(int i=rank; i<_n; i++) {\n     \
    \           if(A[i][j]) {\n                    pivot = i;\n                  \
    \  break;\n                }\n            }\n            if(pivot == -1) continue;\n\
    \            std::swap(A[pivot], A[rank]);\n            for(int i=0; i<_n; i++)\
    \ {\n                if(i != rank && A[i][j]) A[i] ^= A[rank];\n            }\n\
    \            ++rank;\n        }\n        if(is_extended) {\n            for(int\
    \ i=rank; i<_n; i++) {\n                if(A[i][_m-1]) return -1;\n          \
    \  }\n        }\n        return rank;\n    }\n};\n"
  code: "/**\n * @brief \u4E8C\u5024\u884C\u5217\n * @author hasegawa1\n */\n\n#include\
    \ <vector>\n#include <bitset>\n#include <cassert>\n\nclass BinaryMatrix {\nprivate:\n\
    \    const int _max_size = 1000;\n    const int _n, _m;\n    std::vector<std::bitset<1000>>\
    \ _mat;\npublic:\n    BinaryMatrix(int n, int m): _n(n), _m(m), _mat(1000) {};\n\
    \n    void set(int i, int j) {\n        assert(0 <= i && i < _n);\n        assert(0\
    \ <= j && j < _m);\n        _mat[i].set(j);\n    }\n\n    void reset(int i, int\
    \ j) {\n        assert(0 <= i && i < _n);\n        assert(0 <= j && j < _m);\n\
    \        _mat[i].reset(j);\n    }\n\n    // verify: https://atcoder.jp/contests/typical90/submissions/24351166\n\
    \    int rank(bool is_extended) {\n        std::vector<std::bitset<1000>> A =\
    \ _mat;\n        int rank = 0;\n        for(int j=0; j<_m-is_extended; j++) {\n\
    \            int pivot = -1;\n            for(int i=rank; i<_n; i++) {\n     \
    \           if(A[i][j]) {\n                    pivot = i;\n                  \
    \  break;\n                }\n            }\n            if(pivot == -1) continue;\n\
    \            std::swap(A[pivot], A[rank]);\n            for(int i=0; i<_n; i++)\
    \ {\n                if(i != rank && A[i][j]) A[i] ^= A[rank];\n            }\n\
    \            ++rank;\n        }\n        if(is_extended) {\n            for(int\
    \ i=rank; i<_n; i++) {\n                if(A[i][_m-1]) return -1;\n          \
    \  }\n        }\n        return rank;\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: matrix/BinaryMatrix.cpp
  requiredBy: []
  timestamp: '2021-07-18 19:16:46+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: matrix/BinaryMatrix.cpp
layout: document
redirect_from:
- /library/matrix/BinaryMatrix.cpp
- /library/matrix/BinaryMatrix.cpp.html
title: "\u4E8C\u5024\u884C\u5217"
---
