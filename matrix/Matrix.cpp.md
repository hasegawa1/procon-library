---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: yosupo/matrix_determinant.test.cpp
    title: yosupo/matrix_determinant.test.cpp
  - icon: ':heavy_check_mark:'
    path: yosupo/matrix_product.test.cpp
    title: yosupo/matrix_product.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u884C\u5217\uFF08Mod p\uFF09"
    links: []
  bundledCode: "#line 1 \"matrix/Matrix.cpp\"\n/**\n * @brief \u884C\u5217\uFF08Mod\
    \ p\uFF09\n * @author hasegawa1\n */\n\n#include <vector>\n#include <iostream>\n\
    #include <cassert>\n\ntemplate<typename Tmod>\nclass Matrix {\nprivate:\n    int\
    \ _n, _m;\n    std::vector<std::vector<Tmod>> _mat;\npublic:\n    explicit Matrix(const\
    \ int n): _n(n), _m(n), _mat(_n, std::vector<Tmod>(_n)) {};\n    explicit Matrix(const\
    \ int n, const int m): _n(n), _m(m), _mat(_n, std::vector<Tmod>(_m)) {};\n   \
    \ explicit Matrix(const std::vector<std::vector<int>> & v): _n(v.size()), _m(v[0].size()),\
    \ _mat(_n, std::vector<Tmod>(_m)) {\n        for(int i=0; i<_n; i++) {\n     \
    \       for(int j=0; j<_m; j++) {\n                _mat[i][j] = v[i][j];\n   \
    \         }\n        }\n    };\n\n    int row() const {\n        return _n;\n\
    \    }\n\n    int height() const {\n        return row();\n    }\n\n    int column()\
    \ const {\n        return _m;\n    }\n\n    int width() const {\n        return\
    \ column();\n    }\n\n    const std::vector<Tmod>& operator[](int i) const {\n\
    \        return _mat[i];\n    }\n\n    std::vector<Tmod>& operator[](int i) {\n\
    \        return _mat[i];\n    }\n\n    Matrix& operator+=(const Matrix& B) {\n\
    \        assert(_n == B.row() && _m == B.column());\n        for(int i=0; i<_n;\
    \ i++) {\n            for(int j=0; j<_m; j++) {\n                (*this)[i][j]\
    \ += B[i][j];\n            }\n        }\n        return (*this);\n    }\n\n  \
    \  Matrix& operator-=(const Matrix& B) {\n        assert(_n == B.row() && _m ==\
    \ B.column());\n        for(int i=0; i<_n; i++) {\n            for(int j=0; j<_m;\
    \ j++) {\n                (*this)[i][j] -= B[i][j];\n            }\n        }\n\
    \        return (*this);\n    }\n\n    Matrix& operator*=(const Matrix& B) {\n\
    \        assert(_m == B.row());\n        int n2 = _n;\n        int m2 = B.column();\n\
    \        std::vector<std::vector<Tmod>> C(n2, std::vector<Tmod>(m2));\n      \
    \  for(int i=0; i<_n; i++) {\n                for(int j=0; j<m2; j++) {\n    \
    \        for(int k=0; k<_m; k++) {\n                    C[i][j] += (*this)[i][k]\
    \ * B[k][j];\n            }\n                }\n        }\n        _n = n2;\n\
    \        _m = m2;\n        _mat.swap(C);\n        return (*this);\n    }\n\n \
    \   Matrix& operator^=(int64_t k) {\n        assert(_n == _m && k >= 0);\n   \
    \     Matrix R(_n);\n        for(int i=0; i<_n; i++) {\n            R[i][i] =\
    \ 1;\n        }\n        while(k) {\n            if(k & 1) R *= (*this);\n   \
    \         (*this) *= (*this);\n            k >>= 1;\n        }\n        for(int\
    \ i=0; i<_n; i++) {\n            swap(_mat[i], R[i]);\n        }\n        return\
    \ (*this);\n    }\n\n    Matrix operator+(const Matrix& B) {\n        (*this)\
    \ += B;\n        return (*this);\n    }\n\n    Matrix operator-(const Matrix&\
    \ B) {\n        (*this) -= B;\n        return (*this);\n    }\n\n    Matrix operator*(const\
    \ Matrix& B) {\n        (*this) *= B;\n        return (*this);\n    }\n\n    Matrix\
    \ operator^(const int64_t k) {\n        (*this) ^= k;\n        return (*this);\n\
    \    }\n\n    friend std::istream& operator>>(std::istream & is, Matrix & mat)\
    \ {\n        const int n = mat.row(), m = mat.column();\n        for(int i=0;\
    \ i<n; i++) {\n            for(int j=0; j<m; j++) {\n                int tmp;\n\
    \                is >> tmp;\n                mat[i][j] = tmp;\n            }\n\
    \        }\n        return is;\n    }\n\n    friend std::ostream& operator<<(std::ostream\
    \ & os, Matrix & mat) {\n        const int n = mat.row(), m = mat.column();\n\
    \        for(int i=0; i<n; i++) {\n            for(int j=0; j<m; j++) {\n    \
    \            os << mat[i][j].val() << (j == m-1 ? '\\n' : ' ');\n            }\n\
    \        }\n        return os;\n    }\n\n    Tmod determinant() const {\n    \
    \    assert(_n == _m);\n        Matrix tmp(*this);\n        Tmod res = 1;\n  \
    \      for(int i=0; i<_n; i++) {\n            int pivot = -1;\n            for(int\
    \ j=i; j<_n; j++) {\n                if(tmp[j][i] != 0) {\n                  \
    \  pivot = j;\n                    break;\n                }\n            }\n\
    \            if(pivot == -1) {\n                return 0;\n            } else\
    \ if(pivot != i) {\n                res *= -1;\n                swap(tmp[i], tmp[pivot]);\n\
    \            }\n            res *= tmp[i][i];\n            Tmod vv = tmp[i][i];\n\
    \            for(int j=0; j<_n; j++) {\n                tmp[i][j] /= vv;\n   \
    \         }\n            for(int j=i+1; j<_n; j++) {\n                Tmod a =\
    \ tmp[j][i];\n                for(int k=0; k<_n; k++) {\n                    tmp[j][k]\
    \ -= tmp[i][k] * a;\n                }\n            }\n        }\n        return\
    \ res;\n    }\n};\n"
  code: "/**\n * @brief \u884C\u5217\uFF08Mod p\uFF09\n * @author hasegawa1\n */\n\
    \n#include <vector>\n#include <iostream>\n#include <cassert>\n\ntemplate<typename\
    \ Tmod>\nclass Matrix {\nprivate:\n    int _n, _m;\n    std::vector<std::vector<Tmod>>\
    \ _mat;\npublic:\n    explicit Matrix(const int n): _n(n), _m(n), _mat(_n, std::vector<Tmod>(_n))\
    \ {};\n    explicit Matrix(const int n, const int m): _n(n), _m(m), _mat(_n, std::vector<Tmod>(_m))\
    \ {};\n    explicit Matrix(const std::vector<std::vector<int>> & v): _n(v.size()),\
    \ _m(v[0].size()), _mat(_n, std::vector<Tmod>(_m)) {\n        for(int i=0; i<_n;\
    \ i++) {\n            for(int j=0; j<_m; j++) {\n                _mat[i][j] =\
    \ v[i][j];\n            }\n        }\n    };\n\n    int row() const {\n      \
    \  return _n;\n    }\n\n    int height() const {\n        return row();\n    }\n\
    \n    int column() const {\n        return _m;\n    }\n\n    int width() const\
    \ {\n        return column();\n    }\n\n    const std::vector<Tmod>& operator[](int\
    \ i) const {\n        return _mat[i];\n    }\n\n    std::vector<Tmod>& operator[](int\
    \ i) {\n        return _mat[i];\n    }\n\n    Matrix& operator+=(const Matrix&\
    \ B) {\n        assert(_n == B.row() && _m == B.column());\n        for(int i=0;\
    \ i<_n; i++) {\n            for(int j=0; j<_m; j++) {\n                (*this)[i][j]\
    \ += B[i][j];\n            }\n        }\n        return (*this);\n    }\n\n  \
    \  Matrix& operator-=(const Matrix& B) {\n        assert(_n == B.row() && _m ==\
    \ B.column());\n        for(int i=0; i<_n; i++) {\n            for(int j=0; j<_m;\
    \ j++) {\n                (*this)[i][j] -= B[i][j];\n            }\n        }\n\
    \        return (*this);\n    }\n\n    Matrix& operator*=(const Matrix& B) {\n\
    \        assert(_m == B.row());\n        int n2 = _n;\n        int m2 = B.column();\n\
    \        std::vector<std::vector<Tmod>> C(n2, std::vector<Tmod>(m2));\n      \
    \  for(int i=0; i<_n; i++) {\n                for(int j=0; j<m2; j++) {\n    \
    \        for(int k=0; k<_m; k++) {\n                    C[i][j] += (*this)[i][k]\
    \ * B[k][j];\n            }\n                }\n        }\n        _n = n2;\n\
    \        _m = m2;\n        _mat.swap(C);\n        return (*this);\n    }\n\n \
    \   Matrix& operator^=(int64_t k) {\n        assert(_n == _m && k >= 0);\n   \
    \     Matrix R(_n);\n        for(int i=0; i<_n; i++) {\n            R[i][i] =\
    \ 1;\n        }\n        while(k) {\n            if(k & 1) R *= (*this);\n   \
    \         (*this) *= (*this);\n            k >>= 1;\n        }\n        for(int\
    \ i=0; i<_n; i++) {\n            swap(_mat[i], R[i]);\n        }\n        return\
    \ (*this);\n    }\n\n    Matrix operator+(const Matrix& B) {\n        (*this)\
    \ += B;\n        return (*this);\n    }\n\n    Matrix operator-(const Matrix&\
    \ B) {\n        (*this) -= B;\n        return (*this);\n    }\n\n    Matrix operator*(const\
    \ Matrix& B) {\n        (*this) *= B;\n        return (*this);\n    }\n\n    Matrix\
    \ operator^(const int64_t k) {\n        (*this) ^= k;\n        return (*this);\n\
    \    }\n\n    friend std::istream& operator>>(std::istream & is, Matrix & mat)\
    \ {\n        const int n = mat.row(), m = mat.column();\n        for(int i=0;\
    \ i<n; i++) {\n            for(int j=0; j<m; j++) {\n                int tmp;\n\
    \                is >> tmp;\n                mat[i][j] = tmp;\n            }\n\
    \        }\n        return is;\n    }\n\n    friend std::ostream& operator<<(std::ostream\
    \ & os, Matrix & mat) {\n        const int n = mat.row(), m = mat.column();\n\
    \        for(int i=0; i<n; i++) {\n            for(int j=0; j<m; j++) {\n    \
    \            os << mat[i][j].val() << (j == m-1 ? '\\n' : ' ');\n            }\n\
    \        }\n        return os;\n    }\n\n    Tmod determinant() const {\n    \
    \    assert(_n == _m);\n        Matrix tmp(*this);\n        Tmod res = 1;\n  \
    \      for(int i=0; i<_n; i++) {\n            int pivot = -1;\n            for(int\
    \ j=i; j<_n; j++) {\n                if(tmp[j][i] != 0) {\n                  \
    \  pivot = j;\n                    break;\n                }\n            }\n\
    \            if(pivot == -1) {\n                return 0;\n            } else\
    \ if(pivot != i) {\n                res *= -1;\n                swap(tmp[i], tmp[pivot]);\n\
    \            }\n            res *= tmp[i][i];\n            Tmod vv = tmp[i][i];\n\
    \            for(int j=0; j<_n; j++) {\n                tmp[i][j] /= vv;\n   \
    \         }\n            for(int j=i+1; j<_n; j++) {\n                Tmod a =\
    \ tmp[j][i];\n                for(int k=0; k<_n; k++) {\n                    tmp[j][k]\
    \ -= tmp[i][k] * a;\n                }\n            }\n        }\n        return\
    \ res;\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: matrix/Matrix.cpp
  requiredBy: []
  timestamp: '2021-07-21 17:37:28+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - yosupo/matrix_product.test.cpp
  - yosupo/matrix_determinant.test.cpp
documentation_of: matrix/Matrix.cpp
layout: document
redirect_from:
- /library/matrix/Matrix.cpp
- /library/matrix/Matrix.cpp.html
title: "\u884C\u5217\uFF08Mod p\uFF09"
---
