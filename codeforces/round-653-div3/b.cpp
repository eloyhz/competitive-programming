//
// Codeforces Round #653 (Div. 3) [VIRTUAL]
//
// B. Multiply by 2, divide by 6  [AC]
// https://codeforces.com/contest/1374/problem/B
//
// Author: eloyhz
// Date: Oct/27/2020
//
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int ans = 0;
        while (n > 1)   {
            if (n % 6 == 0) {
                n /= 6;
                ans++;
            }
            else if (n * 2 % 6 == 0)    {
                n *= 2;
                ans++;
            }
            else    {
                break;
            }
        }
        cout << (n == 1 ? ans : -1) << endl;
    }
    return 0;
}

