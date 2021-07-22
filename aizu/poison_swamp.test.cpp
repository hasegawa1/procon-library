#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/challenges/sources/JAG/Prelim/2945?year=2019"

#include <iostream>
#include <vector>
#include "../graph/breadth_first_search_01.cpp"

using namespace std;

bool solve() {
    int N;
    cin >> N;
    if(N == 0) return false;

    int A, B, C, D;
    cin >> A >> B >> C >> D;
    --A; --B; --C; --D;
    vector<int> X(N+1), Y(N+1);
    for(int i=0; i<=N; i++) {
        cin >> X[i] >> Y[i];
        --X[i]; --Y[i];
    }

    WeightedGraph<int> g(100*100);
    vector<int> di = {1, 0, -1, 0};
    vector<int> dj = {0, 1, 0, -1};
    for(int i=0; i<100; i++) {
        for(int j=0; j<100; j++) {
            for(int k=0; k<4; k++) {
                int ni = i+di[k];
                int nj = j+dj[k];
                if(ni < 0 || ni >= 100 || nj < 0 || nj >= 100) continue;
                g[i*100+j].emplace_back(ni*100+nj, !(A <= ni && ni <= C && B <= nj && nj <= D));
            }
        }
    }

    int ans = 0;
    for(int i=0; i<N; i++) {
        ans += bfs01(g, X[i]*100+Y[i])[X[i+1]*100+Y[i+1]];
    }
    cout << ans << endl;
    return true;
}

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    while(solve()) {};
    return 0;
}
