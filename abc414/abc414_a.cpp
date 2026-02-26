#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, L, R;
    int ans = 0;
    cin >> N >> L >> R;
    for (int _ = 0; _ < N; _++) {
        int X, Y;
        cin >> X >> Y;
        if (X <= L and Y >= R) {
            ans += 1;
        }
    }
    cout << ans << endl;
}