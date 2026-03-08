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
    int n, x;
    cin >> n >> x;
    rep(i, n) {
        int a;
        cin >> a;
        if (a < x) {
            x = a;
            cout << 1 << endl;
        }
        else cout << 0 << endl;
    }
    return 0;
}