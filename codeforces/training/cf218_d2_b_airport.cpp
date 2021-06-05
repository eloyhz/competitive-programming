// Codeforces (CF218-D2-B) - Airport [AC]
// https://codeforces.com/contest/218/problem/B
// Date: 05/06/21


#include <bits/stdc++.h>

using namespace std;

int gauss(int x)    {
    return x * (x + 1) / 2;
}

int gauss_range(int a, int b)   {
    return (a + b) * (b - a + 1) / 2;
}

void solve_fail(int n, int m, vector<int>& a)    {
    int min_zlotys, max_zlotys;
    int x;
    sort(a.begin(), a.end());
    int i = 0;
    min_zlotys = 0;
    int r = n;
    while (r > 0 && i < m)   {
        if (r >= a[i])  {
            x = a[i];
            r -= x;
            min_zlotys += gauss(x);
        }
        else {
            min_zlotys += gauss_range(a[i] - r + 1, a[i]);
            r = 0;
        }
        i++;
    }
    max_zlotys = 0;
    r = n;
    i = n - 1;
    while (r > 0 && i > 1)   {
        x = a[i] - a[i - 1] + 1;
        a[i] -= x;
        max_zlotys += gauss_range(a[i], a[i] + x);
        r -= x;
        --i;
    }

    cout << max_zlotys << " " << min_zlotys << endl;
}

void solve(int n, int m, vector<int>& a)    {
    int min_zlotys = 0, max_zlotys = 0;
    priority_queue<int> maxpq(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        int x = maxpq.top();
        maxpq.pop();
        max_zlotys += x;
        if (--x > 0)
            maxpq.push(x);
    }
    priority_queue<int> minpq;
    for (int x : a)
        minpq.push(-x);
    for (int i = 0; i < n; i++) {
        int x = -minpq.top();
        minpq.pop();
        min_zlotys += x;
        if (--x > 0)
            minpq.push(-x);
    }
    cout << max_zlotys << " " << min_zlotys << endl;
}

int main()  {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
        cin >> a[i];
    solve(n, m, a);
    return 0;
}


/*

1  2  3  3  10
1  3  6  9
1  3  6  6  

1 - 1
2 - 2
3 - 1
4 - 3
5 - 2
6 - 1
7 - 3
8 - 2
9 - 1
10 - 10
-------
26

10 3 3 2 1
1 - 10
2 - 9
3 - 8
4 - 7
5 - 6
6 - 5
7 - 4
8 - 3
9 - 3
10 - 3
--------
58

*/