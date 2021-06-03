// Codeforces (CF672-D2-B) - Different is Good [AC]
// https://codeforces.com/contest/672/problem/B
// Date: 03/06/21
// 

#include <bits/stdc++.h>

using namespace std;

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s;
    unordered_map<char, int> mp;

    cin >> n >> s;
    for (char c : s)
        mp[c]++;
    long long ans = 0;
    for (auto it = mp.begin(); it != mp.end(); it++)
        ans += it->second - 1;
    cout << (ans + mp.size() <= 26 ? ans : -1) << endl;
    return 0;
}

