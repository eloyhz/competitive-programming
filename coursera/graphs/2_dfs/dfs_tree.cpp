// Given a connected undirected graph represented as a list of edges,
// obtain the DFS tree on this graph.

#include <bits/stdc++.h>

using namespace std;

vector<vector<pair<int, int>>> adj;
vector<bool> visited;
vector<int> ans;

void dfs(int v) {
    visited[v] = true;
    for (pair<int, int> x : adj[v])    {
        int u = x.first;
        int edge = x.second;
        if (visited[u])
            continue;
        ans.push_back(edge);
        dfs(u);
    }
}

int main()  {
    int n, m;
    cin >> n >> m;
    adj.resize(n + 1);
    visited.resize(n + 1);
    for (int i = 1; i <= m; i++)    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back({v, i});
        adj[v].push_back({u, i});
    }
    dfs(1);
    cout << ans.size() << endl;
    for (int a : ans)
        cout << a << " ";
    cout << "\n";
    return 0;
}