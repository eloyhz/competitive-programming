// UVa 146 - ID Codes
// https://onlinejudge.org/external/1/146.pdf

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string s;

	while (true)
	{
		cin >> s;
		if (s == "#")	{
			break;
		}
		bool has_next = next_permutation(s.begin(), s.end());
		if (has_next)	{
			cout << s << endl;
		}
		else	{
			cout << "No Successor" << endl;
		}
	}

	return 0;
}
