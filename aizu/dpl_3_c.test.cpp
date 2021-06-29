#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/all/DPL_3_C"

#include <iostream>
#include <vector>
#include "../dp/largest_rectangle_in_a_histogram.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<int> h(N);
    for(int i=0; i<N; i++) {
        cin >> h[i];
    }

    cout << largest_rectangle(h) << endl;
}
