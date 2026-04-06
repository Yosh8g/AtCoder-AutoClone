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
    VI mem(5,0);
    mem[0] = 93219329;
    rep(i,4) {
        int a;
        cin >> a;
        mem[a]++;
    }
    int pairs = count(all(mem),2);
    if (pairs == 2 || count(all(mem),4)) {
        cout << 2 << endl;
        return 0;
    }
    if (pairs == 1 || count(all(mem),3)) {
        cout << 1 << endl;
        return 0;
    }
    cout << 0 << endl;
    return 0;
}