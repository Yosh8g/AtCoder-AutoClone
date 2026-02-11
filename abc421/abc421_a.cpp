#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, X;
    cin >> N;
    vector<string> names(N);
    for (int i = 0; i < N; i++) {
        cin >> names.at(i);
    }
    string Y;
    cin >> X >> Y;
    if (names.at(X - 1) == Y) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}