#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)   {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main()  {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans = gcd(a[0], a[1]);
    for (int i = 2; i < n; i++)
        ans = gcd(ans, a[i]);
    cout << ans << "\n";
    return 0;
}
