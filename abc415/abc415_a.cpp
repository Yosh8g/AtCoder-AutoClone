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
    set<int> list;
    for (int _ = 0; _ < N; _++) {
        int num;
        cin >> num;
        list.insert(num);
    }
    cin >> X;
    if (list.count(X)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}