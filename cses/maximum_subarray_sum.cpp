/*

CSES - Maximum Subarray Sum (Kadane's Algorithm)
https://cses.fi/problemset/task/1643
Date: 12/05/21

*/

#include <bits/stdc++.h>

using namespace std;

// Solution from Competitive Programmer's Handbook (Laaksonen)
void solve()   {
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
}

// Solution from Competitive Programming 4 (Halim & Halim)
void solve_reset_0()    {
    int n;
    cin >> n;
    long long ans = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
        ans = max(ans, sum);
        if (sum < 0)
            sum = 0;
    }
    cout << ans << "\n";
}

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}