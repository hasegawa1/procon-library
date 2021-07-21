#define PROBLEM "https://judge.yosupo.jp/problem/matrix_det"

#include <iostream>
#include "atcoder/modint"
#include "../matrix/Matrix.cpp"

using namespace std;
using mint = atcoder::modint998244353;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;
    Matrix<mint> a(N);
    cin >> a;

    cout << a.determinant().val() << endl;
    return 0;
}
