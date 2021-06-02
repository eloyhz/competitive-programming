// Codeforces (CF796-D2-B) - Find The Bone [AC]
// https://codeforces.com/contest/796/problem/B
// Date: 01/06/21
// 


#include <bits/stdc++.h>

using namespace std;

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    vector<bool> has_hole(n + 1, false);
    for (int i = 0; i < m; i++) {
        int h;
        cin >> h;
        has_hole[h] = true;
    }
    int current = 1;
    bool in_hole = has_hole[1];
    while (k--) {
        int u, v;
        cin >> u >> v;
        if (in_hole)
            continue;
        if (u == current)
            current = v;
        else if (v == current)
            current = u;
        if (has_hole[current])
            in_hole = true;
    }
    cout << current << "\n";
    return 0;
}
