// Codeforces (CF519-D2-B) - A and B and Compilation Errors [AC]
// http://codeforces.com/contest/519/problem/B
// Date: 07/06/21



#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n;
    cin >> n;
    vector<int> a(n), b(n - 1), c(n - 2);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
        cin >> b[i];
    for (int i = 0; i < n - 2; i++)
        cin >> c[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    int diff1 = 0, diff2 = 0;
    for (int i = 0; i < n - 1; i++)
        if (a[i] != b[i])   {
            diff1 = a[i];
            break;
        }
    if (diff1 == 0)
        diff1 = a.back();
    for (int i = 0; i < n - 2; i++)
        if (b[i] != c[i])   {
            diff2 = b[i];
            break;
        }
    if (diff2 == 0)
        diff2 = b.back();
    cout << diff1 << "\n" << diff2 << "\n";
    return 0;
}