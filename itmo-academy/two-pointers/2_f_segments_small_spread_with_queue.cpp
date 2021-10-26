/*
 *
 * ITMO Academy - Two Pointers Method - Part 2
 * F. Segments with Small Spread (O(n) stacks)
 * https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F
 * 26-10-2021
 * 
 */

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n;
ll k;
vector<ll> a;
// multiset<ll> st;
struct Stack    {
    vector<ll> s;
    vector<ll> smin = {LONG_LONG_MAX};
    vector<ll> smax = {LONG_LONG_MIN};
    void push(ll x) {
        s.push_back(x);
        smin.push_back(x < smin.back() ? x : smin.back());
        smax.push_back(x > smax.back() ? x : smax.back());
    }
    void pop()  {
        s.pop_back();
        smin.pop_back();
        smax.pop_back();
    }
    ll top()    {
        return s.back();
    }
    ll min()    {
        return smin.back();
    }
    ll max()    {
        return smax.back();
    }
    bool empty()    {
        return s.empty();
    }
};

Stack s1, s2;

void add(ll x)  {
//    st.insert(x);
    s2.push(x);
}

void remove(ll x)   {
//    st.erase(st.find(x));
    if (s1.empty()) {
        while(!s2.empty())  {
            s1.push(s2.top());
            s2.pop();
        }
    }
    s1.pop();
}

bool good() {
/*     ll mx = *(--st.end());
    ll mn = *(st.begin());
    return (mx - mn) <= k;
 */
    ll mx = max(s1.max(), s2.max());
    ll mn = min(s1.min(), s2.min());
    return (mx - mn) <= k;
}

int main()  {
    // good segment: difference between the maximum and minimum
    //               is at most k
    //              max(a[i]) - min(a[i]) <= k, i \in [l..r]
    //              calculate max and min in O(n) using two stacks
    // find the number of good segments
    // 
    cin >> n >> k;
    a.resize(n);
    for (ll &x : a)
        cin >> x;
    ll ans = 0;
    int l = 0;
    for (int r = 0; r < n; r++) {
        add(a[r]);
        while (!good()) {
            remove(a[l]);
            l++;
        }
        ans += r - l + 1;
    }
    cout << ans << endl;
}
