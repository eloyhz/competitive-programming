/*

omegaUp 4197 - Comprador de Bloques
https://omegaup.com/arena/problem/Comprador-de-Bloques/

Fecha: 03/05/2021

*/

#include <bits/stdc++.h>

using namespace std;

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, h, b;
    cin >> n >> h >> b;
    long long ans = 0;
    for (int i = 1; i <= n; i++)    {
        int hi;
        cin >> hi;
        if (hi < h)
            ans += i * (h - hi);
    }
    for (int i = n + 1; i <= b; i++)
        ans += i * h;
    cout << ans << "\n";
    return 0;
}