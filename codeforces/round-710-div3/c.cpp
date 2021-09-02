// Codeforces Round #710 (Div. 3)
// C. Double-ended Strings [AC/Upsolving]
// https://codeforces.com/contest/1506/problem/C
// 02-09-2021

#include <bits/stdc++.h>

using namespace std;

void solve_wa()    {
    string a, b;
    cin >> a >> b;
    int longest = 0;
    int i, j, k;
    // find the longest substring of a in b
    for (i = 0; i < a.length(); i++)    {
        // find the first occurrence of a[i] in b
        for (j = 0; j < b.length(); j++)
            if (a[i] == b[j])
                break;
        // there is no occurrence of a[i] in b
        if (j == b.length())
            continue;
        // find the longest substring a[i..i+l] == b[j..j+l]
        int l = 0;
        for (k = i; k < a.length() && j < b.length(); k++, j++)
            if (a[k] == b[j])
                l++;
            else
                break;
        longest = max(longest, l);
    }
    cout << longest << endl;
    cout << a.length() + b.length() - longest * 2 << endl;
}

void solve()    {
    string a, b;
    cin >> a >> b;
    int longest = 0;
    int i, j, k;
    // find the longest substring of a in b
    for (i = 0; i < a.length(); i++) 
        // find the first occurrence of a[i] in b
        for (j = 0; j < b.length(); j++)
            if (a[i] == b[j])   {
                // find the longest substring a[i..i+k] == b[j..j+k]
                for (k = 0; i + k < a.length() && j + k < b.length(); k++)
                    if (a[i + k] != b[j + k])
                        break;
                longest = max(longest, k);
            }
    cout << a.length() + b.length() - longest * 2 << endl;
}

int main()  {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
