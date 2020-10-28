//
// Codeforces Round #653 (Div. 3) [VIRTUAL]
//
// E1. Reading Books (easy version) [WA]
// https://codeforces.com/contest/1374/problem/E1
//
// Author: eloyhz
// Date: Oct/27/2020
//

#include <bits/stdc++.h>

using namespace std;

struct book {
    int t;
    int a;
    int b;
    bool operator < (book& o)   {
        return t < o.t;
    }
};

int main()
{
    int n, k; cin >> n >> k;
    book b[n];
    for (int i = 0; i < n; i++)
        cin >> b[i].t >> b[i].a >> b[i].b;
    sort(b, b + n);
    int t = 0;
    for (int i = 0; i < n; i++) {
        if (b[i].a == 1 && b[i].b == 1) {
            k--;
            t += b[i].t;
            if (k == 0) break;
        }
    }
    if (k == 0) {
        cout << t << endl;
        return 0;
    }
    int ka = k;
    int kb = k;
    for (int i = 0; i < n; i++) {
        if (b[i].a == 1 && b[i].b == 0) {
            ka--;
            t += b[i].t;
            if (ka == 0) break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (b[i].a == 0 && b[i].b == 1) {
            kb--;
            t += b[i].t;
            if (kb == 0) break;
        }
    }
    if (ka == 0 && kb == 0) {
        cout << t << endl;
    }
    else    {
        cout << -1 << endl;
    }


    return 0;
}

