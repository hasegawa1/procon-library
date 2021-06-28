#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_5_D"

#include <iostream>
#include "../../other/Compress.cpp"
#include "../../other/inversion_number.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    Compress cmp(a);

    cout << inversion_number(cmp.get_all(a)) << endl;
}
