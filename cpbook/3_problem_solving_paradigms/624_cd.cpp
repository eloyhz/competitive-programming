// UVa 00624 - CD
// https://onlinejudge.org/external/6/624.pdf

#include <iostream>
#include <vector>

using namespace std;

vector<int> tracks, subset, result;
int best, total, n, m;

void search(int k)
{
	if (k == n)	{
		int s = 0;
		vector<int> r;
		for (int i = 0; i < subset.size(); i++)	{
			s += tracks[subset[i]];
			r.push_back(tracks[subset[i]]);
		}
		if (s <= m && s >= best)	{
			best = s;
			result = r;
		}
	}	else	{
		search(k + 1);
		total += tracks[k];
		subset.push_back(k);
		if (total <= m)	{
			search(k + 1);
		}
		subset.pop_back();
		total -= tracks[k];
	}
}


void test_case()
{
	result.clear();
	best = 0;
	total = 0;
	search(0);
	int s = 0;
	for (auto r : result)	{
		cout << r << " ";
		s += r;
	}
	cout << "sum:" << s << "\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin >> m)	{
		tracks.clear();
		// cin >> m;
		cin >> n;
		for (int i = 0; i < n; i++)	{
			int t;
			cin >> t;
			tracks.push_back(t);
		}
		test_case();
	}
	return 0;
}

