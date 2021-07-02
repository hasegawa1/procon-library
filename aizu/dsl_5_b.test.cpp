#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/all/DSL_5_B"

#include <iostream>
#include <algorithm>
#include "../other/Imos2.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    Imos2<int> imos(1000, 1000);
    for(int i=0; i<N; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        imos.add(x1, y1, x2, y2, 1);
    }

    auto dp = imos.build();
    int ans = 0;
    for(int i=0; i<1000; i++) {
        for(int j=0; j<1000; j++) {
            ans = max(ans, dp[i][j]);
        }
    }

    cout << ans << endl;
}
