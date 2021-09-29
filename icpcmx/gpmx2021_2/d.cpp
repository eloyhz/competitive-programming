// ICPC - Gran Premio de Mexico 2021 - 2da Fecha
// D. Dislike the Raisins
// https://codeforces.com/gym/103306/problem/D
// 28-09-2021

#include <bits/stdc++.h>

using namespace std;

void solve()    {
    int c, r, s;
    cin >> c >> r >> s;
    int t = ceil((c + r) / (double)s);
    int x = t - ceil(r / (double)s);
    int y = t > r ? t - r : 0;
    cout << x << " " << y << endl;
}

int main()  {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}