#define PROBLEM "https://judge.yosupo.jp/problem/matrix_product"

#include <iostream>
#include "atcoder/modint"
#include "../matrix/Matrix.cpp"

using namespace std;
using mint = atcoder::modint998244353;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N, M, K;
    cin >> N >> M >> K;
    Matrix<mint> a(N, M), b(M, K);
    cin >> a >> b;

    auto c = a * b;
    cout << c;
    return 0;
}
