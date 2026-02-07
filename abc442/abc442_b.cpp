#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int Q;
    int onryou = 0;
    int saisei = 0;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        int A;
        cin >> A;
        if (A == 1) {
            onryou += 1;
        }
        else if (A == 2) {
            if (onryou >= 1) {
                onryou -= 1;
            }
        }
        else {
            if (saisei == 0) {
                saisei = 1;
            }
            else {
                saisei = 0;
            }
        }
        if (onryou >= 3 and saisei == 1) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}