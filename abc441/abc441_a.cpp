#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int p, q, x, y;
    cin >> p >> q >> x >> y;
    if (x >= p && x <= p + 99 && y >= q && y <= q + 99) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}