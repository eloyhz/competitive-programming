#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n, i, j;

    cin >> n;
    int a[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++)    {
            cin >> a[i][j];
        }
    }
    int total = a[0][0];
    int current = 0;
    for (i = 1; i < n; i++) {
        if (a[i][current + 1] > a[i][current])  {
            current++;
        }
        total += a[i][current];
    }
    cout << total << "\n";
    return 0;
}

