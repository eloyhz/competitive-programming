#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 1; i < n; i++) {
        cout << "? " << 1 << " " << i + 1 << endl;
        fflush(stdout);
        cin >> a[i];
    }
    int x, y, z;
    cout << "? 2 3" << endl;
    fflush(stdout);
    x = a[1];
    y = a[2];
    cin >> z;
    a[0] = (x + y - z) / 2;
    for (int i = 1; i < n; i++)
        a[i] -= a[0];
    cout << "! ";
    for (int x : a) {
        cout << x << " ";
    }
    cout << endl;
    fflush(stdout);
}