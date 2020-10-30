//
// UVa 10685 - Nature
// https://onlinejudge.org/external/106/10685.pdf
//
// Author: eloyhz
// Date: Oct/30/2020
//

#include <bits/stdc++.h>

using namespace std;

vector<int> p;
vector<int> size;
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
    p[b] = a;
    size[a] += size[b];
    largest = max(largest, size[a]);
}

void solve(int c, int r)
{
    p.resize(c + 1);
    iota(p.begin(), p.end(), 0);
    size.resize(c + 1);
    fill(size.begin(), size.end(), 1);
    largest = 1;
    map<string, int> mc;
    for (int i = 1; i <= c; i++)    {
        string creature;
        cin >> creature;
        mc[creature] = i;
    }
    for (int i = 1; i <= r; i++)    {
        string c1, c2;
        cin >> c1 >> c2;
        join(mc[c1], mc[c2]);
    }
    cout << largest << endl;
}

int main()
{
    while (true)    {
        int c, r;
        cin >> c >> r;
        if (c == 0 && r == 0)
            break;
        solve(c, r);
        string blank;
        getline(cin, blank);
    }
    return 0;
}
