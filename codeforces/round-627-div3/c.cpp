// Codeforces Round #627 (Div. 3)
// C. Frog Jumps
// https://codeforces.com/contest/1324/problem/C
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
    string s;
    cin >> s;
    int longest = 0;
    int current = 0;
    if (s[0] == 'L') {
        longest = 1;
        current = 1;
    }
    for (int i = 1; i < s.size(); i++)  {
        if (s[i] == 'L') {
            if (s[i - 1] == 'R')
                current = 1;
            else
                current++;
            longest = max(longest, current);
        }
    }
    cout << longest + 1 << endl;
}

int main()  {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
