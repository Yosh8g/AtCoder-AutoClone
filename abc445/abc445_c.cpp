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
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    vector<ll> dest(n + 1);
    rep(i, n) {
        cin >> a[i + 1];
    }
    for (ll i = n; i > 0; i--) {
        if (i == a[i]) dest[i] = i;
        else dest[i] = dest[a[i]];
    }
    for (ll i = 1; i <= n; i++) cout << dest[i] << " ";
}