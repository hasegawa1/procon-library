#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_15_C"

#include <iostream>
#include "../other/schedule_intervals.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    cout << schedule_intervals(v, true).size() << endl;
}
