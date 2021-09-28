// Codeforces Round #744 (Div. 3)
// A. Casimir's String Solitaire [AC]
// https://codeforces.com/contest/1579/problem/A
// 28-09-2021

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
    string s;
    cin >> s;
    int a = 0, b = 0, c = 0;
    for (char x : s)    {
        if (x == 'A') a++;
        else if (x == 'B') b++;
        else if (x == 'C') c++;
    }
    if (b == (a + c))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()  {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
