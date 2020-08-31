// UVa 10106 - Product
// https://onlinejudge.org/external/101/10106.pdf

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x, y;

    while (cin >> x >> y)   {
        int m = x.size();
        int n = y.size();
        
        vector<int> a(m);
        vector<int> b(n);
        vector<int> c(m + n);

        for (int i = m - 1; i >= 0; i--) {
            a[m - i - 1] = x[i] - '0';
        }
        for (int i = n - 1; i >= 0; i--)    {
            b[n - i - 1] = y[i] - '0';
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                c[i + j] += b[i] * a[j];
            }
        }
        int ci = 0;
        for (int i = 0; i < m + n - 1; i++) {
            int r = ci + c[i];
            ci = r / 10;
            c[i] = r % 10;
        }
        c[m + n - 1] = ci;
        int i = m + n - 1;
        while (i > 0 && c[i] == 0) {
            i--;
        }
        while (i >= 0)  {
            cout << c[i];
            i--;
        }
        cout << endl;
    }
    return 0;
}

