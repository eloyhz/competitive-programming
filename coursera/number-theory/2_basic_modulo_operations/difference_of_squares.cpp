/*

Coursera - Competitive Programming for Beginners
https://www.coursera.org/learn/competitive-programming-for-beginners/

Week 2: Number Theory
Problem: Fibonacci Sequence
Description: https://hackmd.io/@eloyhz/Hye7LDKYu

Date: 24/05/2021
  
*/

#include <bits/stdc++.h>

using namespace std;
const int MOD = 1e6 + 7;

int main()  {
    long long a, b;
    cin >> a >> b;
    long long a_squared = ((a % MOD) * (a % MOD)) % MOD;
    long long b_squared = ((b % MOD) * (b % MOD)) % MOD;
    long long ans = (a_squared % MOD - b_squared % MOD) % MOD;
    if (ans < 0)
        ans = (ans + MOD) % MOD;
    cout << ans << endl;


    return 0;
}