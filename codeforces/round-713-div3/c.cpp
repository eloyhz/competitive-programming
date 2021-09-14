// Codeforces Round #713 (Div. 3)
// C. A-B Palindrome [WA]
// https://codeforces.com/contest/1512/problem/C
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
    string s;
    int a, b;
    cin >> a >> b;
    cin >> s;
    int n = s.size();
    int zeros = 0, ones = 0, marks = 0;
    for (char c : s)
        if (c == '0')
            zeros++;
        else if (c == '1')
            ones++;
        else if (c == '?')
            marks++;
    a -= zeros;
    b -= ones;
    bool ok = a >= 0 && b >= 0 ? true : false;
    // LINE;
    for (int i = 0; ok && i < n; i++) {
        // DBGY(i); DBGY(a); DBGY(b); DBG(s);
        if (s[i] == '?' && s[n - i - 1] != '?') {
            if (s[n - i - 1] == '0' && a > 0)   {
                s[i] = '0';
                a--;
            }
            else if (s[n - i - 1] == '1' && b > 0)   {
                s[i] = '1';
                b--;
            }
            else {
                ok = false;
            }
        }
        else if (s[i] != '?' && s[n - i - 1] == '?') {
            if (s[i] == '0' && a > 0)   {
                s[n - i - 1] = '0';
                a--;
            }
            else if (s[i] == '1' && b > 0)   {
                s[n - i - 1] = '1';
                b--;
            }
            else {
                ok = false;
            }
        }
        else if (s[i] == '?' && s[n - i - 1] == '?')    {
            if (i == n - i - 1) {
                if (a >= 1)  {
                    s[i] = '0';
                    a--;
                }
                else if (b >= 1) {
                    s[i] = '1';
                    b--;
                }
                else {
                    ok = false;
                }
            }
            else if (a >= 2)  {
                s[i] = s[n - i - 1] = '0';
                a -= 2;
            }
            else if (b >= 2) {
                s[i] = s[n - i - 1] = '1';
                b -= 2;
            }
            else   {
                ok = false;
            }
        }
        else if (s[i] != '?' && s[n - i - 1] != '?')    {
            if (s[i] != s[n - i - 1])   {
                ok = false;
            }
        }
    }
    cout << (ok && a == 0 && b == 0 ? s : "-1") << endl;
}

int main()  {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
