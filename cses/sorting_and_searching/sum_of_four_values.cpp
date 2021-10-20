/*

CSES - Sum of Four Values

https://cses.fi/problemset/task/1642/
Date: 19/10/21

*/

#include <bits/stdc++.h>

using namespace std;
using ll = long long;


bool solve3(int n, int x, int from, vector<pair<int, int>> &a)    {
    for (int i = from; i < n; i++) {
        int left = i + 1;
        int right = n - 1;
        int y = x - a[i].first;
        while (left < right)    {
            int w = a[left].first;
            int z = a[right].first;
            if (w + z == y) {
                cout << a[i].second << " " 
                    << a[left].second << " " 
                    << a[right].second << " ";
                return true;
            }
            else if (w + z > y) {
                right--;
            }
            else {
                left++;
            }
        }
    }
    return false;
}

void solve()    {
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        if (solve3(n, x - a[i].first, i + 1, a))   {
            cout << a[i].second << endl;
            return;
        }
    }
    cout << "IMPOSSIBLE\n";
}

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

}
