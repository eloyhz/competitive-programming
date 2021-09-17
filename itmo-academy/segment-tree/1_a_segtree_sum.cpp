#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define DBG(x) cerr << #x << " = " << (x) << endl
#define DBGY(x) cerr << #x << " = " << (x) << " , "
#define LINE cerr << "================" << endl

struct segtree {
    int size;
    vector<ll> sums;

    segtree(int n)    {
        size = 1;
        while (size < n)
            size *= 2;
        sums.assign(2 * size, 0LL);
    }

    segtree(vector<ll> &a) : segtree(a.size()) {
        build(a, 0, 0, size);
    }

    void build(vector<ll> &a, int x, int lx, int rx)    {
        if (rx - lx == 1)   {
            if (lx < a.size())
                sums[x] = a[lx];
            return;
        }
        int m = (lx + rx) / 2;
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);
        sums[x] = sums[2 * x + 1] + sums[2 * x + 2];
    }

    void set(int i, int v, int x, int lx, int rx)  {
        if (rx - lx == 1)   {
            sums[x] = v;
            return;
        }
        int m = (lx + rx) / 2;
        if (i < m)
            set(i, v, 2 * x + 1, lx, m);
        else
            set(i, v, 2 * x + 2, m, rx);
        sums[x] = sums[2 * x + 1] + sums[2 * x + 2];
    }

    void set(int i, int v)  {
        set(i, v, 0, 0, size);
    }

    ll sum(int l, int r, int x, int lx, int rx)    {
        if (rx <= l || r <= lx)
            return 0;
        if (l <= lx && rx <= r)
            return sums[x];
        int m = (lx + rx) / 2;
        return sum(l, r, 2 * x + 1, lx, m) + sum(l, r, 2 * x + 2, m , rx);
    }

    ll sum(int l, int r)    {
        return sum(l, r, 0, 0, size);
    }
};

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    segtree st(a);
    while (m--) {
        int op;
        cin >> op;
        if (op == 1)    {
            int i, v;
            cin >> i >> v;
            st.set(i, v);
        }
        else {
            int l, r;
            cin >> l >> r;
            cout << st.sum(l, r) << "\n";
        }
    }
    return 0;
}