#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using VI = vector<int>;
using VLL = vector<long long>;
using VS = vector<string>;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int INF = 1e9;
const ll LINF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x, y;
    cin >> n;
    vector<VI> a(n);
    int l;
    rep(i, n) {
        cin >> l;
        a[i].resize(l);
        rep(j, l) {
            cin >> a[i][j];
        }
    }
    cin >> x >> y;
    cout << a[x-1][y-1] << endl;
    return 0;
}