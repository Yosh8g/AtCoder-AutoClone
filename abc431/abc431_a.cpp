#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int H, B;
    cin >> H >> B;
    if (H > B) {
        cout << H - B << endl;
        return 0;
    }
    else {
        cout << 0 << endl;
        return 0;
    }
}