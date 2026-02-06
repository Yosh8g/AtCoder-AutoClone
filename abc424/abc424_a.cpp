#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b || b == c || c == a) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
}