/*

omegaUp 6127 - Adivina el número
https://omegaup.com/arena/problem/COMI-Adivina-el-numero/

Fecha: 29/04/2021

*/

#include "AdivinaElNumero.h"

// Iterativo
void adivina(long long a, long long b)	{
	while (true)	{
		long long x = a + (b - a) / 2;
		long long p = pista(x);
		if (p == 0)
			break;
		else if (p < 0)
			b = x - 1;
		else
			a = x + 1;
	}
}

// Recursivo
void adivina(long long a, long long b)	{
	long long x = a + (b - a) / 2;
	long long p = pista(x);
	if (p == 0)
		return;
	else if (p < 0)
		adivina(a, x - 1);
	else
		adivina(x + 1, b);
}
