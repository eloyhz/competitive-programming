// Codeforces Round #608 (Div. 2)
// B. Blocks [with editorial]
// https://codeforces.com/contest/1271/problem/B
// 23-09-2021

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define DBG(x) cerr << #x << " = " << (x) << endl
#define DBGY(x) cerr << #x << " = " << (x) << " , "
#define LINE cerr << "================" << endl


bool check(string s, char a, char b)    {
    int n = s.size();
    vector<int> ans;
    for (int i = 0; i < n - 1; i++)  {
        if (s[i] == b) {
            ans.push_back(i + 1);
            s[i] = a;
            s[i + 1] = s[i + 1] == b ? a : b;
        }
    }
    if (s[n - 1] == b || ans.size() > 3 * n)
        return false;
    else    {
        cout << ans.size() << endl;
        for (int x : ans)
            cout << x << " ";
        cout << "\n";
        return true;
    }
}

void solve()    {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (!check(s, 'W', 'B') && !check(s, 'B', 'W'))
        cout << -1 << endl;
}

int main()  {
    solve();
    return 0;
}
