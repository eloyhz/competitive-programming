// Codeforces Round #713 (Div. 3)
// A. Spy Detected!
// https://codeforces.com/contest/1512/problem/A
// 14-09-2021


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

void solve()    {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int spy = 0;
    for (int i = 2; i < n; i++) {
        if (a[i] != a[i - 1] && a[i - 1] == a[i - 2])   {
            spy = i;
            break;
        }
        if (a[i] == a[i - 1] && a[i - 1] != a[i - 2])   {
            spy = i - 2;
            break;
        }
        if (a[i] == a[i - 2] && a[i - 2] != a[i - 1])   {
            spy = i - 1;
            break;
        }
    }
    cout << spy + 1 << endl;
}

int main()  {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
