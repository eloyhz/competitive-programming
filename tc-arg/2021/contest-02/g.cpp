/*
 *
 * Training Camp Argentina - 2021
 * Contest #2 - G. Triangle
 * https://codeforces.com/group/gXivUSZQpn/contest/337396/problem/G
 * 18/10/21
 * 
 */

#include <bits/stdc++.h>

using namespace std;

#define DBG(x) cerr << #x << " = " << (x) << endl
#define DBGY(x) cerr << #x << " = " << (x) << " , "

int check(int a, int b, int c)  {
    int v1, v2, v3;
    v1 = a + b - c;
    v2 = a + c - b;
    v3 = b + c - a;
    if (v1 > 0 && v2 > 0 && v3 > 0)
        return 1;
    else if (v1 == 0 || v2 == 0 || v3 == 0)
        return 0;
    else
        return -1;
}

void solve()    {
    int l1, l2, l3, l4;
    cin >> l1 >> l2 >> l3 >> l4;
    int c1, c2, c3, c4;
    c1 = check(l1, l2, l3);
    c2 = check(l1, l2, l4);
    c3 = check(l1, l3, l4);
    c4 = check(l2, l3, l4);
    if (c1 > 0 || c2 > 0 || c3 > 0 || c4 > 0)
        cout << "TRIANGLE\n";
    else if (c1 == 0 || c2 == 0 || c3 == 0 || c4 == 0)
        cout << "SEGMENT\n";
    else
        cout << "IMPOSSIBLE\n";
}

int main()  {
    solve();
}