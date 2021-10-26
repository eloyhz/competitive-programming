/*
 *
 * ITMO Academy - Two Pointers Method - Part 2
 * C. Number of Segments with Small Sum
 * https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/C
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
    ll ans = 0;
    for (int r = 0; r < n; r++) {
        x += a[r];
        while (x > s)   {
            x -= a[l];
            l++;
        }
        ans += r - l + 1;
//        DBGY(l); DBGY(r); DBGY(r-l+1); DBGY(x); DBG(ans); 
    }
    cout << ans << endl;
}