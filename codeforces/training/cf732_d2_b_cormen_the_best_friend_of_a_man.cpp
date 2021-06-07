// Codeforces (CF732-D2-B) - Cormen --- The Best Friend Of a Man [AC]
// http://codeforces.com/contest/732/problem/B
// Date: 07/06/21


#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] + a[i - 1] >= k)
            continue;
        int diff = k - (a[i] + a[i - 1]);
        ans += diff;
        a[i] += diff;
    }
    cout << ans << endl;
    for (int x : a)
        cout << x << " ";
    cout << "\n";
    return 0;
}
