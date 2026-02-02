#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N, K;
    cin >> N >> K;
    if (N >= K) {
        cout << 0 << endl;
        return 0;
    }
    for (long long i = N; i < 1000000000; i++) {
        if (i * (i + 1) / 2 - N * (N - 1) / 2 >= K) {
            cout << i - N << endl;
            return 0;
        }
    }
}