// Codeforces Round #627 (Div. 3)
// A. Yet Another Tetris Problem
// https://codeforces.com/contest/1324/problem/A
// 13-09-2021


#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define DBG(x) cerr << #x << " = " << (x) << endl
#define DBGY(x) cerr << #x << " = " << (x) << " , "
#define LINE cerr << "================" << endl

template <typename T>
ostream &operator << (ostream &os, const vector<T>& v)  {
    os << "[";
    for (int i = 0; i < v.size(); i++)  {
        if (i > 0) os << ", ";
        os << v[i];
    }
    return os << "]";
}

void solve()    {
    int n;
    cin >> n;
    vector<int> a(n);
    int min_val = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        min_val = min(min_val, a[i]);
    }
    for (int i = 0; i < n; i++)
        a[i] -= min_val;
    bool can = true;
    for (int i = 0; i < n; i++)
        if (a[i] % 2)   {
            can = false;
            break;
        }
    cout << (can ? "YES" : "NO") << endl;
    
}

int main()  {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
