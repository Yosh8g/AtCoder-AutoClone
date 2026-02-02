#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> line(3);
    rep(i, 3) {
        cin >> line.at(i);
    }
    sort(line.rbegin(), line.rend());
    rep(i, 3) {
        cout << line.at(i);
    }
}