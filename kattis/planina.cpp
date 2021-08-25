// Kattis - Planina
// https://open.kattis.com/problems/planina
// 25-08-2021

#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n;
    cin >> n;
    long long points = 2;
    while (n--)
        points += points - 1;
    cout << points * points << endl;
    return 0;
}