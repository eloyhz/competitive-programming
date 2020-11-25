//
// Codeforces Round #686 (Div. 3) [VIRTUAL]
//
// D. Number into Sequence [WA]
// https://codeforces.com/contest/1454/problem/D
//
// Author: eloyhz
// Date: Nov/25/2020
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
		long long n;
		cin >> n;
		vector<long long> factors;
		for (long long d = 2; d * d <= n; d++)	{
				bool ok = true;
				for (auto f : factors)	{
					if (d % f != 0)	{
						ok = false;
						break;
					}
				}
				if (!ok)
					continue;
			while (n % d == 0)	{
					bool ok = true;
					for (auto f : factors)	{
						if (n / d % f != 0)	{
							ok = false;
							break;
						}
					}
					if (!ok)
						break;
					bool is_prime = true;
					for (long long x = 3; x * x <= d; x++)	{
						if (d % x == 0)	{
							is_prime = false;
							break;
						}
					}
					if (is_prime && d > 2)
						break;
					factors.push_back(d);
					n /= d;
			}
		}
		if (n > 1)
			factors.push_back(n);
		cout << factors.size() << endl;
		for (auto f : factors)
			cout << f << " ";
		cout << endl;
    }

    return 0;
}

