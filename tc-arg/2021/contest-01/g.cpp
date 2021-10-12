#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()  {
    int n;
    cin >> n;
    vector<int> a(n);
    ll s = 0LL;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }
    sort(a.begin(), a.end());
    ll r = s;
    for (int i = 0; i < n - 1; i++) {
        int x = a[i];
        s += x;
        r -= x;
        s += r;
    }
    cout << s << endl;
}