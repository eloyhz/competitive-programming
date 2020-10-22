// 
// Codeforces Round #677 (Div. 3) [VIRTUAL]
//
// D. Districts Connection [WA]
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
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] != a[j])  {
                    roads.push_back({i + 1, j + 1});
                }
            }
        }
        if (roads.size() < n - 1)   {
            cout << "NO\n";
        }
        else    {
            cout << "YES\n";
            for (int i = 0; i < roads.size(); i++) {
                cout << roads[i].first << " " << roads[i].second << endl;
            }
        }
    }
    return 0;
}
