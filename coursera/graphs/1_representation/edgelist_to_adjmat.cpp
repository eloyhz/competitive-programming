// Given the list of edges of some graph. Print its representation as the adjacency matrix.

#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n, m;
    cin >> n >> m;
    int adj[n][n] = {};
    while (m--) {
        int u, v;
        cin >> u >> v;
        adj[u - 1][v - 1] = 1;
        adj[v - 1][u - 1] = 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << adj[i][j];
        cout << "\n";
    }
    return 0;
}