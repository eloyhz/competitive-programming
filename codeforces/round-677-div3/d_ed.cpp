// 
// Codeforces Round #677 (Div. 3) [VIRTUAL]
// 
// D. Districts Connection [AC w/editorial]
// https://codeforces.com/contest/1433/problem/D
//
// Author: eloyhz
// Date: Oct/21/2020
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<pair<int, int>> roads;
        for (int i = 1; i < n; i++) {
            if (a[0] != a[i])  {
                roads.push_back({1, i + 1});
            }
        }
        if (roads.size() == 0)  {
            cout << "NO\n";
        }
        else    {
            cout << "YES\n";
            int b = roads[0].second;
            for (int i = 1; i < n; i++) {
                if (a[i] == a[0])   {
                    roads.push_back({i + 1, b});
                }
            }
            for (auto x : roads)    {
                cout << x.first << " " << x.second << endl;
            }
        }
    }
    return 0;
}
