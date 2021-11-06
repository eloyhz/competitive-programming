/*
 * ICPC - Gran Premio de Mexico 2021 - 3era Fecha
 * N. No Luck
 * https://codeforces.com/gym/103388/problem/N
 * 4/nov/2021
 */

#include <bits/stdc++.h>

using namespace std;

struct segtree  {
    int size;
    vector<vector<int>> values;

    void init(int n)    {
        size = 1;
        while (size < n)
            size *= 2;
        values.resize(size * 2);
    }

    void build(vector<int> &a, int x, int lx, int rx)  {
        if (lx + 1 == rx)   {
            if (lx < (int)a.size())
                values[x] = {a[lx]};
            return;
        }
        int m = (lx + rx) / 2;
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);
        merge(values[2*x+1].begin(), values[2*x+1].end(), 
            values[2*x+2].begin(), values[2*x+2].end(),
            back_inserter(values[x]));
    }

    void build(vector<int> &a)  {
        build(a, 0, 0, size);
    }

    int count_equal_or_above(int l, int r, int k, int x, int lx, int rx)    {
        if (rx <= l || r <= lx) {
            return 0;
        }
        if (l <= lx && rx <= r) {
           return values[x].end() 
                - lower_bound(values[x].begin(), values[x].end(), k);
        }
        int m = (lx + rx) / 2;
        int c1 = count_equal_or_above(l, r, k, 2*x+1, lx, m);
        int c2 = count_equal_or_above(l, r, k, 2*x+2, m, rx);
        return c1 + c2;
    }

    int count_equal_or_above(int l, int r, int k)    {
        return count_equal_or_above(l, r, k, 0, 0, size);
    }
};

int main()  {
    cin.tie(nullptr)->sync_with_stdio(false);
    int y, n;
    cin >> y >> n;
    vector<int> v(y);
    for (int &x : v)
        cin >> x;
    segtree st;
    st.init(y);
    st.build(v);
    while (n--) {
        int a, p, f;
        cin >> a >> p >> f;
        if (p <= v[a-1])
            cout << "0\n";
        else
            cout << st.count_equal_or_above(a-1, a+f, p) << "\n";
    }
}
