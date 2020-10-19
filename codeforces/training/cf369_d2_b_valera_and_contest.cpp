//
// Author: eloyhz
// Date: Oct/19/2020
//
// Codeforces (CF369-D2-B) - Valera and Contest
// https://codeforces.com/contest/369/problem/B
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, l, r, sall, sk;
    vector<int> a;
    cin >> n >> k >> l >> r >> sall >> sk;
    
    int rem = sk % k;
    for (int i = 0; i < k; i++) {
        int ai = sk / k + (rem > 0);
        rem--;
        a.push_back(ai);
    }
    if (k != n) {
        sk = sall - sk;
        k = n - k;
        rem = sk % k;
        for (int i = 0; i < k; i++) {
            int ai = sk / k + (rem > 0);
            rem--;
            a.push_back(ai);
        }
    }
    for (auto x : a)
        cout << x << " ";
    cout << endl;

    return 0;
}

