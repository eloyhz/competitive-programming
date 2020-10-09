//
// Author: eloyhz
// Date: Oct/09/2020
//
// Codeforces (CF385-D2-B) - Bear and Strings
// https://codeforces.com/contest/385/problem/B
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count = 0;
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n - 4; i++) {
        bool found = false;
        for (int j = i + 3; j < n; j++) {
            if (!found && s[j - 3] == 'b' && s[j - 2] == 'e'
                && s[j - 1] == 'a' && s[j] == 'r')
            {
                found = true;
            }
            if (found)  {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}

