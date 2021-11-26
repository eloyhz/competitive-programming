#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, int>> tasks(n);
    for (auto &t : tasks)   
        cin >> t.first >> t.second;
    sort(tasks.begin(), tasks.end());
    ll ans = 0;
    ll current = 0;
    for (auto &t : tasks)   {
        current += t.first;
        ans += t.second - current;
    }
    cout << ans << endl;
}