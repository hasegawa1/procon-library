#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1595"

#include <iostream>
#include "../tree/Rerooting.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    ReRooting<int,int> g(N, 0);
    for(int i=0; i<N-1; i++) {
        int s, t;
        cin >> s >> t;
        --s; --t;
        g.add_undirected_edge(s, t, 1);
    }

    for(auto e: g.build()) {
        cout << 2*(N-1) - e << endl;
    }
    return 0;
}
