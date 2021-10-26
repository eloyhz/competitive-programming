/*
 *
 * ITMO Academy - Two Pointers Method - Part 2
 * B. Segment with Big Sum
 * https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B
 * 25-10-2021
 * 
 */

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define DBG(x) cerr << #x << " = " << (x) << endl
#define DBGY(x) cerr << #x << " = " << (x) << " , "
#define LINE cerr << "================" << endl

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
    int ans = INT_MAX;
    for (int r = 0; r < n; r++) {
        x += a[r];
        while (x - a[l] >= s)   {
            x -= a[l];
            l++;
        }
        if (x >= s)
            ans = min(ans, r - l + 1);
    }
    cout << (ans != INT_MAX ? ans : -1) << endl;
}