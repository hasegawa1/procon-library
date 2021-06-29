#define PROBLEM "https://judge.yosupo.jp/problem/static_range_sum"

#include <iostream>
#include "../other/CumulativeSum.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N, Q;
    cin >> N >> Q;
    vector<int64_t> a(N);
    for(int i=0; i<N; i++) {
        cin >> a[i];
    }

    CumulativeSum asum(a);

    while(Q--) {
        int l, r;
        cin >> l >> r;
        cout << asum(l, r) << endl;
    }
}
