#include <bits/stdc++.h>

using namespace std;

vector<int> p;
vector<int> r;
vector<list<int>> l;
vector<int> size;
vector<int> sum;

int find(int x)
{
    return x == p[x] ? x : p[x] = find(p[x]);
}

void move(int a, int b)
{
    if (a != p[a])  {
        sum[find(a)] -= a;
        size[find(a)]--;
        b = find(b);
        p[a] = b;
        sum[b] += a;
        size[b]++;
    }
    else    {
        int nr;
        for (auto x : l[a])
            if (x != a) {
                nr = x;
                break;
            }
        l[a].remove(a);
        l[nr] = l[a];
        l[a].clear();
        for (auto x : l[nr])
            p[x] = nr;

        sum[nr] = sum[a] - a;
        size[nr] = size[a] - 1;
        b = find(b);
        p[a] = b;
        sum[b] += a;
        size[b]++;
        
    }
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
    sum[a] += sum[b];
    l[a].insert(l[a].end(), l[b].begin(), l[b].end());
    l[b].clear();
    size[b] = 1;
    sum[b] = b;
}

void solve(int n, int m)
{
    p.resize(n + 1);
    iota(p.begin(), p.end(), 0);
    r.resize(n + 1);
    fill(r.begin(), r.end(), 0);
    l.resize(n + 1);
    for (int i = 0; i <= n; i++)
        l[i].push_back(i);
    size.resize(n + 1);
    fill(size.begin(), size.end(), 1);
    sum.resize(n + 1);
    iota(sum.begin(), sum.end(), 0);
    for (int i = 1; i <= m; i++)    {
        int c, p, q;
        cin >> c >> p;
        if (c <= 2)
            cin >> q;
        switch(c)   {
            case 1: join(p, q); break;
            case 2: move(p, q); break;
            case 3: cout << size[find(p)] << " " << sum[find(p)] << endl; 
            break; 
        }
    }
}


int main()
{
    int n, m;
    while (cin >> n >> m)   {
        solve(n, m);
    }
    return 0;
}
