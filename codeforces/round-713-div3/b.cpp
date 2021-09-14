// Codeforces Round #713 (Div. 3)
// B. Almost Rectangle
// https://codeforces.com/contest/1512/problem/B
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
    vector<string> table(n);
    for (int i = 0; i < n; i++)
        cin >> table[i];
    int x1, y1, x2, y2;
    bool first = true;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (table[i][j] == '*')    {
                if (first)  {
                    first = false;
                    x1 = i;
                    y1 = j;
                }
                else    {
                    x2 = i;
                    y2 = j;
                }
            }
    if (x1 != x2 && y1 == y2)   {
        if (y1 == n - 1) {
            table[x1][y1 - 1] = '*';
            table[x2][y1 - 1] = '*';
        }
        else    {
            table[x1][y1 + 1] = '*';
            table[x2][y1 + 1] = '*';
        }
    }
    else if (x1 == x2 && y1 != y2)  {
        if (x1 == n - 1)   {
            table[x1 - 1][y1] = '*';
            table[x1 - 1][y2] = '*';
        }
        else    {
            table[x1 + 1][y1] = '*';
            table[x1 + 1][y2] = '*';
        }
    }
    else    {
        table[x2][y1] = '*';
        table[x1][y2] = '*';
    }
    for (int i = 0; i <n; i++)
        cout << table[i] << endl;
}

int main()  {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
