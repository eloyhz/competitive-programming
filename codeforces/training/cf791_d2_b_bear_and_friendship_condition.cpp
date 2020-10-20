//
// Author: eloyhz
// Date: Oct/20/2020
//
// Codeforces (CF791-D2-B) - Bear and Friendship Condition
// https://codeforces.com/contest/791/problem/B
//
// Editorial: count vertices and edges in each connected component
//            it's a clique if and only if 
//              edges = vertices * (vertices - 1) / 2

#include <bits/stdc++.h>

using namespace std;

const int MAX = 150000;
vector<int> g[MAX + 1];
bool visited[MAX + 1];
int n, m;
long long edges, vertices;

void explore(int v) {
    visited[v] = true;
    vertices++;
    for (auto u : g[v]) {
        edges++;
        if (!visited[u])    {
            explore(u);
        }
    }
}

bool dfs()
{
    for (int v = 1; v <= n; v++)    {
        if (!visited[v])    {
            edges = vertices = 0;
            explore(v);
            edges /= 2;
            if (edges != vertices * (vertices - 1) / 2)  {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    memset(visited, false, sizeof visited);
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    cout << (dfs() ? "YES" : "NO") << endl;
    return 0;
}

