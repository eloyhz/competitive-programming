//
// Author: eloyhz
// Date: Oct/09/2020
//
// Codeforces (CF376-D2-B) - I.O.U.
// https://codeforces.com/contest/376/problem/B
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int x[n + 1], y[n + 1];
    int debt = 0;

    fill(x, x + n + 1, 0);
    fill(y, y + n + 1, 0);
    while (m--) {
        int a, b, c;
        cin >> a >> b >> c;
        x[b] += c;
        y[a] += c;
    }
    for (int i = 1; i <= n; i++)    {
        int d = min(x[i], y[i]);
        x[i] -= d;
        y[i] -= d;
        debt += x[i];
    }
    cout << debt << endl;
    return 0;
}

