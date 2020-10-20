//
// Author: eloyhz
// Date: Oct/20/2020
//
// Codeforces (CF791-D2-B) - Bear and Friendship Condition
// https://codeforces.com/contest/791/problem/B
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    set<int> g[n + 1];
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        g[a].insert(b);
        g[b].insert(a);
    }
    bool reasonable = true;
    for (int x = 1; x <= n; x++)    {
        for (auto y = g[x].begin(); y != g[x].end(); y++)   {
            for (auto z = g[*y].begin(); z != g[*y].end(); z++) {
                if (*z == x)    {
                    continue;
                }
                if (g[*z].find(x) == g[*z].end())   {
                    reasonable = false;
                    break;
                }
            }
        }
        if (!reasonable)    {
            break;
        }
    }
    cout << (reasonable ? "YES" : "NO") << endl;
    return 0;
}

