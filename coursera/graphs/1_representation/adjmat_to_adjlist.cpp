// Given a graph represented by its adjacency matrix. Print its representation as the adjacency list.

#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n;
    cin >> n;
    vector<vector<int>> adj_list(n);
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++) {
            if (s[j] == '1')
                adj_list[i].push_back(j + 1);
        }
    }
    for (auto l : adj_list) {
        cout << l.size() << " ";
        for (auto a : l)
            cout << a << " ";
        cout << "\n";
    }
    return 0;
}

