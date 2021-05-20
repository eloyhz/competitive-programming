/*

Coursera - Dynamic Programming
Problem: Backpack 3 (Fractional Knapsack)
Description: https://hackmd.io/@eloyhz/SJ5xkVVYd

Date: 20/05/2021
  
*/


#include <bits/stdc++.h>

using namespace std;
const int INF = 1e9 + 1;

int main()  {
    int s;  // weight limit
    int n;  // number of bars

    cin >> s >> n;
    vector<int> w(n);   //  weights of the bars
    vector<int> c(n);   //  costs of the bars
    for (int i = 0; i < n; i++)
        cin >> w[i];
    for (int i = 0; i < n; i++)
        cin >> c[i];
    vector<pair<double, int>> ratios(n);
    for (int i = 0; i < n; i++)
        ratios[i] = {w[i] ? c[i]/(double)w[i] : -INF, i};
    sort(ratios.begin(), ratios.end(), greater<pair<double,int>>());
    /*
    for (int i = 0; i < n; i++)
        cout << c[ratios[i].second] << ", " 
            << w[ratios[i].second] << ", " 
            << ratios[i].first << "\n";
    */
    double ans = 0;
    int weight = s;
    for (int i = 0; i < n; i++) {
        int current_weight = w[ratios[i].second];
        int current_cost = c[ratios[i].second];
        if (weight - current_weight >= 0)   {
            ans += current_cost;
            weight -= current_weight;
        }
        else    {
            ans += current_cost * weight / (double)current_weight;
            break;
        }
    }
    cout << ceil(ans) << "\n";
    return 0;
}