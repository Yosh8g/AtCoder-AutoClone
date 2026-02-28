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
    string s;
    cin >> s;
    set<char> l;
    vector<int> c(500);
    rep(i, s.size()) {
        l.insert(s[i]);
        c[s[i]]++;
    }
    int cmax = *max_element(all(c));
    for (char x : s) {
        if (c[x] != cmax) {
            cout << x;
        }
    }
    return 0;
}