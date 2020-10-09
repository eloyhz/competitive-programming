//
// Author: eloyhz
// Date: Oct/09/2020
//
// Codeforces (CF352-D2-B) - Jeff and Periods
// https://codeforces.com/contest/352/problem/B
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)    {
        cin >> a[i];
    }
    map<int, tuple<int, int, int>> mp; // [x] -> {px, last_i, count_i}
    for (int i = 1; i <= n; i++)    {
        if (mp.count(a[i]) == 0)   {
            mp[a[i]] = {0, i, 1};
        }
        else    {
            int px, last_i, count_i;
            tie(px, last_i, count_i) = mp[a[i]];
            if (count_i == 1)   {
                get<0>(mp[a[i]]) = i - last_i;
            }
            else if (i - last_i != px)   {
                get<0>(mp[a[i]]) = -1;
            }
            get<1>(mp[a[i]]) = i;
            get<2>(mp[a[i]])++;
        }
    }
    vector<pair<int, int>> ans;
    for (auto x = mp.begin(); x != mp.end(); ++x)   {
        int px, last_i, count_i;
        tie(px, last_i, count_i) = x->second;
        if (px >= 0) {
            ans.push_back({x->first, px});
        }
    }
    cout << ans.size() << endl;
    for (auto x : ans)  {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}

