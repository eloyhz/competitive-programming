/*

CSES - Sum of Two Values

https://cses.fi/problemset/task/1640/
Date: 19/10/21

*/

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve_with_binary_search();

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve_with_binary_search();
}

void solve_with_binary_search() {
    int n, x;
    cin >> n >> x;
    vector<pair<int, int> > a(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        int y = x - a[i].first;
        int left = i + 1;
        int right = n - 1;
        while (left <= right)   {
            int mid = (left + right) / 2;
            if (a[mid].first == y)  {
                cout << a[i].second << " " << a[mid].second << endl;
                return;
            }
            else if (a[mid].first > y)  {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
    }
    cout << "IMPOSSIBLE\n";
}

void solve_with_hash()  {
    int n, x;
    cin >> n >> x;
    map<int, int> mp;
    for (int i = 1; i <= n; i++)    {
        int ai;
        cin >> ai;
        if (mp.find(x - ai) != mp.end())  {
            cout << i << " " << mp[x - ai] << endl;
            return;
        }
        mp[ai] = i;
    }
    cout << "IMPOSSIBLE" << endl;
}

void solve_with_two_pointers() {
  int n, x, v;
  cin >> n >> x;
  pair<int, int> a[n];
 
  for (int i = 0; i < n; i++) {
    cin >> v;
    a[i].first = v;
    a[i].second = i + 1;
  }
  sort(a, a + n);
  int left = 0;
  int right = n - 1;
  while (left < right)  {
    int y = a[left].first;
    int z = a[right].first;
    if (y + z == x)  {
      cout << a[left].second << " " << a[right].second << endl;
      break;
    }
    else if (y + z < x) {
      left++;
    }
    else if (y + z > x) {
      right--;
    }
  }
  if (left == right)  {
    cout << "IMPOSSIBLE\n";
  }
}
