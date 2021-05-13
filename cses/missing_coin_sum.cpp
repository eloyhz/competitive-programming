/*

CSES - Missing Coin Sum
https://cses.fi/problemset/task/2183/
Date: 13/05/21

Reference: https://www.youtube.com/watch?v=l6rjY30bwI8

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
    sort(x.begin(), x.end());
    long long k = 0;
    int i = 0;
    while (i < n && k + 1 - x[i] >= 0)   {
        k += x[i];
        i++;
    }
    cout << k + 1 << "\n";
    return 0;
}