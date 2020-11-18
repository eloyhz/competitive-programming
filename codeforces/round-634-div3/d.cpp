//
// Codeforces Round #634 (Div. 3) [VIRTUAL]
//
// D. Anti-Sudoku [AC]
// https://codeforces.com/contest/1335/problem/D
//
// Author: eloyhz
// Date: Nov/18/2020
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
		string a[9];
		for (int i = 0; i < 9; i++)	cin >> a[i];
		if (++a[0][0] == ':') a[0][0] = '1';
		if (++a[1][3] == ':') a[1][3] = '1';
		if (++a[2][6] == ':') a[2][6] = '1';
		if (++a[3][1] == ':') a[3][1] = '1';
		if (++a[4][4] == ':') a[4][4] = '1';
		if (++a[5][7] == ':') a[5][7] = '1';
		if (++a[6][2] == ':') a[6][2] = '1';
		if (++a[7][5] == ':') a[7][5] = '1';
		if (++a[8][8] == ':') a[8][8] = '1';
		for (int i = 0; i < 9; i++) cout << a[i] << endl;

    }

    return 0;
}

