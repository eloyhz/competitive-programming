// UVa 1237 - Expert Enough?
// https://onlinejudge.org/external/12/1237.pdf

#include <iostream>
#include <vector>
#include <string>
#include <tuple>

using namespace std;

int main()
{
	int t, d, q, l, h, n, p;
	string m, maker;
	vector<tuple<string, int, int>> db;

	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> t;
	while (t-- > 0)	{
		cin >> d;
		db.clear();
		while (d-- > 0)	{
			cin >> m >> l >> h;
			db.push_back(make_tuple(m, l, h));
		}
		cin >> q;
		while (q-- > 0)	{
			maker = "UNDETERMINED";
			n = 0;
			cin >> p;
			for (auto a : db)	{
				if (get<1>(a) <= p && p <= get<2>(a))	{
					maker = get<0>(a);
					n++;
				}
			}
			if (n == 1)	{
				cout << maker << "\n";
			}	else	{
				cout << "UNDETERMINED\n";
			}
		}
		if (t > 0)	{
			cout << "\n";
		}
	}
	return 0;
}

