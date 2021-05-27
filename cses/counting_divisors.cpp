/*

CSES - Counting Divisors
https://cses.fi/problemshttps://cses.fi/problemset/task/1713/et/task/1095
Date: 27/05/21

Reference: Competitive Programmer's Handbook page 198 (number of factors)

*/

#include <bits/stdc++.h>

using namespace std;

unordered_map<int, int> get_factors(int n)  {
    unordered_map<int, int> f;
    for (int i = 2; i * i <= n; i++)    {
        while (n % i == 0)  {
            f[i]++;
            n /= i;
        }
    }
    if (n > 1)
        f[n]++;
    return f;
}

long long solve(int x)    {
    unordered_map<int, int> factors = get_factors(x);
    long long ans = 1;
    for (auto f = factors.begin(); f != factors.end(); f++)
        ans *= ((*f).second + 1);
    return ans;
}

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        cout << solve(x) << "\n";
    }
    return 0;
}