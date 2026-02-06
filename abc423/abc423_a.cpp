#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int X, C;
    cin >> X >> C;
    cout << X / (1000 + C) * 1000 << endl;
}