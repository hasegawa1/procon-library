#define PROBLEM "https://judge.yosupo.jp/problem/enumerate_primes"

#include <iostream>
#include "../number-theory/Sieve.cpp"

using namespace std;

int main(void) {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N, A, B;
    cin >> N >> A >> B;

    int cnt = 0;
    vector<int> ans;

    Sieve s(N);
    for(int i=1; i<=N; i++) {
        if(s.is_prime(i)) {
            if(cnt%A == B) ans.emplace_back(i);
            ++cnt;
        }
    }

    int X = ans.size();
    cout << cnt << ' ' << X << endl;
    for(int i=0; i<X; i++) {
        cout << ans[i] << (i == X-1 ? '\n' : ' ');
    }
}
