//
// Author: eloyhz
// Date: Oct/12/2020
//
// Codeforces (CF514-D2-B) - Han Solo and Lazer Gun
// https://codeforces.com/contest/514/problem/B
//

#include <bits/stdc++.h>

using namespace std;

typedef long long C;
typedef complex<C> P;

#define X real()
#define Y imag()

int main()
{
    int n, x0, y0;

    cin >> n >> x0 >> y0;
    P g = {x0, y0};
    P p[n];
    for (int i = 0; i < n; i++) {
        int xi, yi; cin >> xi >> yi;
        p[i] = P{xi, yi} - g;
    }
    bool d[n];
    fill(d, d + n, false);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (d[i]) 
            continue;
        d[i] = true;
        ans++;
        for (int j = i + 1; j < n; j++) {
            if (d[j]) 
                continue;
            if ((conj(p[i]) * p[j]).Y == 0) {  // p[i] and p[j] are collinear
                d[j] = true;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}

