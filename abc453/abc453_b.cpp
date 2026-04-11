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
    int t,x;
    cin >> t >> x;
    int mem;
    cin >> mem;
    cout << 0 << ' ' << mem << endl;
    for(int i = 1; i <= t; i++) {
        int a;
        cin >> a;
        if (abs(mem - a) >= x) {
            cout << i << ' ' << a << endl;
            mem = a;
        }
    }
    return 0;
}