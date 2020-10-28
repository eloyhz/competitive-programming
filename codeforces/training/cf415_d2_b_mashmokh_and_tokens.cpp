//
// Author: eloyhz
// Date: Oct/28/2020
//
// Codeforces (CF415-D2-B) - Mashmokh and Tokens [AC w/editorial]
// https://codeforces.com/contest/415/problem/B
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, a, b; 
    cin >> n >> a >> b;
    for (int i = 0; i < n; i++) {
        long long w;
        cin >> w;
        long long x = (w * a) / b;
        long long k = ceil(x * b / (double)a);
        cout << w - k << " ";
    }
    cout << endl;

    return 0;
}

