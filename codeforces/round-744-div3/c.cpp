// Codeforces Round #744 (Div. 3)
// C. Ticks [AC]
// https://codeforces.com/contest/1579/problem/C
// 30-09-2021

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
    int n, m, k;
    cin >> n >> m >> k;
    vector<string> f(n);
    for (int i = 0; i < n; i++)
        cin >> f[i];
    vector<vector<bool>> mark(n, vector<bool>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (f[i][j] == '*')    {
                int d = 0;
                while (i - d > 0 && j + d - 1 < m && j - d > 0)  {
                    int h = d + 1;
                    if (f[i - h][j - h] == '*' && f[i - h][j + h] == '*')   {
                        d++;
                    }
                    else
                        break;
                }
                if (d >= k) {
                    mark[i][j] = true;
                    for (int h = 0; h <= d; h++) {
                        mark[i - h][j - h] = mark[i - h][j + h] = true;
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (f[i][j] == '*' && !mark[i][j])    {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
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
