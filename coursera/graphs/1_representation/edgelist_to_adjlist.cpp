// Given the list of edges of some graph. Print its representation as the adjacency list.

#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj_list(n);
    while (m--) {
        int u, v;
        cin >> u >> v;
        adj_list[u - 1].push_back(v);
        adj_list[v - 1].push_back(u);
    }
    for (auto l : adj_list) {
        sort(l.begin(), l.end());
        cout << l.size() << " ";
        for (auto a : l)
            cout << a << " ";
        cout << "\n";
    }
    return 0;
}