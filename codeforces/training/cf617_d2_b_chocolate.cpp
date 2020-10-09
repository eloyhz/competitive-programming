//
// Author: eloyhz
// Date: Oct/09/2020
//
// Codeforces (CF617-D2-B) - Chocolate
// https://codeforces.com/contest/617/problem/B
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> ones;
    for (int i = 1; i <= n; ++i)    {
        int ai; cin >> ai;
        if (ai) {
            ones.push_back(i);
        }
    }
    long long ans = ones.size() ? 1 : 0; 
    for (int i = 1; i < ones.size(); ++i)  {
        ans *= ones[i] - ones[i - 1];
    }
    cout << ans << endl;
    return 0;
}

