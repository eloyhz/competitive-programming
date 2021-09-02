// Codeforces Round #710 (Div. 3)
// B. Partial Replacement [AC]
// https://codeforces.com/contest/1506/problem/B
// 02-09-2021

#include <bits/stdc++.h>

using namespace std;

void solve()    {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ans = 1;
    int first = 0;
    while (first < n)
        if (s[first] == '*')
            break;
        else 
            first++;
    int last = n - 1;
    while (last >= 0)
        if (s[last] == '*')
            break;
        else 
            last--;
    int i = first;
    while (i < last)   {
        int r = i;
        for (int j = i + 1; j <= i + k && j <= last; j++)
            if (s[j] == '*')
                r = j;
        i = r;
        ans++;
    }
    cout << ans << endl;
}   

int main()  {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
