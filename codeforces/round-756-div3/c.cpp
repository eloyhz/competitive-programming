/**
 * Codeforces Round #756 (Div. 3)
 * C. Polycarp Recovers the Permutation
 * https://codeforces.com/contest/1611/problem/C
 * 
 * @author eloyhz
 * @date 2021-11-25
 */

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

using namespace std;
using ll = long long;

#define DBG(x) cerr << #x << " = " << (x) << endl
#define DBGY(x) cerr << #x << " = " << (x) << " , "
#define LINE cerr << "================" << endl

template <typename T>
ostream &operator << (ostream &os, const deque<T>& v)  {
    os << "[";
    for (int i = 0; i < (int)v.size(); i++)  {
        if (i > 0) os << ", ";
        os << v[i];
    }
    return os << "]";
}

bool are_equal(deque<int> &a, deque<int> &b, int n)    {
    for (int i = 0; i < n; i++)
        if (a[i] != b[i])
            return false;
    return true;
}

bool can_recover(deque<int> &c, deque<int> a, int n)  {
    deque<int> b;

/*     cerr << "can_recover()\n";
    DBG(a);
    DBG(b);
    LINE;
 */

    for (int i = 0; i + 1 < n; i++) {
        int x = a.front();
        int y = a.back();
        if (x < y)  {
            b.push_front(x);
            a.pop_front();
        }
        else    {
            b.push_back(y);
            a.pop_back();
        }
/*         DBG(i);
        DBG(a);
        DBG(b);
        LINE; */
    }
    deque<int> d(b);
    b.push_front(a[0]);
    d.push_back(a[0]);
    if (are_equal(c, b, n) || are_equal(c, d, n))
        return true;
    else
        return false;
}

void print(deque<int> &a)   {
    for (int &x : a)
        cout << x << " ";
    cout << endl;
}

void solve()    {
    int n;
    cin >> n;
    deque<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    deque<int> b;
    deque<int> c(a);
/*     DBG(a);
    DBG(b);
    LINE; */

    for (int i = 0; i + 1 < n; i++) {
        int x = a.front();
        int y = a.back();
        if (x > y)  {
            b.push_front(x);
            a.pop_front();
        }
        else    {
            b.push_back(y);
            a.pop_back();
        }
/*         DBG(i);
        DBG(a);
        DBG(b);
        LINE; */
    }
    deque<int> d(b);
    b.push_front(a[0]);
    d.push_back(a[0]);
    if (can_recover(c, b, n))
        print(b);
    else if (can_recover(c, d, n))
        print(d);
    else
        cout << -1 << endl;
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
