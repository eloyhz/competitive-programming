// Codeforces (CF137-D2-B) - Permutation [AC]
// https://codeforces.com/contest/137/problem/B
// Date: 04/06/21


#include <bits/stdc++.h>

using namespace std;

int solve(int n)    {
    int g = 0;
    int perm[5001];
    fill(perm, perm + 5001, 0);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a > n)
            g++;
        else if (++perm[a] > 1)
            g++;
    }
    return g;
}

int solve_editorial(int n)  {
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a > n)
            continue;
        mp[a]++;
    }
    return n - mp.size();
}

int main()  {
    int n;
    cin >> n;
    cout << solve_editorial(n) << endl;
    return 0;
}