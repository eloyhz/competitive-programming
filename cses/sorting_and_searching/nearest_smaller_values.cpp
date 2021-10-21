/*

CSES - Nearest Smaller Values

https://cses.fi/problemset/task/1645/
Date: 20/10/21

*/

#include <bits/stdc++.h>

using namespace std;

void solve_without_pair(vector<int> &a)  {
    int n = a.size();
    stack<int> s;
    for (int i = 0; i < n; i++) {
        while (!s.empty() && a[i] <= a[s.top()])
            s.pop();
        cout << (s.empty() ? 0 : s.top() + 1) << " ";
        s.push(i);
    }
    cout << endl;
}

void solve_with_pair(vector<int> &a)  {
    int n = a.size();
    stack<pair<int, int>> s;
    for (int i = 0; i < n; i++) {
        while (!s.empty() && a[i] <= s.top().first)
            s.pop();
        int pos = 0;
        if (!s.empty())
            pos = s.top().second;
        s.push({a[i], i + 1});
        cout << pos << " ";
    }
    cout << endl;
}

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    solve_without_pair(a);
}