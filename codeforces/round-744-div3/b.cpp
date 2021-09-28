// Codeforces Round #744 (Div. 3)
// B. Shifting Sort [AC]
// https://codeforces.com/contest/1579/problem/B
// 28-09-2021

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define DBG(x) cerr << #x << " = " << (x) << endl
#define DBGY(x) cerr << #x << " = " << (x) << " , "
#define LINE cerr << "================" << endl

template <typename T>
ostream &operator << (ostream &os, const vector<T>& v)  {
    os << "[";
    for (int i = 0; i < v.size(); i++)  {
        if (i > 0) os << ", ";
        os << v[i];
    }
    return os << "]";
}

struct action {
    int l, r, d;
};

void solve()    {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<action> ans;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++) {
        int r = i;
        for (int j = i; j < n; j++)
            if (a[j] < a[r])  {
                r = j;    
            }
        if (r != i)   {
            int d = r - i;
            ans.push_back({i + 1, r + 1, d});
            int t = a[r];
            // LINE;
            // DBG(a);
            for (int j = r; j > i; j--) {
                a[j] = a[j - 1];
            }
            a[i] = t;
            // DBGY(i); DBG(r); DBG(d);
            // DBG(a);
        }
    }
    cout << ans.size() << endl;
    for (auto x : ans)  {
        cout << x.l << " " << x.r << " " << x.d << endl;
    }
}

int main()  {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
