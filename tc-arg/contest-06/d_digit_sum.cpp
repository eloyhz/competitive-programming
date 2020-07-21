// TCArg 2020 - Contest #6
// Digit sum [WA]
// https://codeforces.com/group/j1UosVRZar/contest/287776/problem/D

#include <iostream>

using namespace std;

int main()
{
	long long a, b, num, total;

	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> a >> b;
	num = a;
	for (int i = 1; i < b; i++)	{
		num *= a;
		while (num >= 10)	{
			total = 0;
			while (num > 0)	{
				total += num % 10;
				num /= 10;
			}
			num = total;
		}
	}
	cout << total << endl;
	return 0;
}


