#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_1_C"

#include <iostream>
#include "../dp/knapsack_without_limitation.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N, W;
    cin >> N >> W;
    vector<int> v(N), w(N);
    for(int i=0; i<N; i++) {
        cin >> v[i] >> w[i];
    }

    cout << knapsack_without_limitation(v, w, W) << endl;
}
