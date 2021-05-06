/*

ITMO Academy - Binary Search for Answer
2.E. Equation [AC]
https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/E

Date: 06/05/21

*/

#include <bits/stdc++.h>

using namespace std;

int main()  {
    double c;
    cin >> c;
    double left = 0;
    double right = 1e10;
    for (int i = 0; i < 100; i++)   {
        double x = (left + right) / 2;
        double f = x * x + sqrt(x);
        if (f > c)
            right = x;
        else
            left = x;
    }
    cout << fixed << setprecision(10) << right << "\n";
    return 0;
}