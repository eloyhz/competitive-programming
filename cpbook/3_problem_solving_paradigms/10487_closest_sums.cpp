// UVa 10487 - Closest Sums
// https://onlinejudge.org/external/104/10487.pdf

#include <iostream>
#include <climits>

using namespace std;

void test_case(int t, int n)
{
	int a[n];
	int i, j, m, b, r, s, d, e;

	for (i = 0; i < n; i++)	{
		cin >> a[i];
	}
	cin >> m;
	cout << "Case " << t << ":" << "\n";
	while (m--)	{
		cin >> b;
		r = INT_MAX;
		for (i = 0; i < n - 1; i++)	{
			for (j = i + 1; j < n; j++)	{
				s = a[i] + a[j];
				d = abs(s - b);
				if (d < r)	{
					r = d;
					e = s;
				}
			}
		}
		cout << "Closest sum to " << b << " is " << e << ".\n";
	}
}

int main()
{
	int t = 0, n;
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(true)	{
		t++;
		cin >> n;
		if (n == 0)	{
			break;
		}
		test_case(t, n);
	}
	return 0;
}
		

