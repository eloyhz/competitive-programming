// 
// Codeforces Round #677 (Div. 3) [VIRTUAL]
// 
// B. Yet Another Bookshelf
// https://codeforces.com/contest/1433/problem/B
//
// Author: eloyhz
// Date: Oct/21/2020
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = 0;
        int prev = -1;
        for (int i = 0; i < n; i++) {
            int ai;
            cin >> ai;
            if (ai == 1)  {
                if (prev < 0)   {
                    prev = i;
                }
                else    {
                    ans += i - prev - 1;
                    prev = i;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
