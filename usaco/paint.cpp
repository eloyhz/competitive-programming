// USACO 2015 December Contest, Bronze
// Problem 1. Fence Painting
// http://www.usaco.org/index.php?page=viewproblem2&cpid=567
// 22-09-2021

#include <bits/stdc++.h>

using namespace std;

void set_io(string s)   {
    freopen((s+".in").c_str(), "r", stdin);
    freopen((s+".out").c_str(), "w", stdout);
}

int main()  {
    set_io("paint");
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    if (a > c)  {
        swap(a, c);
        swap(b, d);
    }
    if (a <= c && d <= b)
        cout << b - a << endl;
    else if (c <= b)
        cout << d - a << endl;
    else 
        cout << b - a + d - c << endl;
}