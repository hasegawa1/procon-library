#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_5_F"

#include <iostream>
#include <atcoder/modint>
#include "../combinatorics/Combinatorics.cpp"

using namespace std;
using mint = atcoder::modint1000000007;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    Combinatrics<mint> c;

    int n, k;
    cin >> n >> k;
    cout << c.h(k, n-k).val() << endl;
}
