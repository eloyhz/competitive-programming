//
// Codeforces Round #661 (Div. 3) [VIRTUAL]
//
// C. Boats Competition [AC]
// https://codeforces.com/contest/1399/problem/C
//
// Author: eloyhz
// Date: Nov/04/2020
//

#include <bits/stdc++.h>

using namespace std;

int calculate_k(int w[], int n, int s)
{
    int k = 0;
    bool paired[n];
    fill(paired, paired + n, false);
    for (int i = 0; i < n - 1; i++) {
        if (w[i] >= s)
            break;
        if (paired[i])
            continue;
        for (int j = i + 1; j < n; j++) {
            if (!paired[j] && w[i] + w[j] == s)   {
                k++;
                paired[i] = paired[j] = true;
                break;
            }
        }
    }
    return k;
}

void solve()
{
    int n;
    cin >> n;
    int w[n];
    for (int i = 0; i < n; i++)
        cin >> w[i];
    if (n == 1)
        cout << 0 << endl;
    else if (n == 2 || n == 3)
        cout << 1 << endl;
    else    {
        sort(w, w + n);
        int min_s = w[0] + w[1];
        int max_s = w[n - 1] + w[n - 2];
        int max_k = 0;
        for (int s = min_s; s <= max_s; s++)
            max_k = max(max_k, calculate_k(w, n, s));
        cout << max_k << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

