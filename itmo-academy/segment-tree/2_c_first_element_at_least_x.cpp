/*
 * ITMO Academy - Segment Tree - Part 1 - Step 2
 * C. First element at least X
 * https://codeforces.com/edu/course/2/lesson/4/2/practice/contest/273278/problem/C
 * 
 * 31-10-2021
 */

#include <bits/stdc++.h>

using namespace std;

struct  segtree {
    int size;
    vector<int> values;
    void init(int n)    {
        size = 1;
        while (size < n)
            size *= 2;
        values.resize(size * 2);
    }

    void build(vector<int> &a, int x, int lx, int rx)  {
        if (lx + 1 == rx)   {
            if (lx < (int)a.size())
                values[x] = a[lx];
            return;
        }
        int m = (lx + rx) / 2;
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);
        values[x] = max(values[2 * x + 1], values[2 * x + 2]);
    }

    void build(vector<int> &a)  {
        build(a, 0, 0, size);
    }

    void set(int i, int v, int x, int lx, int rx)  {
        if (lx + 1 == rx)   {
            values[x] = v;
            return;
        }
        int m = (lx + rx) / 2;
        if (i < m)
            set(i, v, 2 * x + 1, lx, m);
        else
            set(i, v, 2 * x + 2, m, rx);
        values[x] = max(values[2 * x + 1], values[2 * x + 2]);
    }

    void set(int i, int v)  {
        set(i, v, 0, 0, size);
    }

    int first_at_least(int v, int x, int lx, int rx)   {
        if (values[x] < v)  {
            return -1;
        }
        if (lx + 1 == rx)   {
            return lx;
        }
        int m = (lx + rx) / 2;
        int s1 = values[2 * x + 1];
        if (v <= s1)
            return first_at_least(v, 2 * x + 1, lx, m);
        else
            return first_at_least(v, 2 * x + 2, m, rx);
    }

    int first_at_least(int v)   {
        return first_at_least(v, 0, 0, size);
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
    while (m--) {
        int op;
        cin >> op;
        if (op == 1)    {
            int i, v;
            cin >> i >> v;
            st.set(i, v);
        }
        else if (op == 2)   {
            int x;
            cin >> x;
            cout << st.first_at_least(x) << endl;
        }
    }
}