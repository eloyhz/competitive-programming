// omegaUp - Pares e impares
// https://omegaup.com/arena/problem/Pares-e-impares/
// 06-09-2021

#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n;
    cin >> n;
    int pares = 0, impares = 0;
    while (n--) {
        int a;
        cin >> a;
        if (a % 2)
            impares++;
        else
            pares++;
    }
    cout << pares << " " << impares << endl;
}