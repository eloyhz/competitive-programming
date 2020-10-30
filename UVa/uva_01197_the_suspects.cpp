//
// UVa 01197 - The Suspects
// https://onlinejudge.org/external/11/1197.pdf
//
// Author: eloyhz
// Date: Oct/30/2020
//

#include <bits/stdc++.h>

using namespace std;

const int MAX = 30000;
int p[MAX + 1];
int r[MAX + 1];
int size[MAX + 1];

int find(int x)
{
    return x == p[x] ? x : p[x] = find(p[x]);
}

void join(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a == b)
        return;
    if (r[a] < r[b])
        swap(a, b);
    if (r[a] == r[b])
        r[a]++;
    p[b] = a;
    size[a] += size[b];
}

void solve(int n, int m)
{
    iota(p, p + n + 1, 0);
    fill(r, r + n + 1, 0);
    fill(size, size + n + 1, 1);
    for (int i = 1; i <= m; i++)    {
        int k;
        cin >> k;
        int first;
        if (k > 0)
            cin >> first;
        for (int i = 2; i <= k; i++)    {
            int another;
            cin >> another;
            join(first, another);
        }
    }
    cout << size[find(0)] << endl;
}

int main()
{
    while (true)    {
        int n, m;
        cin >> n >> m;
        if (n == 0 && m == 0)
            break;
        solve(n, m);
    }
    return 0;
}
