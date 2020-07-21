// TCArg 2020 - Contest #6
// Airport
// https://codeforces.com/group/j1UosVRZar/contest/287776/problem/A

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int t;
	long long a, b;

	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> t;
	while (t--)	{
		cin >> a >> b;
		long long lower = (long long)(ceil(sqrt(a)));
		long long higher = (long long)(floor(sqrt(b)));
		cout << higher - lower + 1 << "\n";
	}
	return 0;
}
