/*

Coursera - Dynamic Programming
Problem: Backpack 1
Description: https://hackmd.io/@eloyhz/SyFBZVEF_

Date: 20/05/2021
  
*/

#include <bits/stdc++.h>

using namespace std;

int main()  {
    int s;  // weight limit
    int n;  // amount of bars
    cin >> s >> n;
    vector<int> w(n);
    for (int i = 0; i < n; i++)
        cin >> w[i];
    sort(w.begin(), w.end());
    double total_weight = 0;
    for (int i = 0; i < n; i++)
        if (total_weight + w[i] <= s)
            total_weight += w[i];
        else
            total_weight += s - total_weight;
    cout << total_weight << endl;
    
    return 0;
}