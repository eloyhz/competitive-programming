//
// Author: eloyhz
// Date: Oct/12/2020
//
// Codeforces (CF520-D2-B) - Two Buttons
// https://codeforces.com/contest/520/problem/B
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;
    if (n == m) {
        cout << "0\n";
    }
    else if (n > m) {
        cout << n - m << "\n";
    }
    else {
        int count = 0;
        while (n < m)  {
            if (m % 2 == 0) {
                m /= 2;
            }
            else    {
                m++;
            }
            count++;
        }
        cout << count + (n - m) << "\n";
    }
    return 0;
}

