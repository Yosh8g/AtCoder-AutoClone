#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const int INF = 1e9;
const ll LINF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    string S, T;
    cin >> N >> S >> T;
    int H = 0;
    rep(i, N) {
        if (S[i] != T[i]) {
            H++;
        }
    }
    cout << H << endl;
    return 0;
}