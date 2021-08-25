// Kattis - Pot
// https://open.kattis.com/problems/pot
// 25-08-2021

#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n;
    cin >> n;
    int ans = 0;
    while (n--) {
        int p;
        cin >> p;
        int number = p / 10;
        int power = p % 10;
        ans += pow(number, power);
    }
    cout << ans << endl;
    return 0;
}