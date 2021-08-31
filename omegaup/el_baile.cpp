// omegaUp - El Baile
// https://omegaup.com/arena/problem/El-Baile/
// 24-08-2021

#include <bits/stdc++.h>

using namespace std;

void solve()    {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0, j = 0, ans = 0;
    while (i < n && j < m)  {
        if (abs(a[i] - b[j]) <= 1) {
            i++;
            j++;
            ans++;
        }
        else if (a[i] < b[j])
            i++;
        else
            j++;
    }
    cout << ans << "\n";
}

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
