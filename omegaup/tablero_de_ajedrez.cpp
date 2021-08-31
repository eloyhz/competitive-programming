// omegaUp - Tablero de Ajedrez
// https://omegaup.com/arena/problem/Tablero-de-Ajedrez/
// 31-08-2021

#include <bits/stdc++.h>

using namespace std;

int main()  {
    char letra;
    int digito;
    cin >> letra >> digito;
    int casilla = letra - 'a' + 1 + digito;
    cout << (casilla % 2 == 0 ? "NEGRO" : "BLANCO") << endl;
}