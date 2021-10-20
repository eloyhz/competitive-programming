/*

CSES - Sum of Three Values

https://cses.fi/problemset/task/1641/
Date: 19/10/21

*/

#include <bits/stdc++.h>

using namespace std;
using ll = long long;


/*
def findTriplets(arr,n,k):
    found = False
    for i in range(n - 1):
        s = {}
        for j in range(i + 1, n):
            x = k-(arr[i] + arr[j])
            if x in s:
                print(s[x]+1, i+1, j+1)
                return
            else:
                s[arr[j]]=j
    print(-1)
    return
*/

void solve_tle()    {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++) {
        map<int, int> mp;
        int y = x - a[i];
        for (int j = i + 1; j < n; j++)    {
            if (mp.find(y - a[j]) != mp.end())  {
                cout << i + 1 << " " << j + 1 << " " << mp[y - a[j]] + 1 << endl;
            }
            mp[a[j]] = j;
        }
    }
    cout << "IMPOSSIBLE\n";
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
        int left = i + 1;
        int right = n - 1;
        int y = x - a[i].first;
        while (left < right)    {
            int w = a[left].first;
            int z = a[right].first;
            if (w + z == y) {
                cout << a[i].second << " " 
                    << a[left].second << " " 
                    << a[right].second << endl;
                return;
            }
            else if (w + z > y) {
                right--;
            }
            else {
                left++;
            }
        }
    }
    cout << "IMPOSSIBLE\n";
}

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve_tle();

}
