//
// Author: eloyhz
// Date: Oct/13/2020
//
// Codeforces (CF716-D2-B) - Complete the Word
// https://codeforces.com/contest/716/problem/B
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    int n = s.size();
    bool ok = false;
    for (int i = 0; i <= n - 26; i++) {
        int alpha[26]; fill(alpha, alpha + 26, 0);
        int marks = 0;
        bool valid = true;
        for (int j = 0; j < 26; j++)   {
            if (s[i + j] == '?')    {
                marks++;
                continue;
            }
            int letter = s[i + j] - 'A';
            if (++alpha[letter] > 2)    {
                valid = false;
                break;
            }
        }
        if (!valid || count(alpha, alpha + 26, 0) != marks) {
            continue;
        }
        ok = true;
        vector<char> avail;
        for (int j = 0; j < 26; j++)    {
            if (alpha[j] == 0)  {
                avail.push_back('A' + j);
            }
        }
        for (int j = 0; j < 26; j++)    {
            if (s[i + j] == '?')    {
                s[i + j] = avail.back();
                avail.pop_back();
            }
        }
        break;
    }
    if (ok) {
        for (int i = 0; i < n; i++) {
            if (s[i] == '?')    {
                s[i] = 'A';
            }
        }
        cout << s << endl;
    }
    else    {
        cout << -1 << endl;
    }
    return 0;
}

