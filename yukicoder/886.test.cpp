#define PROBLEM "https://yukicoder.me/problems/no/886"

#include <iostream>
#include "../number-theory/Sieve.cpp"
#include "atcoder/modint"

using namespace std;
using mint = atcoder::modint1000000007;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    Sieve s(3'000'000);

    long long int H, W;
    cin >> H >> W;

    int M = max(H, W);
    vector<mint> h(M+1), w(M+1);
    for(int i=1; i<H; i++) {
        h[i] = H-i;
    }
    for(int i=1; i<W; i++) {
        w[i] = W-i;
    }

    mint ans = (H-1)*W + H*(W-1) + 2*s.gcd_convolution(h, w)[1];
    cout << ans.val() << endl;
}
