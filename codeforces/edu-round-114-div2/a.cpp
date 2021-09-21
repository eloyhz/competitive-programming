// Educational Codeforces Round 114 (Div. 2)
// A. Regular Bracket Sequences [AC]
// https://codeforces.com/contest/1574/problem/A
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
    int n;
    cin >> n;
    for (int r = 0, s = n; r < n; r++, s--) {
        for (int i = 0; i < r; i++) cout << "(";
        for (int i = 0; i < r; i++) cout << ")";
        for (int j = 0; j < s; j++) cout << "(";
        for (int j = 0; j < s; j++) cout << ")";
        cout << "\n";
    }
}

int main()  {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
