// Codeforces - Lucky Division
// https://codeforces.com/contest/122/problem/a
//
// Author: eloyhz
// Date: Oct/11/2021

#include <bits/stdc++.h>

using namespace std;

int main()  {
    set<int> lucky = {4, 7, 
                    44, 47, 74, 77,
                    444, 447, 474, 477,
                    744, 747, 774, 777};
    
    int n;
    cin >> n;
    bool is_lucky = lucky.find(n) != lucky.end();
    bool is_divisible = false;
    for (auto& x : lucky)   {
        if (n % x == 0) 
            is_divisible = true;
    }
    cout << ( is_lucky || is_divisible ? "YES" : "NO" ) << endl;
}