//
// Author: eloyhz
// Date: Oct/09/2020
//
// Codeforces (CF144-D2-B) - Meeting
// https://codeforces.com/contest/144/problem/B
//

#include <bits/stdc++.h>

using namespace std;

double distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main()
{
    int xa, ya, xb, yb, n;
    cin >> xa >> ya >> xb >> yb;
    cin >> n;
    vector<tuple<int, int, int>> heaters;
    while (n--) {
        int x, y, r;
        cin >> x >> y >> r;
        heaters.push_back({x, y, r});
    }
    vector<pair<int, int>> generals;
    if (xa > xb)    {
        swap(xa, xb);
    }
    if (ya > yb)    {
        swap(ya, yb);
    }
    for (int i = xa; i <= xb; ++i)  {
        generals.push_back({i, ya});
        generals.push_back({i, yb});
    }
    for (int i = ya + 1; i < yb; ++i)   {
        generals.push_back({xa, i});
        generals.push_back({xb, i});
    }
    int blankets = 0;
    for (auto g : generals) {
        int xg = g.first, yg = g.second;
        bool needs_blanket = true;
        for (auto h : heaters)  {
            int xh, yh, r;
            tie(xh, yh, r) = h;
            double d = distance(xg, yg, xh, yh);
            if (d <= r)  {
                needs_blanket = false;
                break;
            }
        }
        if (needs_blanket)  {
            blankets++;
        }
    }
    cout << blankets << endl;

    return 0;
}

