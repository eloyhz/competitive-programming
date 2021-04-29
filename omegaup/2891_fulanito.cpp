/*

omegaUp 2891 - Fulanito
https://omegaup.com/arena/problem/Fulanito/

Fecha: 29/04/2021

*/

#include <bits/stdc++.h>

using namespace std;

int main()	{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, q;
	cin >> q >> n;
	vector<int> x(n);
	for (int i = 0; i < n; i++)
		cin >> x[i];
	vector<long long> s(n);
	s[0] = x[0];
	for (int i = 1; i < n; i++)
		s[i] = x[i] + s[i-1];
	for (int i = 0; i < q; i++)	{
		int g;
		cin >> g;
		auto h = upper_bound(s.begin(), s.end(), g);
		if (h == s.begin())
			cout << "0 " << g << "\n";
		else if (h == s.end())
			cout << n << " " << g - s.back() << "\n";
		else {
			h--;
			cout << h - s.begin() + 1 << " " << g - *h << "\n";
		}
	}
	return 0;
}
