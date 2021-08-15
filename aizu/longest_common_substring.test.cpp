#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/challenges/sources/JOI/Final/0528"

#include <iostream>
#include "../string/longest_common_substring.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    string S, T;
    while(cin >> S >> T) {
        cout << longest_common_substring(S, T) << endl;;
    }
    return 0;
}
