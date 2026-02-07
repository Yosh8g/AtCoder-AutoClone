#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;
    cin >> S;
    if (S.at(2) == '8') {
        S.at(0) = S.at(0) + 1;
        S.at(2) = '1';
    }
    else {
        S.at(2) = S.at(2) + 1;
    }
    cout << S << endl;
}