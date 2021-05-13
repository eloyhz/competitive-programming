/*

CSES - Movie Festival
https://cses.fi/problemset/task/1629
Date: 12/05/21

*/

#include <bits/stdc++.h>

using namespace std;

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<int, int>> movies(n);
    // first = ending time
    // second = starting time
    for (int i = 0; i < n; i++) 
        cin >> movies[i].second >> movies[i].first;
    // sort by ending time
    sort(movies.begin(), movies.end());
    int ans = 0;
    int starting_time = 0;
    for (int i = 0; i < n; i++) {
        if (movies[i].second < starting_time)
            continue;
        starting_time = movies[i].first;
        ans++;
    }
    cout << ans << "\n";
    return 0;
}