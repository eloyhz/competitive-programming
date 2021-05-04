/*

omegaUp 4954 - Tiringo-riringo
https://omegaup.com/arena/problem/probD/

Fecha: 03/05/2021

*/

#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<int> vi;

// O(N * Q) time | O(1) space
void solve_t1(int n, int q, vpii& ropes) {
    while (q--) {
        int qi;
        cin >> qi;
        int ans = 0;
        for (int i = 0; i < n; i++)
            if (ropes[i].first <= qi && qi <= ropes[i].second)
                ans++;
        cout << ans << "\n";
    }

}

// O(N + Q) time | O(4001) space
void solve_t2(int n, int q, vpii& ropes) {
    vi s(4001);

    for (auto r : ropes)
        for (int i = r.first; i <= r.second; i++)
            s[2000 + i]++;
    while (q--) {
        int qi;
        cin >> qi;
        if (qi >= -2000 && qi <= 2000)
            cout << s[2000 + qi] << "\n";
        else
            cout << "0\n";
    }
}

// O(N + N*log(N) + Q*log(N)) time | O(n) space
void solve_t3(int n, int q, vpii& ropes) {
    vi a(n);
    vi b(n);

    for (int i = 0; i < n; i++) {
        a[i] = ropes[i].first;
        b[i] = ropes[i].second;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    while (q--) {
        int qi;
        cin >> qi;
        int count_a = upper_bound(a.begin(), a.end(), qi) - a.begin();
        int count_b = b.end() - upper_bound(b.begin(), b.end(), qi - 1);
        cout << min(count_a, count_b) << "\n";
    }
}

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, q;
    cin >> n >> q;
    vpii ropes(n);
    for (int i = 0; i < n; i++)    
        cin >> ropes[i].first >> ropes[i].second;
    solve_t3(n, q, ropes);
    return 0;
}