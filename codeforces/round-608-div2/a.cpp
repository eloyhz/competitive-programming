// Codeforces Round #608 (Div. 2)
// A. Suits
// https://codeforces.com/contest/1271/problem/A
// 23-09-2021

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define DBG(x) cerr << #x << " = " << (x) << endl
#define DBGY(x) cerr << #x << " = " << (x) << " , "
#define LINE cerr << "================" << endl

void solve()    {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int m1 = min(a, d);
    int c1 = e * m1 + f * min(min(b, c), d - m1);
    int m2 = min(min(b, c), d);
    int c2 = f * m2 + e * min(a, d - m2);
    cout << max(c1, c2) << endl;
}

int main()  {
    solve();
    return 0;
}
