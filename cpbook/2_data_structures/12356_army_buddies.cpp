// UVa 12356 - Army buddies
// https://onlinejudge.org/external/123/12356.pdf

#include <iostream>

using namespace std;

int main()
{
	int s, b, l, r, i, ln, rn;

	ios::sync_with_stdio(0);
	cin.tie(0);
	while (true)	{
		cin >> s >> b;
		if (s == 0 && b == 0)	{
			break;
		}
		int ls[s + 1], rs[s + 1];
		for (i = 1; i <= s; i++)	{
			ls[i] = i - 1;
			rs[i] = i + 1;
		}
		ls[1] = rs[s] = 0;
		for (i = 1; i <= b; i++)	{
			cin >> l >> r;
			ln = ls[l];
			rn = rs[r];
			ls[rn] = ln;
			rs[ln] = rn;
			//cout << (ln == 0 ? '*' : ln) << " " << (rn > 0 ? rn : '*') << "\n";
			if (ln > 0)	cout << ln;
			else cout << "*";
			cout << " ";
			if (rn > 0)	cout << rn;
			else cout << "*";
			cout << "\n";
		}
		cout << "-\n";
	}
}
