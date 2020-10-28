//
// Codeforces Round #653 (Div. 3) [VIRTUAL]
//
// C. Move Brackets [AC]
// https://codeforces.com/contest/1374/problem/C
//
// Author: eloyhz
// Date: Oct/27/2020
//
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;  cin >> t;
    while (t--) {
        int n;  cin >> n;
        string s;   cin >> s;
        list<char> l(s.begin(), s.end());
        int count = 0;
        int ans = 0;
        auto it = l.begin();
        while (it != l.end())   {
            if (*it == '(') {
                count++;
            }
            else if (*it == ')')    {
                count--;
            }
            if (count < 0)  {
                it = l.erase(it);
                l.push_back(')');
                ans++;
                count = 0;
            }
            else    {
                ++it;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

