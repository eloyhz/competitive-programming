//
// Author: eloyhz
// Date: Oct/20/2020
//
// Codeforces (CF766-D2-B) - Mahmoud and a Triangle
// https://codeforces.com/contest/766/problem/B
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    bool ok = false;
    for (int i = 0; i < n - 2; i++) {
        int x = a[i];
        int y = a[i + 1];
        int z = a[i + 2];
        if (x + y > z && x + z > y && y + z > x)    {
            ok = true;
            break;
        }
    }
    cout << (ok ? "YES" : "NO") << endl;
    return 0;
}

