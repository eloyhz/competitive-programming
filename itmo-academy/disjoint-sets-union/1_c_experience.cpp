// ITMO Academy - Disjoint Sets Union
// C. Experience [AC]
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

int find(int a)
{
    if (p[a] != a)  {
        return find(p[a]);
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
        e[b] -= e[a];
    }
    else    {
        p[a] = b;
        e[a] -= e[b];
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
    for (int i = 0; i < m; i++) {
        string q; cin >> q;
        if (q == "join")   {
            int u, v; cin >> u >> v;
            join(u, v);
        }
        else if (q == "add")    {
            int x, v; cin >> x >> v;
            x = find(x);
            e[x] += v;
        }
        else if (q == "get")    {
            int u; cin >> u;
            int x = find(u);
            int ans = e[x];
            while (u != x)   {
                ans += e[u];
                u = p[u];
            }
            cout << ans << "\n";
        }
    }
    return 0;
}

