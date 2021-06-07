// Codeforces (CF43-D2-B) - Letter [AC]
// https://codeforces.com/contest/43/problem/B
// Date: 07/06/21



#include <bits/stdc++.h>

using namespace std;

int main()  {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    bool ok = true;
    for (int i = 0; i < s2.size(); i++) {
        if (s2[i] == ' ')
            continue;
        bool found = false;
        for (int j = 0; j < s1.size(); j++) {
            if (s2[i] == s1[j]) {
                found = true;
                s1[j] = '#';
                break;
            }
        }
        if (!found) {
            ok = false;
            break;
        }
    }
    cout << (ok ? "YES" : "NO") << endl;
    return 0;
}