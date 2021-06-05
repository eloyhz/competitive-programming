// Given a graph represented by its adjacency matrix. Print its representation as the edge list.

#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n;
    cin >> n;
    vector<pair<int, int>> edge_list;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++) {
            if (s[j] == '1' && i < j)
                edge_list.push_back({i + 1, j + 1});
        }
    }
    sort(edge_list.begin(), edge_list.end());
    cout << edge_list.size() << endl;
    for (auto e : edge_list)
        cout << e.first << " " << e.second << endl;
    return 0;
}