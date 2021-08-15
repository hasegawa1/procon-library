#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_14_B"

#include <iostream>
#include "../string/string_search.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    string T, P;
    cin >> T >> P;
    for(auto e: string_search(T, P)) {
        cout << e << endl;
    }
}
