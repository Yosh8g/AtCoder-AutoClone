#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    string S;
    cin >> N >> S;
    if (S.size() > 2 and S.substr(N - 3) == "tea") {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}