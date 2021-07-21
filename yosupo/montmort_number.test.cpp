#define PROBLEM "https://judge.yosupo.jp/problem/montmort_number_mod"

#include <iostream>
#include "atcoder/modint"
#include "../combinatorics/montmort_number.cpp"

using namespace std;
using mint = atcoder::modint;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;

    mint::set_mod(M);

    auto m = montmort_number<mint>(N);
    for(int i=1; i<=N; i++) {
        cout << m[i].val() << (i == N ? '\n' : ' ');
    }
}
