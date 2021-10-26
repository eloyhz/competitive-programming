/*
 *
 * ITMO Academy - Two Pointers Method - Part 2
 * G. Coprime Segment (gcd queue with two stacks)
 * https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/G
 * 26-10-2021
 * 
 */

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b)  {
    return b == 0 ? a : gcd(b, a % b);
}

struct stack    {
    vector<ll> s;
    vector<ll> g =  {0};
    void push(ll x) {
        s.push_back(x);
        g.push_back(::gcd(g.back(), x));
    }
    void pop()  {
        s.pop_back();
        g.pop_back();
    }
    ll top()  {
        return s.back();
    }
    ll gcd()    {
        return g.back();
    }
    bool empty()    {
        return s.empty();
    }
};

::stack s1, s2;

void add(ll x)  {
    s2.push(x);
}

void remove(ll x)   {
    if (s1.empty())  {
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }
    s1.pop();
}

bool good() {
    return gcd(s1.gcd(), s2.gcd()) == 1;
}

int main()  {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    vector<ll> a(n);
    for (ll &x : a)
        cin >> x;
    int l = 0;
    int ans = INT_MAX;
    for (int r = 0; r < n; r++) {
        add(a[r]);
        while (good()) {
            ans = min(ans, r - l + 1);
            remove(a[l]);
            l++;
        }
    }
    cout << (ans == INT_MAX ? -1 : ans) << endl;
}
