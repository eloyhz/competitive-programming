//
// AtCoder Beginner Contest 180 [VIRTUAL]
// B - Various distances [AC]
// https://atcoder.jp/contests/abc180/tasks/abc180_b
//
// Author: eloyhz
// Date: Oct/29/2020
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
        cin >> x[i];
    long long manh = 0;
    long long eucl = 0;
    long long cheb = 0;
    for (int i = 0; i < n; i++) {
        manh += abs(x[i]);
        eucl += pow(x[i], 2);
        cheb = max(cheb, (long long)abs(x[i]));
    }
    cout << manh << endl;
    cout << setprecision(18) << sqrt(eucl) << endl;
    cout << cheb << endl;

    return 0;
}

