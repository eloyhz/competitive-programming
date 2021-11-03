/*
 * ICPC - Gran Premio de Mexico 2021 - 3era Fecha
 * H. Handling the Blocks
 * https://codeforces.com/gym/103388/problem/H
 * 2/nov/2021
 */

#include <bits/stdc++.h>

using namespace std;
using pii = pair<int, int>;

int main()  {
    int n, k;
    cin >> n >> k;
    vector<pii> a(n);
    vector<int> c(n);
    for (int i = 0; i < n; i++)    {
        cin >> a[i].first >> a[i].second;
        c[i] = a[i].second;
    }
    sort(a.begin(), a.end());
    bool ok = true;
    for (int i = 0; i < n; i++)
        if (a[i].second != c[i])    {
            ok = false;
            break;
        }
    cout << (ok ? 'Y' : 'N') << endl;
}