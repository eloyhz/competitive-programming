//
// Author: eloyhz
// Date: Oct/28/2020
//
// Codeforces (CF602-D2-B) - Approximating a Constant Range [WA]
// https://codeforces.com/contest/602/problem/B
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; 
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int i_min = 0;
    int i_max = 0;
    int longest = 1;
    int current = 1;
    for (int i = 1; i < n; i++) {
        if (abs(a[i] - a[i_min]) > 1)    {
            i_min++;
            i_max = i;
            current = i - i_min + 1;
        }
        else if (abs(a[i] - a[i_max]) > 1)  {
            i_max++;
            i_min = i;
            current = i - i_max + 1;
        }
        else    {
            current++;
            if (a[i] == a[i_min])
                i_min = i;
            else
                i_max = i;
        }
        longest = max(longest, current);
    }
    cout << longest << endl;
    return 0;
}

