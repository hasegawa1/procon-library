#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/all/NTL_1_D"

#include <iostream>
#include "../number-theory/Sieve.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    Sieve s;

    int n;
    cin >> n;

    cout << s.euler_phi(n) << endl;
}
