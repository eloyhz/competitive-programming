/*

Coursera - Competitive Programming for Beginners
https://www.coursera.org/learn/competitive-programming-for-beginners/

Week 2: Number Theory
Problem: Fibonacci Sequence
Description: https://hackmd.io/@eloyhz/SkqyBvtKO

Date: 24/05/2021
  
*/

#include <bits/stdc++.h>

using namespace std;
const int MOD = 1e6 + 3;

int main()  {
    int n;
    cin >> n;
    int f1 = 1, f2 = 1, f3 = 1;
    for (int i = 2; i <= n; i++)    {
        f3 = ((f1 % MOD) + (f2 % MOD)) % MOD;
        f1 = f2;
        f2 = f3;
    }
    cout << f3 << endl;
    return 0;
}