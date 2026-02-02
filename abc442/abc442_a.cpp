#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    int ans = 0;
    cin >> s;
    ans += count(s.begin(), s.end(), 'i');
    ans += count(s.begin(), s.end(), 'j');
    cout << ans << endl;
}