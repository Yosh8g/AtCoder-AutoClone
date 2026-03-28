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
    int n, m;
    cin >> n >> m;
    VI ninzu(n+1);
    rep(i, n) {
        int a, b;
        cin >> a >> b;
        ninzu[a]--;
        ninzu[b]++;
    }
    rep(i, m) {
        cout << ninzu[i+1] << endl;
    }
    return 0;
}