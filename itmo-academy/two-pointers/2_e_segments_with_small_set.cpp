/*
 *
 * ITMO Academy - Two Pointers Method - Part 2
 * E. Segments with Small Set
 * https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/E
 * 25-10-2021
 * 
 */

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define DBG(x) cerr << #x << " = " << (x) << endl
#define DBGY(x) cerr << #x << " = " << (x) << " , "
#define LINE cerr << "================" << endl

int n, k, num;
int cnt[100001];

void add(int x) {
    cnt[x]++;
    if (cnt[x] == 1)
        num++;
}

void remove(int x)  {
    cnt[x]--;
    if (cnt[x] == 0)
        num--;
}

bool good()    {
    return num <= k;
}

int main()  {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    
    int l = 0;
    ll ans = 0;
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
