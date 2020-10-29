//
// Author: eloyhz
// Date: Oct/29/2020
//
// Codeforces (CF510-D2-B) - Fox And Two Dots [AC]
// https://codeforces.com/contest/510/problem/B
//

#include <bits/stdc++.h>

using namespace std;

char a[51][51];
bool v[51][51];
int start_i, start_j;
char color;
int n, m;

bool dfs(int i, int j, int length)  {
    length++;
    if (length >= 4 && i == start_i && j == start_j)
        return true;
    if (v[i][j])    {
        return false;
    }
    v[i][j] = true;
    if (i > 0 && a[i-1][j] == color && dfs(i - 1, j, length))
        return true;
    if (i < n - 1 && a[i+1][j] == color && dfs(i + 1, j, length))
        return true;
    if (j > 0 && a[i][j-1] == color && dfs(i, j - 1, length))
        return true;
    if (j < m - 1 && a[i][j+1] == color && dfs(i, j + 1, length))
        return true;
    return false;
}

bool find_cycle(int i, int j)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            v[i][j] = false;
    color = a[i][j];
    start_i = i;
    start_j = j;
    if (dfs(i, j, 0))
        return true;
    else
        return false;
}

int main()
{
    cin >> n >> m;
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            cin >> a[i][j];
    bool cycle = false;
    for (i = 0; i < n && !cycle; i++)
        for (j = 0; j < m; j++)
            if (find_cycle(i, j))  {
                cycle = true;
                break;
            }
    cout << (cycle ? "Yes" : "No") << endl;

    return 0;
}

