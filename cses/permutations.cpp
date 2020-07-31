// CSES - Permutations
// https://cses.fi/problemset/task/1070

#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;
	if (n == 2 || n == 3)	{
		cout << "NO SOLUTION\n";
	}
	else	{
		int even, odd;

		if (n % 2 == 0)	{
			even = n;
			odd = n - 1;
		}
		else	{
			odd = n;
			even = n - 1;
		}
		for (int i = odd; i > 0; i -= 2)	{
			cout << i << " ";
		}
		for (int i = even; i > 1; i -= 2)	{
			cout << i << " ";
		}
		cout << "\n";
	}
	return 0;
}

