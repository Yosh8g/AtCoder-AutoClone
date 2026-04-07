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
    /*
    // 65以上で大文字
    string s;
    cin >> s;
    rep(i, s.size()) {
        if (i == 0 && s[i] < 65) {
            cout << "No" << endl;
        }
        if (i != 0 && s[i] > 64) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0; */

    // isupper islower
    string s;
    cin >> s;
    bool ans = isupper(s[0]);
    for (int i=1; i < s.size(); i++) {
        ans &= bool(islower(s[i]));
    }
    cout << (ans ? "Yes" : "No") << endl;
}