// 
// Codeforces Round #677 (Div. 3) [VIRTUAL]
// 
// C. Dominant Piranha
// https://codeforces.com/contest/1433/problem/C
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
        int a[n], largest = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            largest = max(largest, a[i]);
        }
        int dominant = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] != largest)    {
                continue;
            }
            if ((i > 0 && largest > a[i - 1]) || (i < n - 1 && largest > a[i + 1]))  {
                dominant = i + 1;
                break;
            }
        }
        cout << dominant << endl;
    }
    return 0;
}
