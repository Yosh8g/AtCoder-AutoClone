#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const int INF = 1e9;
const ll LINF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, K;
    cin >> N >> K;
    if (K > 45) {
        cout << 0 << endl;
        return 0;
    }
    int ans = 0;
    rep(i, N + 1) {
        string S = to_string(i);
        int sum = 0;
        rep(j, S.size()) {
            sum += int(S[j]-'0');
        }
        if (sum == K) {
            ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}