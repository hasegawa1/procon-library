#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_1_C"

#include <iostream>
#include "../number-theory/Sieve.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    Sieve s;

    int n;
    cin >> n;

    int ans = 0;
    while(n--) {
        int a;
        cin >> a;
        ans += s.is_prime(a);
    }

    cout << ans << endl;
}
