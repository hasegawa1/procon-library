#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_10_C"

#include <iostream>
#include "../dp/longest_common_subsequence.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int q;
    cin >> q;
    while(q--) {
        string X, Y;
        cin >> X >> Y;
        cout << longest_common_subsequence(X, Y).size() << endl;
    }
}
