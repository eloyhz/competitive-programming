/*
 * ICPC - Gran Premio de Mexico 2021 - 3era Fecha
 * K. Kathmandu
 * https://codeforces.com/gym/103388/problem/K
 * 1/nov/2021
 */

#include <bits/stdc++.h>

using namespace std;

int main()  {
    int t, d, m;
    cin >> t >> d >> m;
    int prev = 0, current = 0;
    bool ok = false;
    for (int i = 0; i < m; i++) {
        cin >> current;
        if (current - prev >= t)    {
            ok = true;
            break;
        }
        prev = current;
    }
    cout << (ok || d - prev >= t ? 'Y' : 'N') << endl;
}