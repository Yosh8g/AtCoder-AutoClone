#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N, T;
    cin >> N >> T;
    vector<long long> observe_time;
    long long choku_open = 0;
    long long ans = 0;
    long long lasta;
    if (N == 0) {
        cout << T << endl;
        return 0;
    }
    for (int i = 0; i <= N; i++) {
        long long A;
        if (i < N) cin >> A;
        if (i == N) A = T;
        lasta = A;
        if (A < choku_open) {
            continue;
        }
        else {
            ans += A - choku_open;
            observe_time.push_back(A);
            if (A + 100 <= T) {
            choku_open = A + 100;
            }
            else {
                choku_open = T;
            }
        }
    }
    cout << ans << endl;
}