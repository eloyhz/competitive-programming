// Codeforces Round #690(Div. 3)
// C. Unique Number
// https://codeforces.com/contest/1462/problem/C
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
    int x;
    cin >> x;
    if (x < 10)
        cout << x << "\n";
    else if (x > 45)
        cout << -1 << "\n";
    else  {
        vector<int> digits;
        int digit = 9;
        while (x - digit > 0)  {
            digits.push_back(digit);
            x -= digit;
            digit--;
        }
        digits.push_back(x);
        for (int i = digits.size() - 1; i >= 0; --i) 
            cout << digits[i];
        cout << "\n";
    }
}

int main()  {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
