// Given the adjacency list of some graph. Print its representation as the adjacency matrix.

/*

Input 1:
4
1 2 
3 1 3 4 
1 2 
1 2 

Output 1:
0100
1011
0100
0100


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
0110110100
1010000100
1101100111
0010001000
1010000100
1000000000
0001000011
1110100010
0010001101
0010001010

*/

#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n;
    cin >> n;
    int adj[n][n] = {};
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        for (int j = 0; j < m; j++) {
            int a;
            cin >> a;
            adj[i][a - 1] = 1;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << adj[i][j];
        cout << "\n";
    }
    return 0;
}