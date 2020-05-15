// UVa 11565 - Simple Equations
// https://onlinejudge.org/external/115/11565.pdf

#include <iostream>

using namespace std;

bool solve()
{
	int a, b, c;
	int x, y, z;

	cin >> a >> b >> c;
	for (x = -100; x <= 100; x++)	{
		for (y = -100; y <= 100; y++)	{
			for (z = -100; z <= 100; z++)	{
				if (x == y || x == z || y == z)	{
					continue;
				}
				if (x + y + z != a)	{
					continue;
				}
				if (x * y * z != b)	{
					continue;
				}
				if (x * x + y * y + z * z != c)	{
					continue;
				}
				cout << x << " " << y << " " << z << "\n";
				return true;
			}
		}
	}
	return false;
}

int main()
{
	int t;

	ios::sync_with_stdio(0);
	cin.tie();

	cin >> t;
	while(t-- > 0)	{
		if (!solve())	{
			cout << "No solution.\n";
		}
	}
	return 0;
}
