// ITMO Academy - Segment Tree - Part 1
// B. Segment Tree for the Minimum
// https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/B
// 27-10-2021

#include <bits/stdc++.h>

using namespace std;

struct segtree  {
    int size;
    vector<int> mn;

    void init(int n)    {
        size = 1;
        while (size < n)
            size *= 2;
        mn.assign(2 * size, 0);    
    }

    void set(int i, int v, int x, int lx, int rx)   {
        if (rx - lx == 1)   {
            mn[x] = v;
            return;
        }
        int m = (lx + rx) / 2;
        int l_child = 2 * x + 1;
        int r_child = 2 * x + 2;
        if (i < m)  {
            set(i, v, l_child, lx, m);
        }
        else    {
            set(i, v, r_child, m, rx);
        }
        mn[x] = ::min(mn[l_child], mn[r_child]);
    }

    void set(int i, int v)  {
        set(i, v, 0, 0, size);
    }

    int min(int l, int r, int x, int lx, int rx)  {
        if (r <= lx || rx <= l)
            return INT_MAX;
        if (l <= lx && rx <= r)
            return mn[x];
        int m = (lx + rx) / 2;
        int l_child = 2 * x + 1;
        int r_child = 2 * x + 2;
        int l_min = min(l, r, l_child, lx, m);
        int r_min = min(l, r, r_child, m, rx);
        return ::min(l_min, r_min);
    }

    int min(int l, int r)  {
        return min(l, r, 0, 0, size);
    }
};

int main()  {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    segtree st;
    st.init(n);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        st.set(i, a);
    }
    while (m--) {
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
            cout << st.min(l, r) << endl;
        }
    }
}