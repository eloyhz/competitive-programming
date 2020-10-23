//
// Author: eloyhz
// Date: Oct/23/2020
//
// Codeforces (CF456-D2-A) - Laptops
// https://codeforces.com/contest/456/problem/A
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    pair<int, int> laps[n];
    for (int i = 0; i < n; i++)
        cin >> laps[i].first >> laps[i].second;
    sort(laps, laps + n);
    bool dima_is_ok = true;
    for (int i = 0; i < n - 1; i++) {
        if (laps[i].second > laps[i + 1].second)    {
            dima_is_ok = false;
            break;
        }
    }
    cout << (dima_is_ok ? "Poor " : "Happy ") << "Alex" << endl;

    return 0;
}

