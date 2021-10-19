/*

CSES - Josephus Problem I

https://cses.fi/problemset/submit/2162/
Date: 18/10/21

Author: eloyhz

*/


#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, less<int>, rb_tree_tag, 
    tree_order_statistics_node_update> indexed_set;

void solve_with_set(int n)  {
    set<int> s;
    for (int i = 1; i <= n; i++)    {
        s.insert(i);
    }
    auto it = s.begin();
    while (!s.empty())  {
        auto r = next(it);
        if (r == s.end())
            r = s.begin();
        it = next(r);
        if (it == s.end())
            it = s.begin();
        cout << *r << " ";
        s.erase(r);
    }
    cout << endl;
}

void solve_with_indexed_set(int n)  {
    indexed_set s;
    for (int i = 1; i <= n; i++)    {
        s.insert(i);
    }
    /*
    // for-each
    for (auto &x : s)   {
        cout << x << endl;
    }
    // access by index
    for (int i = 0; i < n; i++)    {
        auto x = s.find_by_order(i);
        cout << *x << endl;
    }
    */
   int i = 0;
   while (!s.empty())   {
       n = s.size();
       i = (i + 1) % n;
       auto x = s.find_by_order(i);
       cout << *x << " ";
       s.erase(x);
   }
   cout << endl;
}

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    solve_with_set(n);
    solve_with_indexed_set(n);
}
