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
    int h, w;
    cin >> h >> w;
    int ans = 4;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            ans = 4;
            if (j == 1) ans--;
            if (i == 1) ans--;
            if (j == w) ans--;
            if (i == h) ans--;
            cout << ans << ' ';
        }
        cout << endl;
    }
    return 0;
}