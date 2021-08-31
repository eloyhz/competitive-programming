// omegaUp - Durante la comida
// https://omegaup.com/arena/problem/Durante-la-comida/
// 31-08-2021

#include <bits/stdc++.h>

using namespace std;

int main()  {
    map<char, int> m;
    set<char> miguel = {'m', 'i', 'g', 'u', 'e', 'l'};
    string s;
    cin >> s;
    for (char c: s) {
        if (miguel.find(c) != miguel.end()) {
            m[c]++;
        }
    }
    if (m.size() < 6)   {
        cout << 0 << endl;
    }
    else {
        int ans = INT_MAX;
        for (auto it = m.begin(); it != m.end(); it++)
            ans = min(ans, it->second);
        cout << ans << endl;
    }
}