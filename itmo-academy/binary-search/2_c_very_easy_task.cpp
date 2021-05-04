/*

ITMO Academy - Binary Search for Answer
2.C. Very Easy Task
https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/C

Date: 04/05/21

*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, x, y;

bool good_first_attempt(ll t)    {
    ll s = 1;   // first copy
    if (x > y)
        swap(x, y);
    t -= x;         // faster copier
    if (t < 0)  return false;
    s += t / y;   
    s += t / x;     
    return s >= n;
}

bool good(ll t)    {
    if (x > y)
        swap(x, y);
    return t / x + (t - x) / y >= n;
}

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> x >> y;
    ll left = 0;
    ll right = 1;
    while (!good(right))
        right *= 2;
    while (right > left + 1)    {
        ll mid = (right + left) / 2;
        if (good(mid))
            right = mid;
        else
            left = mid;
    }
    cout << right << "\n";
    return 0;
}