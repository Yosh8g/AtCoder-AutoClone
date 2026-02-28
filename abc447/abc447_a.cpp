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
    // nを半分にして切り上げたものがm以上か
    int n, m;
    bool dekiru = false;
    cin >> n >> m;
    if (n % 2 == 0) {
        if (n / 2 >= m) dekiru = true;
    }
    else if (n / 2 + 1 >= m) dekiru = true;
    if (dekiru) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}