#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, A, B;
    string S;
    cin >> N >> A >> B >> S;
    cout << S.substr(A, N - A - B);
}