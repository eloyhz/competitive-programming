// Given the adjacency list of some graph. Print its representation as the adjacency matrix.

/*

Input 1:
4
1 2 
3 1 3 4 
1 2 
1 2 

Output 1:
3
1 2
2 3
2 4



Input 2:
10
5 2 3 5 6 8 
3 1 3 8 
7 1 2 4 5 8 9 10 
2 3 7 
3 1 3 8 
1 1 
3 4 9 10 
5 1 2 3 5 9 
4 3 7 8 10 
3 3 7 9 

Output 2:
18
1 2
1 3
1 5
1 6
1 8
2 3
2 8
3 4
3 5
3 8
3 9
3 10
4 7
5 8
7 9
7 10
8 9
9 10


*/

#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n;
    cin >> n;
    vector<pair<int, int>> edge_list;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        for (int j = 0; j < m; j++) {
            int a;
            cin >> a;
            if (i + 1 < a)
                edge_list.push_back({i + 1, a});
        }
    }
    sort(edge_list.begin(), edge_list.end());
    cout << edge_list.size() << endl;
    for (auto e : edge_list)
        cout << e.first << " " << e.second << endl;
    return 0;
}