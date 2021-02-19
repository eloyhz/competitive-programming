// Codeforces (CF493-D2-B) - Vasya and Wrestling [AC]
// https://codeforces.com/contest/493/problem/B
// 

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, ai;
	vector<int> vx, vy;
	long long sx = 0, sy = 0;
	int last = 0;

	cin >> n;
	while (n--)	{
		cin >> ai;
		if (ai > 0)	{
			sx += ai;
			last = 1;
			vx.push_back(ai);
		}
		else	{
			sy += -ai;
			last = 2;
			vy.push_back(-ai);
		}
	}
	if (sx > sy)
		cout << "first\n";
	else if (sx < sy)
		cout << "second\n";
	else	{
		string who = (last == 1 ? "first" : "second");
		for (int i = 0; i < vx.size() && i < vy.size(); i++)	{
			if (vx[i] > vy[i])	{
				who = "first";
				break;
			}
			else if (vx[i] < vy[i])	{
				who = "second";
				break;
			}
		}
		cout << who << endl;
	}
	return 0;
}

