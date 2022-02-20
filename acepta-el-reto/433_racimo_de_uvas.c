/**
 * Acepta el reto - Racimos de uvas
 * https://www.aceptaelreto.com/problem/statement.php?id=433&cat=6
 * 20-02-2022
 */


#include <stdio.h>

int main(void)  {
    int n;
    for (;;)    {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        int nivel = 0;
        int suma = 0;
        while (suma < n)   {
            nivel++;
            suma += nivel;
        }
        printf("%d\n", nivel);
    }
    return 0;
}