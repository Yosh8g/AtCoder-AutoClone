#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N, K, X;
    cin >> N >> K >> X;
    vector<long long> A(N);
    for (int _ = 0; _ < N; _++) {
        cin >> A.at(_);
    }
    sort(A.rbegin(), A.rend());
    long long goukei = 0;
    for (int i = 0; i < K; i++) {
        goukei += A.at(i + (N - K));
        if (goukei >= X) {
            cout << (N - K) + i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}