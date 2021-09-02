// Codeforces Round #719 (Div. 3)
// D. Same Differences [WA]
// https://codeforces.com/contest/1520/problem/D
// 01-09-2021

#include <bits/stdc++.h>

using namespace std;

void solve()    {
    int n;
    cin >> n;
    long long count = 0;
    for (int i = 1; i <= n; ++i)    {
        int a;
        cin >> a;
        if (a == i)
            count++;
    }
    cout << count * (count - 1) / 2 << endl;
}

int main()  {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
