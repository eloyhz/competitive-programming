#include <iostream>

using namespace std;

int n = 15;
int total = 0;
bool column[15];
bool diag1[29];
bool diag2[29];

void search(int y)
{
	if (y == n)	{
		total++;
		return;
	}	
	for (int x = 0; x < n; x++)	{
		if (column[x])	{
			continue;
		}
		if (diag1[x + y])	{
			continue;
		}
		if (diag2[x - y + n - 1])	{
			continue;
		}
		column[x] = diag1[x + y] = diag2[x - y + n - 1] = true;
		search(y + 1);
		column[x] = diag1[x + y] = diag2[x - y + n - 1] = false;
	}
}

int main()
{
	search(0);
	cout << total << endl;
}
