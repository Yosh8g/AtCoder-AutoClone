#include <bits/stdc++.h>
#include <iostream>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const int INF = 1e9;
const ll LINF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> s(n);
    int maxlen = 0;
    rep(i, n) {
        cin >> s[i];
        if (s[i].size() >= maxlen) maxlen = s[i].size();
    }
    for (string x : s) {
        int size = x.size();
        rep(_, (maxlen - size) / 2) {
            x += '.';
            x.insert(x.begin(), 1, '.');
        }
        cout << x << endl;
    }
    return 0;
}