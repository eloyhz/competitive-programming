//
// Author: eloyhz
// Date: Sep/17/2020
//
// Codeforces (CF810-D2-B) - Summer sell-off
// https://codeforces.com/contest/810/problem/B
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, f, k, l;
    vector<tuple<int, int, int>> a;

    cin >> n >> f;
    while (n--) {
        cin >> k >> l;
        // from editorial
        a.push_back({min(k * 2, l) - min(k, l), k, l});
    }
    sort(a.begin(), a.end(), greater<tuple<int, int, int>>());
    long long ans = 0;
    int factor = 2;
    for (auto d : a)    {
        if (f > 0)  {
            f--;
        }
        else    {
            factor = 1;
        }
        ans += min(get<1>(d) * factor, get<2>(d));
    }
    cout << ans << endl;

    return 0;
}
