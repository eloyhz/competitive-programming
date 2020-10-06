#include <bits/stdc++.h>

using namespace std;

int count_digits(int num, int digit)
{
    int count = 0;

    while (num > 0) {
        if (num % 10 == digit)  {
            count++;
        }
        num /= 10;
    }
    return count;
}

int main()
{
    int a, b, d;
    int ans = 0;

    cin >> a >> b >> d;
    for (int i = a; i <= b; i++)    {
        ans += count_digits(i, d);
    }
    cout << ans << endl;
}
