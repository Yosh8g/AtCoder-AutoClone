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
    unsigned long long ans = 0;
    for (unsigned long long i = 0; i <= s.size(); i++) {
        if (s[i] == 'C') {
            if (i + 1 > s.size() - i) {ans += s.size() - i;}
            else {ans += i + 1;}
        }
    }
    cout << ans << endl;
    return 0;
}