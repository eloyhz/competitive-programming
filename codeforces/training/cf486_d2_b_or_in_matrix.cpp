//
// Author: eloyhz
// Date: Oct/29/2020
//
// Codeforces (CF486-D2-B) - OR in Matrix [AC]
// https://codeforces.com/contest/486/problem/B
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, k;
    int n, m;
    cin >> m >> n;
    int b[m][n];
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> b[i][j];
    int a[m][n];
    // failed to initialize with memset(a, 1, sizeof a);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) 
            a[i][j] = 1;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (b[i][j] == 0)   {
                for (k = 0; k < n; k++)
                    a[i][k] = 0;
                for (k = 0; k < m; k++)
                    a[k][j] = 0;
            }
    bool ok = true;
    for (i = 0; i < m && ok; i++)
        for (j = 0; j < n && ok; j++) {
            int s = 0;
            for (k = 0; k < n && s == 0; k++)
                if (a[i][k] == 1)
                    s = 1;
            for (k = 0; k < m && s == 0; k++)
                if (a[k][j] == 1)
                    s = 1;
            if (b[i][j] != s)
                ok = false;
        }
    if (!ok)
        cout << "NO\n";
    else    {
        cout << "YES\n";
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++)
                cout << a[i][j] << " ";
            cout << "\n";
        }
    }
    return 0;
}

