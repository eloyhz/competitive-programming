//
// AtCoder Beginner Contest 184 [VIRTUAL]
//
// B - Quizzes [AC]
// https://atcoder.jp/contests/abc184/tasks/abc184_b
//
// Author: eloyhz
// Date: Nov/28/2020
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, x;
	string s;
	cin >> n >> x;
	cin >> s;
	for (auto c : s)	{
		if (c == 'x' && x != 0)
			x--;
		else if (c == 'o')
			x++;
	}
	cout << x << endl;
    return 0;
}

