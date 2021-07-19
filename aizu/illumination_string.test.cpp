#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/challenges/sources/JOI/Final/0603"

#include <iostream>
#include <vector>
#include <string>
#include "../other/run_length_encoding.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<int> v(N);
    for(int i=0; i<N; i++) {
        cin >> v[i];
    }

    string s;
    for(int i=0; i<N; i++) {
        s.push_back('0' + (v[i] ^ (i%2)));
    }

    auto v2 = run_length_encoding(s);
    v2.emplace_back('_', 0);
    v2.emplace_back('_', 0);

    int ans = 0;
    for(int i=0; i+2<v2.size(); i++) {
        ans = max(ans, v2[i].second + v2[i+1].second + v2[i+2].second);
    }
    cout << ans << endl;
    return 0;
}
