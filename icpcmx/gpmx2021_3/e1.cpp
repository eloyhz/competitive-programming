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
    set<pair<int, int>> st;
    for (int i = 0; i < n; i++) {
        int t, d;
        cin >> t >> d;
        st.insert({t, d});
    }
    int c_time = -1, c_dir = -1;
    while (!st.empty()) {
        pair<int, int> p = *st.begin();
        st.erase(st.begin());
        if (p.first >= c_time)  {
            c_time = p.first + 10;
            c_dir = p.second;
        }
        else {
            if (p.second == c_dir)
                c_time = p.first + 10;
            else
                st.insert({c_time, p.second});
        }
    }
    cout << c_time << endl;
}