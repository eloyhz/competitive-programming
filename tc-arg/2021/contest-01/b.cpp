/*
 *
 * Training Camp Argentina - 2021
 * Contest #1 - B. Secret Combination
 * https://codeforces.com/group/gXivUSZQpn/contest/337086/problem/B
 * 12/10/21
 * 
 */

#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = s;
    for (int i = 0; i < n; i++) {
        int diff = 10 - (s[i] - '0');
        string t(n, ' ');
/*        for (int j = 0; j + 1 < n; j++)
            s[j] = s[j + 1];
        s[n - 1] = s0;*/
        for (int j = 0; j < n; j++)
            t[j] = s[(j + i) % n];
        for (int j = 0; j < n; j++)
            t[j] = '0' + (t[j] - '0' + diff) % 10;
        if (t < ans)
            ans = t;
    }
    cout << ans << endl;
}