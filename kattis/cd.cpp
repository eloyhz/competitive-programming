// Kattis - CD
// https://open.kattis.com/problems/cd
// 06-09-2021

#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n, m;
    cin >> n >> m;
    while (!(n == 0 && m == 0))    {
        unordered_map <int, int> mp;
        int cd;
        for (int i = 0; i < n; i++) {
            cin >> cd;
            mp[cd]++;
        }
        for (int i = 0; i < m; i++) {
            cin >> cd;
            mp[cd]++;
        }
        int ans = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
            if (it->second > 1)
                ans++;
        cout << ans << endl;

        cin >> n >> m;
    }
}