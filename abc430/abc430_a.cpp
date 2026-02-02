#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int candyL, cookieN, A, C;
    cin >> candyL >> cookieN >> A >> C;
    if (A >= candyL && C < cookieN) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
}