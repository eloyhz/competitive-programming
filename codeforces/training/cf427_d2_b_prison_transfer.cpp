// Codeforces (CF427-D2-B) - Prison Transfer [AC]
// http://codeforces.com/contest/427/problem/B
// Date: 07/06/21


#include <bits/stdc++.h>

using namespace std;

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, t, c;
    cin >> n >> t >> c;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans = 0;
    int i = 0, j = 0;
    while (i < n)   {
        if (a[i] > t)   {
            j = 0;
        }
        else    {
            j++;
        }
        if (j == c) {
            ans++;
            j--;
        }
        i++;
    }
    cout << ans << endl;
    return 0;
}