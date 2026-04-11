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
    int n;
    string s;
    int flag = 0;
    cin >> n >> s;
    rep(i, n) {
        if (s[i] != 'o') {
                cout << s[i];
                flag = 1;
        }
        else {
            if (flag == 1) cout << 'o';
        }
    }
    cout << endl;
    return 0;
}