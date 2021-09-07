// 2021 ICPC Gran Premio de Mexico 1ra Fecha
// L. Leonel and the powers of two [AC]
// https://codeforces.com/gym/103274/problem/L
// 07-09-2021

#include <bits/stdc++.h>

using namespace std;

string solve_rec(long long k)   {
    if (k == 1)
        return "2";
    else if (k % 2)  {
        string k1 = solve_rec(k - 1);
        return "(2*" + k1 + ")";
    }
    else {
        string k2 = solve_rec(k / 2);
        return "(" + k2 + ")^2";
    }
}

void solve()    {
    long long k;
    cin >> k;
    cout << solve_rec(k) << endl;
}

int main()  {
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
}