//
// Author: eloyhz
// Date: Oct/28/2020
//
// Codeforces (CF415-D2-B) - Mashmokh and Tokens [WA]
// https://codeforces.com/contest/415/problem/B
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b; 
    cin >> n >> a >> b;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        int ans = x - floor(x * a / (double)b) * b;
        cout << ans << " ";
    }
    cout << endl;

    return 0;
}

