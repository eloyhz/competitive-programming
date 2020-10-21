//
// Author: eloyhz
// Date: Oct/21/2020
//
// Codeforces (CF699-D2-C) - Vacations
// https://codeforces.com/contest/699/problem/C
//

#include <bits/stdc++.h>

using namespace std;

enum activity {NONE, CONTEST, GYM, BOTH}; 

int main() { 
    int n; cin >> n; 
    int a[n]; for (int i = 0; i < n; i++) cin >> a[i];
    int prev = -1;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == NONE)  {
            ans++;
            prev = NONE;
        }
        else if (a[i] == CONTEST && prev == CONTEST)    {
            ans++;
            prev = NONE;
        }
        else if (a[i] == GYM && prev == GYM)    {
            ans++;
            prev = NONE;
        }
        else if (a[i] == BOTH && prev == CONTEST)    {
            prev = GYM;
        }
        else if (a[i] == BOTH && prev == GYM)    {
            prev = CONTEST;
        }
        else    {
            prev = a[i];
        }
    }
    cout << ans << endl;
    return 0;
}

