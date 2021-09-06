// Codeforces Round #690(Div. 3)
// A. Favorite Sequence
// https://codeforces.com/contest/1462/problem/A
// 06-09-2021

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
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int i = 0, j = b.size() - 1;
    bool front = true;
    while (i <= j)   {
        if (front)  {
            cout << b[i++] << " ";
        }
        else    {
            cout << b[j--] << " ";
        }
        front = !front;
    }
    cout << endl;
}

int main()  {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
