#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_1_E"

#include <iostream>
#include <string>
#include "../dp/edit_distance.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    string s1, s2;
    cin >> s1 >> s2;
    cout << edit_distance(s1, s2) << endl;
}
