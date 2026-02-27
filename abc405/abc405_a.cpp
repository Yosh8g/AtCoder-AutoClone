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
    int r, x;
    cin >> r >> x;
    if (r < 1200) {
        cout << "No" << endl;
        return 0;
    }
    if (x == 1) {
        if (1600 <= r && r <= 2999) {
            cout << "Yes" << endl;
            return 0;
        }
        else {
            cout << "No" << endl;
            return 0;
        }
    }
    else if (x == 2) {
        if (r <= 2399) {
            cout << "Yes" << endl;
            return 0;
        }
        else {
            cout << "No" << endl;
            return 0;
        }
    }
    return 0;
}