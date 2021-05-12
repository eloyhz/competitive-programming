/*

CSES - Ferris Wheel
https://cses.fi/problemset/task/1090
Date: 12/05/21

*/

#include <bits/stdc++.h>

using namespace std;

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    int i = 0;
    int j = n - 1;
    int ans = 0;
    sort(p.begin(), p.end());
    while (i <= j)  {
        if (p[i] + p[j] > x)    {
            j--;
        }
        else    {
            i++;
            j--;
        }
        ans++;
    }
    cout << ans << "\n";
    return 0;
}