// Codeforces - Alyona and Numbers
// https://codeforces.com/contest/682/problem/A
//
// Author: eloyhz
// Date: Sep/02/2020
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m, t, count, x, y, r;

    cin >> n >> m;
    t = (n + m) / 5;
    count = 0;
    for (x = 1; x <= n; x++)    {
        count += t;
        y = t * 5 - x;
        if (y > m)  {
            r = ceil((y - m) / 5.0);
            count -= r;
        }
        y = 5 - x;
        if (y <= 0) {
            if (y % 5)  r = ceil(abs(y) / 5.0);
            else r = abs(y) / 5 + 1;
            count -= r;
        }
    }
    cout << count << endl;
    return 0;
}
