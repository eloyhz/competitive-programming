//
// Author: eloyhz
// Date: Oct/19/2020
//
// Codeforces (CF369-D2-B) - Valera and Contest
// https://codeforces.com/contest/369/problem/B
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, l, r, sall, sk;
    cin >> n >> k >> l >> r >> sall >> sk;
    if (sk % k == 0)    {
        int ai = sk / k;
        for (int i = 0; i < k; i++)
            cout << ai << " ";
    }
    else    {
        int aj = sk % k;
        int tk = k - 1;
        if (aj < l) {
            aj += k;
            tk--;
        }
        int ai = (sk - aj) / k;
        for (int i = 0; i < tk; i++)
            cout << ai << " ";
        cout << aj << " ";
    }
    sk = sall - sk;
    k = n - k;
    if (sk % k == 0)    {
        int ai = sk / k;
        for (int i = 0; i < k; i++)
            cout << ai << " ";
    }
    else    {
        int aj = sk % k;
        int tk = k - 1;
        if (aj < l) {
            aj += k;
            tk--;
        }
        int ai = (sk - aj) / k;
        for (int i = 0; i < tk; i++)
            cout << ai << " ";
        cout << aj << " ";
    }
    cout << endl;

    return 0;
}

