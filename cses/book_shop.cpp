/*

CSES - Book Shop

https://cses.fi/problemset/submit/1158/
Date: 20/05/21

Author: eloyhz

*/

#include <bits/stdc++.h>

using namespace std;

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;  // number of books
    int x;  // max total price  (capacity)
    cin >> n >> x;
    vector<int> h(n + 1);   // price of each book   (weight)
    vector<int> s(n + 1);   // number of pages of each book (value)
    // What is the maximum number of pages you can buy? 
    // You can buy each book at most once.
    for (int i = 1; i <= n; i++)
        cin >> h[i]; 
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    vector<int> dp(x + 1);
    for (int i = 1; i <= n; i++)
        for (int j = x - h[i]; j >= 0; j--)
            dp[j + h[i]] = max(dp[j + h[i]], dp[j] + s[i]);
    cout << *max_element(dp.begin(), dp.end()) << "\n";
    return 0;
}