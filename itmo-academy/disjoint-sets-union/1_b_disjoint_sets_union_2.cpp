// ITMO Academy - Disjoint Sets Union
// B. Disjoint Sets Union 2 [AC]
// https://codeforces.com/edu/course/2/lesson/7/1/practice/contest/289390/problem/B
//
// Author: eloyhz
// Date: 28/oct/2020
//

#include <bits/stdc++.h>

using namespace std;

vector<int> p;
vector<int> r;
vector<int> min_elem;
vector<int> max_elem;
vector<int> count_elem;

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
        min_elem[a] = min(min_elem[a], min_elem[b]);
        max_elem[a] = max(max_elem[a], max_elem[b]);
        count_elem[a] += count_elem[b];
    }
    else    {
        p[a] = b;
        min_elem[b] = min(min_elem[a], min_elem[b]);
        max_elem[b] = max(max_elem[a], max_elem[b]);
        count_elem[b] += count_elem[a];
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
    min_elem.resize(n + 1);
    iota(min_elem.begin(), min_elem.end(), 0);
    max_elem.resize(n + 1);
    iota(max_elem.begin(), max_elem.end(), 0);
    r.resize(n + 1, 1);
    count_elem.resize(n + 1, 1);
    for (int i = 0; i < m; i++) {
        string q; cin >> q;
        if (q == "union")   {
            int u, v; cin >> u >> v;
            join(u, v);
        }
        else if (q == "get")    {
            int u; cin >> u;
            u = find(u);
            cout << min_elem[u] << " " << max_elem[u] << " " << count_elem[u] << "\n";
        }
    }
    return 0;
}

