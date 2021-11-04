/*
 * ICPC - Gran Premio de Mexico 2021 - 3era Fecha
 * E. Escalator
 * https://codeforces.com/gym/103388/problem/E
 * 3/nov/2021
 */

#include <bits/stdc++.h>

using namespace std;

int main()  {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (auto &x  : a)
        cin >> x.first >> x.second;
    int c_time = a[0].first + 10, c_dir = a[0].second;
    bool awaiting = false;
    int i = 1;
    while (i < n) {
        int t = a[i].first, d = a[i].second;
        if (t < c_time) {
            if (d == c_dir)
                c_time = t + 10;
            else
                awaiting = true;
        }
        else {
            if (awaiting)   {
                c_dir = 1 - c_dir;
                c_time += 10;
                awaiting = false;
                continue;
            }
            else    {
                c_dir = d;
                c_time = t + 10;
            }
        }
        i++;
    }
    if (awaiting)
        c_time += 10;
    cout << c_time << endl;
}