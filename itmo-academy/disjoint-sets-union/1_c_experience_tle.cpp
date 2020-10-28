// ITMO Academy - Disjoint Sets Union
// C. Experience [TLE]
// https://codeforces.com/edu/course/2/lesson/7/1/practice/contest/289390/problem/C
//
// Author: eloyhz
// Date: 28/oct/2020
//

#include <bits/stdc++.h>

using namespace std;

vector<int> p;
vector<int> r;
vector<int> e;
vector<vector<int>> l;

int find(int a)
{
    if (p[a] != a)  {
        p[a] = find(p[a]);
    }
    return p[a];
}

bool join(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a == b)
        return false;
    if (r[a] == r[b])
        r[a]++;
    if (r[a] > r[b])    {
        p[b] = a;
        l[a].insert(l[a].end(), l[b].begin(), l[b].end());
    }
    else    {
        p[a] = b;
        l[b].insert(l[b].end(), l[a].begin(), l[a].end());
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    p.resize(n + 1);
    iota(p.begin(), p.end(), 0);
    r.resize(n + 1, 1);
    e.resize(n + 1, 0);
    l.resize(n + 1);
    for (int x = 0; x <= n; x++)    {
        l[x].push_back(x);
    }
    for (int i = 0; i < m; i++) {
        string q; cin >> q;
        if (q == "join")   {
            int u, v; cin >> u >> v;
            join(u, v);
        }
        else if (q == "add")    {
            int x, v; cin >> x >> v;
            x = find(x);
            for (auto u : l[x])
                e[u] += v;
        }
        else if (q == "get")    {
            int u; cin >> u;
            cout << e[u] << "\n";
        }
    }
    return 0;
}

