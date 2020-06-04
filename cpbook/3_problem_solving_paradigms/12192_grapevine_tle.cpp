// UVa 12192 - Grapevine
// https://onlinejudge.org/external/121/12192.pdf

#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <ctime>
#include <iomanip>

using namespace std;
using namespace std::chrono;

void fill(bool d, int p, int q, vector<vector<int>>& field, vector<vector<int>> & diagonals)
{
	int diff, size, step, a, b;
	vector<int> diag;

	size = q;
	for (int i = 0; i < q; i++)	{
		diag.clear();
		for (int s = 0; s < size; s++)	{
			diag.push_back(field[d ? s : i + s][d ? i + s : s]);
		}
		size--;
		diagonals.push_back(diag);
	}
	step = 1;
	size = q;
	diff = p - q;
	for (int i = 0; i < diff; i++)	{
		diag.clear();
		for (int s = 0; s < size; s++)	{
			diag.push_back(field[d ? step + s : s][d ? s : step + s]);
		}
		diagonals.push_back(diag);
		step++;
	}
	size = q - 1;
	for (int i = 0; i < q - 1; i++)	{
		diag.clear();
		for (int s = 0; s < size; s++)	{
			diag.push_back(field[d ? step + s : s][d ? s : step + s]);
		}
		diagonals.push_back(diag);
		step++;
		size--;
	}
}

void fill_diagonals(int n, int m, vector<vector<int>>& field, vector<vector<int>> & diagonals)
{
	if (n >= m)	{
		fill(true, n, m, field, diagonals);
	}	else	{
		fill(false, m, n, field, diagonals);
	}
}

int find_best(vector<vector<int>>& diagonals, int lower_value, int upper_value)
{
	int l, u, best = 0;
	
	// cout << "lower=" << lower_value << ", upper=" << upper_value << endl;
	for (auto diag : diagonals)	{
		l = lower_bound(diag.begin(), diag.end(), lower_value) - diag.begin();
		u = upper_bound(diag.begin(), diag.end(), upper_value) - diag.begin();
		/*
		cout << "[";
		for (auto d : diag)	{
			cout << d << " ";
		}
		cout << "]" << ", l=" << l << ", u=" << u << endl;
		*/
		best = max(best, u - l);
	}
	return best;
}

void test_case(int n, int m)	{
	int h, q, u, l, best;
	vector<vector<int>> field;
	vector<vector<int>> diagonals;
	
	for (int i = 0; i < n; i++) {
		vector<int> row;
		for (int j = 0; j < m; j++)	{
			cin >> h;
			row.push_back(h);
		}
		field.push_back(row);
	}
	fill_diagonals(n, m, field, diagonals);
	/*
	for (auto f : field)	{
		for (auto r : f)	{
			cout << r << " ";
		}
		cout << endl;
	}
	cout << "diagonals" << endl;
	for (auto d : diagonals)	{
		for (auto e : d)	{
			cout << e << " ";
		}
		cout << "\n";
	}
	*/
	cin >> q;
	for (int i = 0; i < q; i++)	{
		cin >> l >> u;
		best = find_best(diagonals, l, u);
		cout << best << "\n";
	}
	cout << "-\n";
}
		

int main()
{
	int n, m;

	time_t t_start, t_end;

	// ios::sync_with_stdio(0);
	// cin.tie(0);
	auto start = high_resolution_clock::now();
	time(&t_start);
	while (true)	{
		cin >> n >> m;
		if (n == 0 and m == 0)	{
			break;
		}
		test_case(n, m);
	}
	time(&t_end);
	double time_taken = double(t_end - t_start);
	cout << time_taken << setprecision(5) << " secs " << endl;
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << duration.count() << " microseconds" << endl;
	auto duration_secs = duration_cast<nanoseconds>(stop - start);
	cout << duration_secs.count() << " seconds" << endl;
	return 0;
}
