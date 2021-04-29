/*

omegaUp 6127 - Adivina el número
https://omegaup.com/arena/problem/COMI-Adivina-el-numero/

Fecha: 29/04/2021

*/

#include "AdivinaElNumero.h"

#include <bits/stdc++.h>
using namespace std;

void adivina(long long a, long long b)	{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long x = a + (b - a) / 2;
	long long p;

	while (p = pista(x))	{
		if (p < 0)
			b = x;
		else
			a = x;
		x = a + (b - a) / 2;
	}
}
