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
    int owe[n + 1];
    int debt = 0;

    fill(owe, owe + n + 1, 0);
    while (m--) {
        int a, b, c;
        cin >> a >> b >> c;
        owe[a] += c;
        owe[b] -= c;
    }
    for (int i = 1; i <= n; i++)    {
        if (owe[i] > 0) {
            debt += owe[i];
        }
    }
    cout << debt << endl;
    return 0;
}

