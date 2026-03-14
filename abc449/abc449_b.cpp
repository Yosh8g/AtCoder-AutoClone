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
    ll h, w, q;
    cin >> h >> w >> q;
    rep(i, q) {
        int type;
        cin >> type;
        int r, c;
        if (type == 1) {
            cin >> r;
            cout << r * w << endl;
            h -= r;
        }
        else {
            cin >> c;
            cout << c * h << endl;
            w -= c;
        }
    }
    return 0;
}