#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)   {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main()  {
    int a, b, c;
    cin >> a >> b >> c;
    cout << (c % gcd(a, b) == 0 ? 1 : 0) << "\n";
    return 0;
}
