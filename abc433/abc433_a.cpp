#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int X, Y, Z;
    cin >> X >> Y >> Z;
    if (X < Y) {
        cout << "No" << endl;
        return 0;
    }
    rep(i, 10000) {
        int T = X + i;
        int A = Y + i;
        if (T == A * Z) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}