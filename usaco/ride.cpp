/*

ID: eloyhz1
PROG: ride
LANG: C++11

https://train.usaco.org/usacoprob2?S=ride&a=Qy4F51xZOqi

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("ride.in", "r", stdin);
    freopen("ride.out", "w", stdout);

    string s1, s2;
    cin >> s1 >> s2;

    int m1 = 1, m2 = 1;

    for (auto s : s1)   {
        m1 *= (s - 'A' + 1);
    }
    for (auto s : s2)   {
        m2 *= (s - 'A' + 1);
    }
    if (m1 % 47 == m2 % 47) {
        cout << "GO" << endl;
    }   else    {
        cout << "STAY" << endl;
    }
    return 0;
}
    
