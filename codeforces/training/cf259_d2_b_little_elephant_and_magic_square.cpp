// Codeforces (CF259-D2-B) - Little Elephant and Magic Square [AC]
// https://codeforces.com/contest/259/problem/B
// Date: 04/06/21


#include <bits/stdc++.h>

using namespace std;

int ms[3][3];

void solve()    {
    int s1 = ms[0][1] + ms[0][2];
    int s2 = ms[1][0] + ms[1][2];
    int s3 = ms[2][0] + ms[2][1];
    ms[1][1] = s2 / 2;
    int diag = s2 + ms[1][1];
    ms[0][0] = diag - s1;
    ms[2][2] = diag - s3;
}

int main()  {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> ms[i][j];
    solve();
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << ms[i][j] << " ";
        cout << endl;
    }
    return 0;
}
