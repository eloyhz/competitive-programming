// Codeforces Round #627 (Div. 3)
// B. Yet Another Palindrome Problem
// https://codeforces.com/contest/1324/problem/B
// 13-09-2021


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
    bool is_palindrome = false;
    for (int i = 0; i < n && !is_palindrome; i++) {
        is_palindrome = false;
        for (int j = i + 2; j < n && !is_palindrome; j++) {
            if (a[i] == a[j])    {
                is_palindrome = true;
            }
        }
    }
    cout << (is_palindrome ? "YES" : "NO") << endl;
}

int main()  {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
