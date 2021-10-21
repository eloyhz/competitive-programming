/*
 *
 * ITMO Academy - Two Pointers Method - Part 1
 * B. Number of Smaller
 * https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B
 * 21-10-2021
 * 
 */

#include <bits/stdc++.h>

using namespace std;

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    vector<int> res(m);
    for (int &x : a) 
        cin >> x;
    for (int &x : b) 
        cin >> x;
    int i = 0;
    long long ans = 0;
    for (int j = 0; j < m; j++) {
        while (i < n && a[i] < b[j])
            i++;
        while (i < n && a[i] == b[j])   {
            i++;
            ans++;
        }
    }
    cout << ans << endl;
}