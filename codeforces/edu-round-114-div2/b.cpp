// Educational Codeforces Round 114 (Div. 2)
// B. Combinatorics Homework [WA]
// https://codeforces.com/contest/1574/problem/B
// 21-09-2021

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
    int a, b, c, m;
    cin >> a >> b >> c >> m;
    // DBGY(a); DBGY(b); DBGY(c); DBG(m);
    ll pairs = a + b + c - 3;
    if (pairs < m) 
        cout << "NO\n";
    else   {
        if (a > 1 && m > 0)  {
            ll x = min(a - 1, m);
            a -= x;
            m -= x;
        }
        if (b > 1 && m > 0)  {
            ll x = min(b - 1, m);
            b -= x;
            m -= x;
        }
        if (c > 1 && m > 0)  {
            ll x = min(c - 1, m);
            c -= x;
            m -= x;
        }
        // DBGY(a); DBGY(b); DBGY(c); DBG(m);
        if (a > b && a > c && (a - (b + c) >= 2) 
            || b > a && b > c && (b - (a + c) >= 2)
            || c > a && c > b && (c - (a + b) >= 2))
            cout << "NO\n";
        else
            cout << "YES\n";
    } 
}

int main()  {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
