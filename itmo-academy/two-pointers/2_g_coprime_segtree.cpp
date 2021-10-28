/*
 *
 * ITMO Academy - Two Pointers Method - Part 2
 * G. Coprime Segment (gcd with segment tree/build optimization)
 * https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/G
 * 28-10-2021
 * 
 */

#include <bits/stdc++.h>

#define DBG(x) cerr << #x << " = " << (x) << endl

using namespace std;
using ll = long long;

ll gcd(ll a, ll b)  {
    return b == 0 ? a : gcd(b, a % b);
}

struct segtree  {
    int size;
    vector<ll> g;

    void init(int n)    {
        size = 1;
        while (size < n)
            size *= 2;
        g.resize(size * 2, 0);
    }

    void build(vector<ll> &a, int x, int lx, int rx)   {
        if (rx - lx == 1)   {
            if (lx < (int)a.size())
                g[x] = a[lx];
            return;
        }
        int m = (rx + lx) / 2;
        int l_child = 2 * x + 1;
        int r_child = 2 * x + 2;
        build(a, l_child, lx, m);
        build (a, r_child, m, rx);
        g[x] = ::gcd(g[l_child], g[r_child]);
    }

    void build(vector<ll> &a)   {
        build(a, 0, 0, size);
    }

    void set(int i, ll v, int x, int lx, int rx)   {
        if (rx - lx == 1)   {
            g[x] = v;
            return;
        }
        int m = (rx + lx) / 2;
        int l_child = 2 * x + 1;
        int r_child = 2 * x + 2;
        if (i < m)
            set(i, v, l_child, lx, m);
        else
            set(i, v, r_child, m, rx);
        g[x] = ::gcd(g[l_child], g[r_child]);
    }

    void set(int i, ll v)   {
        set(i, v, 0, 0, size);
    }

    ll gcd(int l, int r, int x, int lx, int rx)    {
        if (rx <= l || r <= lx)
            return 0LL;
        if (l <= lx && rx <= r)
            return g[x];
        int m = (rx + lx) / 2;
        int l_child = 2 * x + 1;
        int r_child = 2 * x + 2;
        ll l_gcd = gcd(l, r, l_child, lx, m);
        ll r_gcd = gcd(l, r, r_child, m, rx);
        return ::gcd(l_gcd, r_gcd);
    }

    ll gcd(int l, int r)    {
        return gcd(l, r, 0, 0, size);
    }
};

int main()  {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (ll &x : a)
        cin >> x;
    segtree st;
    st.init(n);
    st.build(a);
    int ans = INT_MAX;
    int l = 0;
    for (int r = 1; r <= n; r++) {
        while (st.gcd(l, r) == 1)   {
            ans = min(ans, r - l);
            l++;
        }
    }
    cout << (ans == INT_MAX ? -1 : ans) << endl;
/*    
    for (ll &x : st.g)
        cout << x << " ";
    cout << endl;
    cout << st.gcd(0, 2) << endl;
    cout << st.gcd(0, 3) << endl;
    cout << st.gcd(0, 5) << endl;
    cout << st.gcd(2, 5) << endl;
*/
}