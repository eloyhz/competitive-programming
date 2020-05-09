#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main()
{
	int n;
	bool valid;
	int t;

	cin >> t;
	while (t-- > 0)	{
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)	{
			a[i] = i + 1;
		}
		do	{
			valid = true;
			for (int i = 0; i < n - 1; i++)	{
				int diff = abs(a[i] - a[i + 1]);
				if (diff < 2 || diff > 4)	{
					valid = false;
					break;
				}
			}
			if (valid)	{
				for (int i = 0; i < n; i++)	{
					cout << a[i] << " ";
				}
				cout << endl;
				break;
			}
		}	while (next_permutation(a, a + n));
		if (!valid)	{
			cout << "-1" << endl;
		}
	}

	return 0;
}

