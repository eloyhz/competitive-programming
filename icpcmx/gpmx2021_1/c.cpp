// 2021 ICPC Gran Premio de Mexico 1ra Fecha
// C. Cypher Decypher [AC]
// https://codeforces.com/gym/103274/problem/C
// 07-09-2021

#include <bits/stdc++.h>

using namespace std;

const int MAX = 1'000'000;
vector<int> sieve(MAX + 1);
vector<int> prefix(MAX + 1);

void build_sieve()  {
    for (int x = 2; x <= MAX; x++)  {
        if (sieve[x]) continue;
        for (int u = 2 * x; u <= MAX; u += x) {
            sieve[u] = x;
        }
    }
}

void build_prefix() {
    int count = 0;
    for (int i = 2; i <= MAX; i++)  {
        if (sieve[i] == 0)  {
            count++;
        }
        prefix[i] = count;
    }
}

void solve()    {
    int i, j;
    cin >> i >> j;
    int ans = prefix[j] - prefix[i - 1];
    cout << ans << endl;
}

int main()  {
    build_sieve();
    build_prefix();
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
    return 0;
}