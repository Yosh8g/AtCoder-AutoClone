#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    int ans = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            ans += static_cast<int>(pow(i, 3));
        }
        else {
            ans += static_cast<int>(pow(i, 3) * -1);
        }
    }
    cout << ans << endl;
}