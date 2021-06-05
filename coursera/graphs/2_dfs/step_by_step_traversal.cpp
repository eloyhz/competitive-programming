#include <bits/stdc++.h>

using namespace std;

vector<int> traversal;
vector<vector<int>> adj;
vector<bool> visited;

void dfs(int s) {
    visited[s] = true;
    if (traversal.empty())
        traversal.push_back(s);
    else {
        auto it = find(adj[traversal.back()].begin(), adj[traversal.back()].end(), s);
        if (it != adj[traversal.back()].end())
            traversal.push_back(s);
    }
    for (auto v : adj[s])   {
        if (visited[v])
            continue;
        dfs(v);
    }
}

int main()  {
    int n, m, start;
    cin >> n >> m >> start;
    adj.resize(n + 1);
    visited.resize(n + 1);
    fill(visited.begin(), visited.end(), false);
    while (m--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(start);
    auto it = find(adj[traversal.back()].begin(), adj[traversal.back()].end(), start);
    if (it != adj[traversal.back()].end())
        traversal.push_back(start);
    else    {
        for (int i = traversal.size() - 2; i >= 0; --i)
            traversal.push_back(traversal[i]);
    }
    cout << traversal.size() << endl;
    for (auto v : traversal)
        cout << v << " ";
    cout << "\n";
    return 0;
}