/*

CSES - Stick Lengths [WA]
https://cses.fi/problemset/task/1074
Date: 13/05/21

*/

#include <bits/stdc++.h>

using namespace std;

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    long long sum = 0;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        sum += p[i];
    }
    long long average = sum / n;
    long long ans = 0;
    for (int x : p)
        ans += abs(x - average);
    cout << ans << "\n";
    return 0;
}