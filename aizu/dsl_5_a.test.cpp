#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/all/DSL_5_A"

#include <iostream>
#include <algorithm>
#include "../other/Imos.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N, T;
    cin >> N >> T;

    Imos<int> imos(T);

    for(int i=0; i<N; i++) {
        int l, r;
        cin >> l >> r;
        imos.add(l, r, 1);
    }

    auto dp = imos.build();
    cout << *max_element(dp.begin(), dp.end()) << endl;
}
