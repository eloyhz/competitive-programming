// ITMO Academy - Segment Tree - Part 1
// C. Number of Minimums on a Segment
// https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/C
// 28-10-2021

#include <bits/stdc++.h>

using namespace std;
using pii = pair<int, int>;

struct segtree  {
    int size;
    vector<pii> mc;

    void init(int n)    {
        size = 1;
        while (size < n)
            size *= 2;
        mc.resize(size * 2, {0, 0});
    }

    pii min_count(pii a, pii b) {
        if (a.first < b.first)
            return a;
        if (a.first > b.first)
            return b;
        return {a.first, a.second + b.second};
    }

    void build(vector<int> &a, int x, int lx, int rx)  {
        if (rx - lx == 1)   {
            if (lx < (int)a.size())
                mc[x] = {a[lx], 1};
            return;
        }
        int m = (rx + lx) / 2;
        int l_child = 2 * x + 1;
        int r_child = 2 * x + 2;
        build(a, l_child, lx, m);
        build(a, r_child, m, rx);
        mc[x] = min_count(mc[l_child], mc[r_child]);
    }

    void build(vector<int> &a)  {
        build(a, 0, 0, size);
    }

    void set(int i, int v, int x, int lx, int rx)  {
        if (rx - lx == 1)   {
            mc[x] = {v, 1};
            return;
        }
        int m = (lx + rx) / 2;
        int l_child = 2 * x + 1;
        int r_child = 2 * x + 2;
        if (i < m)
            set(i, v, l_child, lx, m);
        else
            set(i, v, r_child, m, rx);
        mc[x] = min_count(mc[l_child], mc[r_child]);
    }

    void set(int i, int v)  {
        set(i, v, 0, 0, size);
    }

    pii min(int l, int r, int x, int lx, int rx)    {
        if (rx <= l || r <= lx)
            return {INT_MAX, 0};
        if (l <= lx && rx <= r)
            return mc[x];
        int m = (rx + lx) / 2;
        int l_child = 2 * x + 1;
        int r_child = 2 * x + 2;
        pii l_mc = min(l, r, l_child, lx, m);
        pii r_mc = min(l, r, r_child, m, rx);
        return min_count(l_mc, r_mc);
    }

    pair<int, int> min(int l, int r)    {
        return min(l, r, 0, 0, size);
    }
};

int main()  {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    segtree st;
    st.init(n);
    st.build(a);
    while(m--)  {
        int op;
        cin >> op;
        if (op == 1)    {
            int i, v;
            cin >> i >> v;
            st.set(i, v);
        }
        else if (op == 2)   {
            int l, r;
            cin >> l >> r;
            pii ans = st.min(l, r);
            cout << ans.first << " " << ans.second << endl;
        }
    }
}