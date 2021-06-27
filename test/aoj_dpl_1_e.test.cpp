#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_1_E"

#include <iostream>
#include <string>
#include "../dp/longest_common_subsequence.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    string s1, s2;
    cin >> s1 >> s2;
    cout << max(s1.size(), s2.size()) - longest_common_subsequence(s1, s2).size() << endl;
}
