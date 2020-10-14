//
// Author: eloyhz
// Date: Oct/14/2020
//
// Codeforces (CF141-D2-B) - Hopscotch
// https://codeforces.com/contest/141/problem/B
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, x, y;
    cin >> a >> x >> y;

    if (y % a == 0) {
        cout << -1 << endl;
    }
    else    {
        int level = y / a + 1;
        if (level == 1) {
            cout << (x > -a/2.0 && x < a/2.0 ? 1 : -1) << endl;
        }
        else    {
            int square = 2;
            for (int i = 2; i < level; i++) {
                square += (i % 2 == 0 ? 1 : 2);
            }
            if (level % 2 == 0) {
                cout << (x > -a/2.0 && x < a/2.0 ? square : -1) << endl;
            }
            else    {
                if (x > -a && x < 0)    {
                    cout << square << endl;
                }
                else if (x > 0 && x < a)    {
                    cout << square + 1 << endl;
                }
                else    {
                    cout << -1 << endl;
                }
            }
        }
    }
    return 0;
}

