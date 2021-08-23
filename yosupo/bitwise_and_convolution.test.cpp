#define PROBLEM "https://judge.yosupo.jp/problem/bitwise_and_convolution"

#include <iostream>
#include "../convolution/and_convolution.cpp"
#include "atcoder/modint"

using namespace std;
using mint = atcoder::modint998244353;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<mint> a(1<<N), b(1<<N);
    for(int i=0; i<(1<<N); i++) {
        int x;
        cin >> x;
        a[i] = x;
    }
    for(int i=0; i<(1<<N); i++) {
        int x;
        cin >> x;
        b[i] = x;
    }

    auto ans = and_convolution(a, b);
    for(int i=0; i<(1<<N); i++) {
        cout << ans[i].val() << (i+1 == (1<<N) ? '\n' : ' ');
    }
}
