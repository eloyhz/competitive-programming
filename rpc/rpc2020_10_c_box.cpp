// RPC 2020 - 10
// Problem C. Tetrooj Box

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int b, r, h, v, c;
    int box[101];

    cin >> b >> r;
    fill(box, box + 101, 0);
    while (r--) {
        cin >> h >> v >> c;
        int m = 0;
        for (int i = c; i < c + h; i++) {
            m = max(box[i], m);
        }
        for (int i = c; i < c + h; i++) {
            box[i] = m + v;
        }
    }
    cout << *max_element(box, box + 101) << endl;
    return 0;
}
