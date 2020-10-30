//
// UVa 10608 - Friends
// https://onlinejudge.org/external/106/10608.pdf
//
// Author: eloyhz
// Date: Oct/30/2020
//

#include <iostream>

using namespace std;

const int MAX = 30000;

int p[MAX + 1];
int r[MAX + 1];
int size[MAX + 1];
int largest;

int find(int x)
{
    while (x != p[x])
        x = p[x];
    return x;
}

void join(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a == b)
        return;
    if (r[a] == r[b])
        r[a]++;
    if (r[a] > r[b])    {
        p[b] = a;
        size[a] += size[b];
        largest = max(largest, size[a]);
    }
    else    {
        p[a] = b;
        size[b] += size[a];
        largest = max(largest, size[b]);
    }

}

void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)    {
        p[i] = i;
        r[i] = i;
        size[i] = 1;
    }
    largest = 1;
    for (int i = 1; i <= m; i++)    {
        int a, b;
        cin >> a >> b;
        join(a, b);
    }
    cout << largest << endl;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)    {
        solve();
    }
    return 0;
}
