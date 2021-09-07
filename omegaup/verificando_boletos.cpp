// omegaUp - Verificando Boletos
// https://omegaup.com/arena/problem/Verificando-Boletos/
// 06-09-2021

#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n;
    cin >> n;
    vector<int> a(n);
    int s = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }
    int h = 0;
    for (int i = 0; i < n / 2; i++) {
        h += a[i];
    }
    if (h == s / 2)
        cout << h << " 1\n"; 
    else
        cout << s << " 0\n";
}