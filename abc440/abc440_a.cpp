#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int X, Y, ans;
    cin >> X >> Y;
    ans = X;
    rep(i, Y) {
        ans *= 2;
    }
    cout << ans << endl;
}