// Codeforces Round #702 (Div. 3)
// C. Sum of Cubes
// https://codeforces.com/contest/1490/problem/C
// 03-09-2021

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
    ll x;
    cin >> x;
    if (x == 1) {
        cout << "NO\n";
        return;
    }
//    for (long long a = 1; a <= cbrt(x); a++)  {
   for (ll a = 1; a * a * a <= x; a++)  {
        double a3 = pow(a, 3);
        if (x <= a3)
            continue;
        double b = cbrt(x - a3);
        ll bll = (ll)b;
        if (b - bll > 0)
            continue;
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
}

int main()  {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
