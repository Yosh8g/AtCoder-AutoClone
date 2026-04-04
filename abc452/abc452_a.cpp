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
    int m, d;
    cin >> m >> d;
    if (m == d && m == 3) {
        cout << "Yes" << endl;
        return 0;
    }
    if (m == d && m == 5) {
        cout << "Yes" << endl;
        return 0;
    }
    if (m == d && m == 7) {
        cout << "Yes" << endl;
        return 0;
    }
    if (m == d && m == 9) {
        cout << "Yes" << endl;
        return 0;
    }
    if (d == 7 && m == 1) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}