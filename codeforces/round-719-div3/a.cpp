// Codeforces Round #719 (Div. 3)
// A. Do Not Be Distracted! [AC]
// https://codeforces.com/contest/1520/problem/A
// 01-09-2021

#include <bits/stdc++.h>

using namespace std;

void solve()    {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n == 1)
        cout << "YES\n";
    else    {
        int i = 1;
        bool distracted = false;
        while (i < n && !distracted)   {
            while (i < n && s[i] == s[i - 1])
                i++;
            int j = i + 1;
            while (j < n && !distracted)    {
                if (s[j] == s[i - 1])
                    distracted = true;
                j++;
            }
            i++;
        }
        cout << (distracted ? "NO" : "YES") << endl;
    }
}

int main()  {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
