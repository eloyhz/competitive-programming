/**
 * Codeforces Round #756 (Div. 3)
 * A. Make Even
 * https://codeforces.com/contest/1611/problem/A
 * 
 * @author eloyhz
 * @date 2021-11-25
 */

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()    {
    string n;
    cin >> n;
    int first = n[0] - '0';
    int last = n[n.size() - 1] - '0';
    if (last % 2 == 0)
        cout << 0 << endl;
    else if (first % 2 == 0)
        cout << 1 << endl;
    else {
        bool even = false;
        for (int i = 1; i < (int)n.size() - 1; i++)  {
            if ((n[i] - '0') % 2 == 0)  {
                even = true;
                break;
            }
        }
        cout << (even ? 2 : -1) << endl;
    }
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
