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

    int number_of_books;
    int max_total_price; // (capacity)
    cin >> number_of_books >> max_total_price;
    vector<int> prices(number_of_books + 1);   // price of each book   (weight)
    vector<int> pages(number_of_books + 1);   // number of pages of each book (value)
    // What is the maximum number of pages you can buy? (max value) 
    // You can buy each book at most once.
    for (int i = 1; i <= number_of_books; i++)
        cin >> prices[i]; 
    for (int i = 1; i <= number_of_books; i++)
        cin >> pages[i];
    vector<vector<int>> dp(number_of_books + 1, vector<int>(max_total_price + 1));
    for (int i = 1; i <= number_of_books; i++)
        for (int p = 0; p <= max_total_price; p++)
            if (prices[i] > p)
                dp[i][p] = dp[i - 1][p];
            else
                dp[i][p] = max(dp[i - 1][p], dp[i - 1][p - prices[i]] + pages[i]);
    cout << dp[number_of_books][max_total_price] << "\n";
    return 0;
}