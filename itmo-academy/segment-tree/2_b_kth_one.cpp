/*
 * ITMO Academy - Segment Tree - Part 1 - Step 2
 * B. K-th one
 * https://codeforces.com/edu/course/2/lesson/4/2/practice/contest/273278/problem/B
 * 
 * 30-10-2021
 */

#include <bits/stdc++.h>

using namespace std;

struct segtree {
    int size;
    vector<int> values;

    void init(int n)    {
        size = 1;
        while (size < n)
            size *= 2;
        values.resize(size * 2);
    }

    void build(vector<int> &a, int x, int lx, int rx)  {
        if (rx - lx == 1)   {
            if (lx < (int)a.size())
                values[x] = a[lx];
            return;
        }
        int m = (rx + lx) / 2;
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);
        values[x] = values[2 * x + 1] + values[2 * x + 2];
    }

    void build(vector<int> &a)  {
        build(a, 0, 0, size);
    }

    void change(int i, int x, int lx, int rx) {
        if (rx - lx == 1)   {
            values[x] = 1 - values[x];
            return;
        }
        int m = (lx + rx) / 2;
        if (i < m)
            change(i, 2 * x + 1, lx, m);
        else
            change(i, 2 * x + 2, m, rx);
        values[x] = values[2 * x + 1] + values[2 * x + 2];
    }

    void change(int i) {
        change(i, 0, 0, size);
    }

    int find(int k, int x, int lx, int rx)    {
        if (rx - lx == 1)   {
            return lx;
        }
        int m = (lx + rx) / 2;
        int s = values[2 * x + 1];
        if (k < s)
            return find(k, 2 * x + 1, lx, m);
        else
            return find(k - s, 2 * x + 2, m, rx);
    }

    int find(int k)    {
        return find(k, 0, 0, size);
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
            int i;
            cin >> i;
            st.change(i);
        }
        else if (op == 2)   {
            int k;
            cin >> k;
            cout << st.find(k) << endl;
        }
    }
}