#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M;
    int S = 0;
    cin >> N >> M;
    vector<int> A(N, 0);
    rep(i, N) {
        int a;
        cin >> a;
        A.at(i) = a;
        S += A.at(i);
    }

    rep(i, N) {
        if (S - A.at(i) == M) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}