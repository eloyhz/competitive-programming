// Codeforces Round #690(Div. 3)
// B. Last Year's Substring
// https://codeforces.com/contest/1462/problem/B
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

bool starts_with(string& s, string t)  {
    for (int i = 0; i < t.size(); i++)
        if (s[i] != t[i])
            return false;
    return true;
}

bool ends_with(string& s, string t) {
    for (int i = t.size() - 1, j = s.size() - 1; i >= 0; i--, j--)
        if (s[j] != t[i])
            return false;
    return true;
}

void solve()    {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (starts_with(s, "2020") || ends_with(s, "2020")
        || starts_with(s, "2") && ends_with(s, "020")
        || starts_with(s, "20") && ends_with(s, "20")
        || starts_with(s, "202") && ends_with(s, "0"))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()  {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
