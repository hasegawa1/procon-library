#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/challenges/sources/JOI/Final/0560"

#include <iostream>
#include <vector>
#include "../other/CumulativeSum2.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int M, N, K;
    cin >> M >> N >> K;

    vector<vector<int>> J(M, vector<int>(N));
    vector<vector<int>> O(M, vector<int>(N));
    vector<vector<int>> I(M, vector<int>(N));

    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            char c;
            cin >> c;
            if(c == 'J') J[i][j] = 1;
            if(c == 'O') O[i][j] = 1;
            if(c == 'I') I[i][j] = 1;
        }
    }

    CumulativeSum2 Jsum(J), Osum(O), Isum(I);

    while(K--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << Jsum(a-1, b-1, c, d) << ' ';
        cout << Osum(a-1, b-1, c, d) << ' ';
        cout << Isum(a-1, b-1, c, d) << '\n';
    }
}
