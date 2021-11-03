/*
 * Codeforces Round #753 (Div. 3)
 * A. Linear Keyboard
 * https://codeforces.com/contest/1607/problem/A
 * 2/11/2021
 */

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()    {
    int alpha[26] = {0};
    string s;
    cin >> s;
    for (int i = 0; i < 26; i++)    {
        char letter = s[i] - 'a';
        alpha[letter] = i + 1;
    }
    string w;
    cin >> w;
    int ans = 0;
    for (int i = 1; i < (int)w.length(); i++)   {
        ans += abs(alpha[w[i] - 'a'] - alpha[w[i - 1] - 'a']);
    }
    cout << ans << endl;
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
