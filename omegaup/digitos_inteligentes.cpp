// omegaUp - Dígitos Inteligentes
// https://omegaup.com/arena/problem/Digitos-Inteligentes--/
// 06-09-2021


#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n;
    cin >> n;
    while (n--) {
        long long l, r;
        cin >> l >> r;
        long long ans = 0;
        for (long long i = l; i <= r; i++)    {
            long long j = i;
            while (j > 0)   {
                ans += j % 10;
                j /= 10;
            }
        }
        cout << ans << endl;
    }

}