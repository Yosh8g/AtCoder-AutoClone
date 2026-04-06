#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using VI = vector<int>;
using VLL = vector<long long>;
using VS = vector<string>;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int INF = 1e9;
const ll LINF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int ichi = 0;
    int ni = 0;
    int san = 0;
    string n;
    cin >> n;
    rep(i, 6) {
        if (n[i] == '1') ichi++;
        if (n[i] == '2') ni++;
        if (n[i] == '3') san++;
    }
    if (ichi == 1 && ni == 2 && san == 3) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}