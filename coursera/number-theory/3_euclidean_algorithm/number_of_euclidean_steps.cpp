#include <bits/stdc++.h>

using namespace std;

int steps = 0;

int gcd(int a, int b)   {
    if (a < b)  return gcd(b, a);
    if (b == 0) return a;
    steps++;
    return gcd(b, a % b);
}

int main()  {
    int a, b;
    cin >> a >> b;
    gcd(a, b);
    cout << steps << endl;
    return 0;
}