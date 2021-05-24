/*

Coursera - Competitive Programming for Beginners
https://www.coursera.org/learn/competitive-programming-for-beginners/

Week 2: Number Theory
Problem: Is It Prime?
Description: https://hackmd.io/@eloyhz/SkUSLrKF_

Date: 24/05/2021
  
*/

#include <bits/stdc++.h>

using namespace std;

int main()  {
    bool is_prime = true;
    int n;
    cin >> n;
    for (int i = 2; i * i <= n && is_prime; i++) {
        if (n % i == 0)
            is_prime = false;
    }
    cout << (is_prime ? 1 : 0) << endl;
    return 0;
}