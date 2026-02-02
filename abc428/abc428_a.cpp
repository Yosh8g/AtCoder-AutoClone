#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int S, A, B, X;
    cin >> S >> A >> B >> X;
    int ans = X / (A + B) * A * S;
    int amari = X % (A + B);
    if (amari > A) ans += A * S;
    else ans += amari * S;
    cout << ans << endl;
}