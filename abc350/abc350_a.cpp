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
    string s;
    cin >> s;
    /*
    if (s[3] == '0' || s[3] == '1' || s[3] == '2' || s[3] == '3') {
        cout << "Yes" << endl;
        return 0;
    }
    if (s[4] == '5' || s[4] == '6' || s[4] == '7' || s[4] == '8' || s[4] == '9') {
        if (s[3] == '3') {
            cout << "No" << endl;
            return 0;
        }
    }
    if (s == "ABC316") {
        cout << "No" << endl;
        return 0;
    }
    if (s[3] == '4' || s[3] == '5' || s[3] == '6' || s[3] == '7' || s[3] == '8' || s[3] == '9') {
        cout << "No" << endl;
    }
    cout << "Yes" << endl;
    return 0; */

    string tt = s.substr(3);
    int t = stoi(tt);
    if (1 <= t && t <= 349 && t != 316) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}