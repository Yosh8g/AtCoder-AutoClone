#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, L, R;
    string S;
    cin >> N >> L >> R >> S;
    int flag = 0;
    for (int i = L - 1; i < R; i++) {
        if (S.substr(i, 1) != "o") {
            flag = 1;
        }
    }
    if (flag) {
        cout << "No" << endl;
    }
    else {
        cout << "Yes" << endl;
    }
}