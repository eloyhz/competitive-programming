// UVa 11849 - CD
// https://onlinejudge.org/external/118/11849.pdf

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>	// std::set_intersection

using namespace std;

void test_case(int n, int m)
{
	set<int> jack, jill;
	int cd;
	vector<int> v(n < m ? n : m);

	while (n--)	{
		cin >> cd;
		jack.insert(cd);
	}
	while (m--)	{
		cin >> cd;
		jill.insert(cd);
	}
	auto it = set_intersection(jack.begin(), jack.end(), jill.begin(), jill.end(), v.begin());
	cout << it - v.begin() << "\n";
}

int main()
{
	int n, m;

	ios::sync_with_stdio(0);
	cin.tie(0);
	while (true)	{
		cin >> n >> m;
		if (n == 0 && m == 0)	{
			break;
		}
		test_case(n, m);
	}
	return 0;
}
