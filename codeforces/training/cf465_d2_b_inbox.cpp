// Codeforces (CF465-D2-B) - Inbox (100500) [AC]
// https://codeforces.com/contest/465/problem/B
// Date: 03/06/21
// 

#include <bits/stdc++.h>

using namespace std;

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    bool in_block = false;
    int blocks = 0, unread = 0;
    for (int i = 0; i < n; i++) {
        int l;
        cin >> l;
        if (l == 1) {
            unread++;
            if (!in_block)  {
                in_block = true;
                blocks++;
            }
        }
        else    {
            in_block = false;
        }
    }
    if (unread > 0 && blocks > 0)
        unread += blocks - 1;
    cout << unread << endl;
    return 0;
}