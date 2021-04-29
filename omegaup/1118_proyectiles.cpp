/*

omegaUp 1118 - Proyectiles
https://omegaup.com/arena/problem/Proyectiles/

Fecha: 29/04/2021

*/


#include <bits/stdc++.h>

using namespace std;

int main()	{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;
	vector<pair<int, int>> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i].first >> a[i].second;
	sort(a.begin(), a.end());
	for (int i = 0; i < k; i++)	{
		pair<int, int> p;
		cin >> p.first >> p.second;
		if (binary_search(a.begin(), a.end(), p))
			cout << 0 << "\n";
		else
			cout << 1 << "\n"; 
	}
	return 0;
}

