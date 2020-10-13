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
int numcc;
int cc[MAX + 1];
bool visited[MAX + 1];
vector<int> g[MAX + 1];

void dfs(int u)
{
    visited[u] = true;
    cc[u] = numcc;
    for (auto v : g[u]) {
        if (visited[v]) {
            continue;
        }
        dfs(v);
    }
}

int compute_cc()
{
    numcc = 0;
    for (int u = 1; u <= n; u++)    {
        if (visited[u]) {
            continue;
        }
        numcc++;
        dfs(u);
    }
    return numcc;
}
    

int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int v = compute_cc();
    cout << (1LL << (n - v)) << endl;
    return 0;
}

