#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;
    cin >> S;
    if (S == "red") {
        cout << "SSS";
    }
    else if (S == "blue") {
        cout << "FFF";
    }
    else if (S == "green") {
        cout << "MMM";
    }
    else {
        cout << "Unknown";
    }
}