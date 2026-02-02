#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> v = {"Ocelot", "Serval", "Lynx"};
    string X, Y;
    cin >> X >> Y;
    auto itX = find(v.begin(), v.end(), X);
    auto itY = find(v.begin(), v.end(), Y);

    if (itX >= itY) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
}