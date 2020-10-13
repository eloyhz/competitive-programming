//
// Author: eloyhz
// Date: Oct/13/2020
//
// Codeforces (CF445-D2-B) - DZY Loves Chemistry
// https://codeforces.com/contest/445/problem/B
//

#include <bits/stdc++.h>

using namespace std;
const int MAX = 50;

int n, m;
vector<int> g[MAX + 1];

int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int p[n];
    for (int i = 0; i < n; ++i) {
        p[i] = i + 1;
    }
    vector<int> d;
    do  {
        int danger = 1;
        set<int> tube;
        tube.insert(p[0]);
        for (int i = 1; i < n; ++i) {
            int u = p[i];
            for (auto v : g[u]) {
                if (tube.find(v) != tube.end()) {
                    danger *= 2;
                    break;
                }
            }
            tube.insert(u);
        }
        d.push_back(danger);
    }   while (next_permutation(p, p + n));
    int max_d = *max_element(d.begin(), d.end());
    int ans = count(d.begin(), d.end(), max_d);
    cout << ans << endl;
    return 0;
}

