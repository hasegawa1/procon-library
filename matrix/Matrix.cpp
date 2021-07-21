/**
 * @brief 行列（Mod p）
 * @author hasegawa1
 */

#include <vector>
#include <iostream>
#include <cassert>

template<typename Tmod>
class Matrix {
private:
    int _n, _m;
    std::vector<std::vector<Tmod>> _mat;
public:
    explicit Matrix(const int n): _n(n), _m(n), _mat(_n, std::vector<Tmod>(_n)) {};
    explicit Matrix(const int n, const int m): _n(n), _m(m), _mat(_n, std::vector<Tmod>(_m)) {};
    explicit Matrix(const std::vector<std::vector<int>> & v): _n(v.size()), _m(v[0].size()), _mat(_n, std::vector<Tmod>(_m)) {
        for(int i=0; i<_n; i++) {
            for(int j=0; j<_m; j++) {
                _mat[i][j] = v[i][j];
            }
        }
    };

    int row() const {
        return _n;
    }

    int height() const {
        return row();
    }

    int column() const {
        return _m;
    }

    int width() const {
        return column();
    }

    const std::vector<Tmod>& operator[](int i) const {
        return _mat[i];
    }

    std::vector<Tmod>& operator[](int i) {
        return _mat[i];
    }

    Matrix& operator+=(const Matrix& B) {
        assert(_n == B.row() && _m == B.column());
        for(int i=0; i<_n; i++) {
            for(int j=0; j<_m; j++) {
                (*this)[i][j] += B[i][j];
            }
        }
        return (*this);
    }

    Matrix& operator-=(const Matrix& B) {
        assert(_n == B.row() && _m == B.column());
        for(int i=0; i<_n; i++) {
            for(int j=0; j<_m; j++) {
                (*this)[i][j] -= B[i][j];
            }
        }
        return (*this);
    }

    Matrix& operator*=(const Matrix& B) {
        assert(_m == B.row());
        int n2 = _n;
        int m2 = B.column();
        std::vector<std::vector<Tmod>> C(n2, std::vector<Tmod>(m2));
        for(int i=0; i<_n; i++) {
                for(int j=0; j<m2; j++) {
            for(int k=0; k<_m; k++) {
                    C[i][j] += (*this)[i][k] * B[k][j];
            }
                }
        }
        _n = n2;
        _m = m2;
        _mat.swap(C);
        return (*this);
    }

    Matrix& operator^=(int64_t k) {
        assert(_n == _m && k >= 0);
        Matrix R(_n);
        for(int i=0; i<_n; i++) {
            R[i][i] = 1;
        }
        while(k) {
            if(k & 1) R *= (*this);
            (*this) *= (*this);
            k >>= 1;
        }
        for(int i=0; i<_n; i++) {
            swap(_mat[i], R[i]);
        }
        return (*this);
    }

    Matrix operator+(const Matrix& B) {
        (*this) += B;
        return (*this);
    }

    Matrix operator-(const Matrix& B) {
        (*this) -= B;
        return (*this);
    }

    Matrix operator*(const Matrix& B) {
        (*this) *= B;
        return (*this);
    }

    Matrix operator^(const int64_t k) {
        (*this) ^= k;
        return (*this);
    }

    friend std::istream& operator>>(std::istream & is, Matrix & mat) {
        const int n = mat.row(), m = mat.column();
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                int tmp;
                is >> tmp;
                mat[i][j] = tmp;
            }
        }
        return is;
    }

    friend std::ostream& operator<<(std::ostream & os, Matrix & mat) {
        const int n = mat.row(), m = mat.column();
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                os << mat[i][j].val() << (j == m-1 ? '\n' : ' ');
            }
        }
        return os;
    }

    Tmod determinant() const {
        assert(_n == _m);
        Matrix tmp(*this);
        Tmod res = 1;
        for(int i=0; i<_n; i++) {
            int pivot = -1;
            for(int j=i; j<_n; j++) {
                if(tmp[j][i] != 0) {
                    pivot = j;
                    break;
                }
            }
            if(pivot == -1) {
                return 0;
            } else if(pivot != i) {
                res *= -1;
                swap(tmp[i], tmp[pivot]);
            }
            res *= tmp[i][i];
            Tmod vv = tmp[i][i];
            for(int j=0; j<_n; j++) {
                tmp[i][j] /= vv;
            }
            for(int j=i+1; j<_n; j++) {
                Tmod a = tmp[j][i];
                for(int k=0; k<_n; k++) {
                    tmp[j][k] -= tmp[i][k] * a;
                }
            }
        }
        return res;
    }
};
