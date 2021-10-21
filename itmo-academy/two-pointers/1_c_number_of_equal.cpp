/*
 *
 * ITMO Academy - Two Pointers Method - Part 1
 * C. Number of Equal
 * https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C
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
    int i = 0, j = 0;
    long long ans = 0;
    while (j < m) {
        while (i < n && a[i] < b[j])
            i++;
        long long x = 0;
        while (i < n && a[i] == b[j])   {
            i++;
            x++;
        }
        int bj = b[j];
        long long y = 0;
        while (j < m && b[j] == bj) {
            j++;
            y++;
        }
        ans += x * y;
    }
    cout << ans << endl;
}