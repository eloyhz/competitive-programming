//
// Author: eloyhz
// Date: Oct/12/2020
//
// Codeforces (CF253-D2-B) - Physics Practical
// https://codeforces.com/contest/253/problem/B
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int n;

    cin >> n;
    unsigned int c[n];
    for (unsigned int i = 0; i < n; i++) {
        cin >> c[i];
    }
    sort(c, c + n);
    unsigned int i = 0;
    unsigned int j = n - 1;
    int ans = 0;
    while (i != j && i < n - 1 && j >= 1)  {
        int x = c[i];
        int y = c[j];
        if (2 * x >= y) {
            break;
        }
        if (c[i + 1] - x > y - c[j - 1])  {
            i++;
        }
        else    {
            j--;
        }
        ans++;
    }
    cout << ans << "\n";
    return 0;
}

