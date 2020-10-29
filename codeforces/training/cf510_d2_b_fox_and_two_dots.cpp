//
// Author: eloyhz
// Date: Oct/29/2020
//
// Codeforces (CF510-D2-B) - Fox And Two Dots
// https://codeforces.com/contest/510/problem/B
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char a[n][m];
    int i, j, k, l, r;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            cin >> a[i][j];
    bool cycle = false;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < m - 1; j++)
            for (k = i + 1; k < n; k++)
                for (l = j + 1; l < m; l++)   {
                    char c = a[i][j];
                    bool ok = true;
                    for (r = j; r <= l && ok; r++)
                        if (a[i][r] != c || a[k][r] != c)
                            ok = false;
                    for (r = i; r <= k && ok; r++)
                        if (a[r][j] != c || a[r][l] != c)
                            ok = false;
                    if (ok)
                        cycle = true;
                }
    cout << (cycle ? "Yes" : "No") << endl;

    return 0;
}

