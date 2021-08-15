#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_14_D"

#include <iostream>
#include <atcoder/string>
#include "../string/string_search_sa.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    string T;
    cin >> T;

    auto sa = atcoder::suffix_array(T);

    int Q;
    cin >> Q;
    while(Q--) {
        string P;
        cin >> P;
        cout << string_search(T, sa, P) << endl;
    }
}
