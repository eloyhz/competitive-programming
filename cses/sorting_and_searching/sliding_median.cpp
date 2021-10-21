/*

CSES - Sliding Median

https://cses.fi/problemset/task/1076/
Date: 20/10/21

*/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, less_equal<int>, rb_tree_tag, 
    tree_order_statistics_node_update> indexed_multiset;

int main()  {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    indexed_multiset ms;
    queue<int> q;
    for (int i = 0; i < k; i++) {
        q.push(a[i]);
        ms.insert(a[i]);
    }
    for (int i = k; i <= n; i++) {
        cout << *ms.find_by_order(k/2 - (1 - k%2 != 0)) << " ";
        // ms.erase(ms.upper_bound(q.front()));
        ms.erase(ms.find_by_order(ms.order_of_key(q.front())));
        q.pop();
        q.push(a[i]);
        ms.insert(a[i]);
    }
    cout << endl;
}