/*

Coursera - Competitive Programming for Beginners
https://www.coursera.org/learn/competitive-programming-for-beginners/

Week 2: Number Theory
Problem: abc/(ab+bc+ac)
Description: https://hackmd.io/@eloyhz/rJoewrKK_

Date: 24/05/2021
  
*/

#include <bits/stdc++.h>

using namespace std;

int main()  {
    unsigned long long a, b, c;

    cin >> a >> b >> c;
    cout << a * b * c / (a * b + b * c + a * c) << endl;
    return 0;
}