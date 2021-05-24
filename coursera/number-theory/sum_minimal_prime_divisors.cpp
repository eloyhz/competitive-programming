/*

Coursera - Competitive Programming for Beginners
https://www.coursera.org/learn/competitive-programming-for-beginners/

Week 2: Number Theory
Problem: Sum Of Minimal Prime Divisors
Description: https://hackmd.io/@eloyhz/HkEQBrttO

Date: 24/05/2021
  
*/

#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n;
    cin >> n;
    vector<int> minimal(n + 1, 0);
    for (int i = 2; i <= n; i++)    {
        if (minimal[i])
            continue;
        for (int j = i; j <= n; j += i)
            if (!minimal[j])
                minimal[j] = i;
    }
    long long sum = 0;
    for (int i = 2; i <= n; i++)
        if (minimal[i] < i)
            sum += minimal[i];
    cout << sum << "\n";

    return 0;
}