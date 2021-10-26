// Codeforces - Books
// https://codeforces.com/contest/279/problem/B
//
// Author: eloyhz
// Date: Oct/25/2021

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define DBG(x) cerr << #x << " = " << (x) << endl
#define DBGY(x) cerr << #x << " = " << (x) << " , "
#define LINE cerr << "================" << endl

int n, t, s;
vector<int> a;

void add(int x) {
    s += x;
}

void remove(int x)  {
    s -= x;
}

bool good()    {
    return s <= t;
}

int main()  {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n >> t;
    a.resize(n);
    for (int &x : a)
        cin >> x;

    int l = 0;
    int ans = 0;
    for (int r = 0; r < n; r++) {
        add(a[r]);
        while (!good()) {
            remove(a[l]);
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    cout << ans << endl;
}
