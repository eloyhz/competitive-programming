/*
 *
 * ITMO Academy - Two Pointers Method - Part 2
 * A. Segment with Small Sum
 * https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A
 * 25-10-2021
 * 
 */

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()  {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    ll s;
    cin >> n >> s;
    
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    
    int l = 0;
    ll x = 0;
    int ans = 0;
    for (int r = 0; r < n; r++) {
        x += a[r];
        while (x > s)   {
            x -= a[l];
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    cout << ans << endl;
}