// omegaUp - Suma Números
// https://omegaup.com/arena/problem/Suma-Numeros/
// 06-09-2021

#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n;
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        int sum = 0;
        for (int i = a; i <= b; i++)
            sum += i;
        while (sum >= 10)    {
            int a = sum;
            int b = 0;
            while (a > 0)    {
                b += a % 10;
                a /= 10;
            }
            sum = b;
        }
        cout << sum << endl;
    }
}