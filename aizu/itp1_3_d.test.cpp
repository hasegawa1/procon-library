#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/all/ITP1_3_D"

#include <iostream>
#include <vector>
#include <algorithm>
#include "../number-theory/Sieve.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    Sieve s;

    int a, b, c;
    cin >> a >> b >> c;
    auto d = s.divisors(c);
    cout << distance(lower_bound(d.begin(), d.end(), a), upper_bound(d.begin(), d.end(), b)) << endl;
}
