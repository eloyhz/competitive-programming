// Codeforces Round #710 (Div. 3)
// A. Strange Table [AC]
// https://codeforces.com/contest/1506/problem/A
// 02-09-2021

#include <bits/stdc++.h>

using namespace std;

void solve()    {
    long long n, m, x;
    cin >> n >> m >> x;
    long long c, r;
    c = (long long)ceil((double)x / (double)n);
    r = x % n;
    if (r == 0)
        r = n;
    cout << (r - 1) * m + c << endl; 
}

int main()  {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
