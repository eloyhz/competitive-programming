// Given a connected undirected graph represented as a list of edges. Count the number of back edges in this graph.
// [WA]

#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
set<int> recursion;
int back = 0;
int ant = 0;
vector<pair<int,int>> b;

void dfs(int v) {
    visited[v] = true;
    recursion.insert(v);
    for (int u : adj[v])    {
        if (visited[u]) {
            if (u != ant && recursion.find(u) != recursion.end())   {
                b.push_back({v, u});
                back++;
            }
            continue;
        }
        ant = v;
        dfs(u);
    }
    ant = v;
    recursion.erase(v);
}

int main()  {
    int n, m;
    cin >> n >> m;
    adj.resize(n + 1);
    visited.resize(n + 1);
    while (m--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    cout << back << endl;
    return 0;
}