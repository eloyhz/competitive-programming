/*

CSES - Playlist
https://cses.fi/problemset/task/1141
Date: 13/05/21

https://youtu.be/gcNPpUVTmAM?t=5669

*/

#include <bits/stdc++.h>

using namespace std;

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    map<int, int> mp;
    int n;
    cin >> n;
    int ans = 0;
    int start = 0;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        if (mp.find(k) != mp.end()) 
            start = max(start, mp[k] + 1);
        mp[k] = i;
        ans = max(ans, i - start + 1);
    }
    cout << ans << "\n";
    return 0;
}