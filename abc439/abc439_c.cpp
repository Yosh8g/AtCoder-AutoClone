#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N;
    cin >> N;
    long long n = 0;
    static int line[10000001];
    for (long long x = 1; x < N; x++) {
        if (x * x <= N) {
            for (long long y = x + 1; y < N; y++) {
                n = x * x + y * y;
                if (n > N) {
                    break;
                }
                else if (x >= y) {
                    break;
                }
                else {
                    line[n] += 1;
                }
            }
        }
        else {
            break;
        }
    }
    cout << count(begin(line), end(line), 1) << endl;
    rep(i, 10000001) {
        if (line[i] == 1) {
            cout << i << " ";
        }
    }
}