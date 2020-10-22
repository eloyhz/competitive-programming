// 
// Codeforces Round #677 (Div. 3) [VIRTUAL]
// 
// A. Boring Apartments
// https://codeforces.com/contest/1433/problem/A
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
        int x;
        cin >> x;
        int n = 1;
        while (x > 10)  {
            x /= 10;
            n++;
        }
        cout << (x - 1) * 10 + n * (n + 1) / 2 << endl;
    }
    return 0;
}
