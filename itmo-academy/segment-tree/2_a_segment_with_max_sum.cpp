/*
 * ITMO Academy - Segment Tree - Part 1 - Step 2
 * A. Segment with the Maximum Sum
 * https://codeforces.com/edu/course/2/lesson/4/2/practice/contest/273278/problem/A
 * 
 * 29-10-2021
 */

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct item {
    ll seg, pref, suf, sum;
};

struct segtree {
    int size;
    vector<item> items;

    void init(int n)    {
        size = 1;
        while (size < n)
            size *= 2;
        items.resize(size * 2);
    }

    item single(int v)  {
        if (v > 0)
            return {v, v, v, v};
        else
            return {0, 0, 0, v};
    }

    item merge(item &a, item &b)    {
        item res;
        res.seg = max({a.seg, b.seg, a.suf + b.pref});
        res.pref = max(a.pref, a.sum + b.pref);
        res.suf = max(b.suf, a.suf + b.sum);
        res.sum = a.sum + b.sum;
        return res;
    }

    item neutral() {
        return {0, 0, 0, 0};
    }

    void build(vector<int> &a, int x, int lx, int rx)  {
        if (rx - lx == 1)   {
            if (lx < (int)a.size()) {
                items[x] = single(a[lx]);
            }
            return;
        }
        int m = (lx + rx) / 2;
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);
        items[x] = merge(items[2 * x + 1], items[2 * x + 2]);
    }

    void build(vector<int> &a)  {
        build(a, 0, 0, size);
    }

    void set(int i, int v, int x, int lx, int rx)  {
        if (rx - lx == 1)   {
            items[x] = single(v);
            return;
        }
        int m = (rx + lx) / 2;
        if (i < m)
            set(i, v, 2 * x + 1, lx, m);
        else
            set(i, v, 2 * x + 2, m, rx);
        items[x] = merge(items[2 * x + 1], items[2 * x + 2]);
    }

    void set(int i, int v)  {
        set(i, v, 0, 0, size);
    }

    item calc(int l, int r, int x, int lx, int rx)   {
        if (rx <= l || r <= lx)
            return neutral();
        if (l <= lx && rx <= r)
            return items[x];
        int m = (lx + rx) / 2;
        item left_item = calc(l, r, 2 * x + 1, lx, m);
        item right_item = calc(l, r, 2 * x + 2, m, rx);
        return merge(left_item, right_item);
    }

    item calc(int l, int r)   {
        return calc(l, r, 0, 0, size);
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
    cout << st.calc(0, n).seg << endl;
    while (m--) {
        int i, v;
        cin >> i >> v;
        st.set(i, v);
        cout << st.calc(0, n).seg << endl;
    }
}


/*

// Maximum subarray sum gives TLE

ll max_sum(vector<int> &a)  {
    ll sum = 0;
    ll best = 0;
    for (int &x : a)    {
        sum = max((ll)x, x + sum);
        best = max(best, sum);
    }
    return best;
}

int main()  {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    cout << max_sum(a) << endl;
    while (m--) {
        int i, v;
        cin >> i >> v;
        a[i] = v;
        cout << max_sum(a) << endl;
    }    
}

*/