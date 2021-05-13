/*

CSES - Maximum Subarray Sum (Kadane's Algorithm)
https://cses.fi/problemset/task/1643
Date: 12/05/21

*/

#include <bits/stdc++.h>

using namespace std;

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];
    long long ans = x[0];
    long long sum = x[0];
    for (int i = 1; i < n; i++) {
        sum = max(sum + x[i], (long long)x[i]);
        ans = max(ans, sum);
    }
    cout << ans << "\n";
    return 0;
}