/*

CSES - Traffic Lights

https://cses.fi/problemset/task/1163/
Date: 22/10/21

*/

#include <bits/stdc++.h>

using namespace std;

int main()  {
    cin.tie(nullptr)->sync_with_stdio(false);
    int x, n;
    cin >> x >> n;
    vector<int> p(n);
    for (int &pi : p)
        cin >> pi;
    set<int> st = {0, x};
    multiset<int> ms = {x};
    for (int &pi : p)   {
        auto it = st.upper_bound(pi);
        int right = *it;
        it--;
        int left = *it;
        ms.erase(ms.find(right-left));
        st.insert(pi);
        ms.insert(right - pi);
        ms.insert(pi - left);
        cout << *--ms.end() << " ";
    }
    cout << endl;
}