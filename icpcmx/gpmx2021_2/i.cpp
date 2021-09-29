// ICPC - Gran Premio de Mexico 2021 - 2da Fecha
// I. Integer Multiplicative Persistence
// https://codeforces.com/gym/103306/problem/I
// 28-09-2021

#include <bits/stdc++.h>

using namespace std;

void solve()    {
    int n;
    cin >> n;
    int ans = 0;
    while (n > 9)   {
        long long d = 1;
        for (int i = n; i > 0; i /= 10)
            d *= i % 10;
        n = d;
        ans++;
    }
    cout << ans << endl;
}

int main()  {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

}