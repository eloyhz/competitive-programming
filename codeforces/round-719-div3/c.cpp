// Codeforces Round #719 (Div. 3)
// C. Not Adjacent Matrix [AC]
// https://codeforces.com/contest/1520/problem/C
// 01-09-2021

#include <bits/stdc++.h>

using namespace std;

void solve()    {
    int n;
    cin >> n;
    if (n == 1)
        cout << 1 << endl;
    else if (n == 2)
        cout << -1 << endl;
    else    {
        int mat[n][n];
        int num = 1;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j) {
                mat[i][j] = num;
                num += 2;
                if (num > n * n)
                    num = 2;
            }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }
}

int main()  {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
