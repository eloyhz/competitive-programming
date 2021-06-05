// Given the list of edges of an undirected graph,
// determine all its connected components.

#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adj;
vector<int> comp;
vector<bool> visited;
int cc = 0;

void dfs(int v) {
    visited[v] = true;
    comp[v] = cc;
    for (auto u : adj[v])   {
        if (visited[u])
            continue;
        dfs(u);
    }
}

int main()  {
    int n, m;
    cin >> n >> m;
    adj.resize(n + 1);
    comp.resize(n + 1);
    visited.resize(n + 1);
    while (m--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)    {
        if (visited[i])
            continue;
        cc++;
        dfs(i);
    }
    cout << cc << endl;
    for (int i = 1; i <= n; i++)
        cout << comp[i] << " ";
    cout << "\n";
    return 0;
}