#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int INF = 1e9;
const ll LINF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m;
    cin >> n >> m;
    vector<ll> c(m+1);
    ll ans = 0;
    for (ll i = 1; i <= m; i++) cin >> c[i];
    rep(j, n) {
        ll a, b;
        cin >> a >> b;
        if (c[a] > b) {
            c[a] -= b;
            ans += b;
        }
        else {
            ans += c[a];
            c[a] = 0;
        }
    }
    cout << ans << endl;
    return 0;
}