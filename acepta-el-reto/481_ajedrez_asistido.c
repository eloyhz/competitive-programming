/*

¡Acepta el reto!
481 - Ajedrez asistido por computador
https://www.aceptaelreto.com/problem/statement.php?id=481

Autor: eloyhz
Fecha: 16/oct/20

*/

#include <stdio.h>

int main()
{
    int fila, columna;

    while (scanf("%d %d", &fila, &columna), (fila || columna)) {
        switch(fila)    {
            case 1: printf("h"); break;
            case 2: printf("g"); break;
            case 3: printf("f"); break;
            case 4: printf("e"); break;
            case 5: printf("d"); break;
            case 6: printf("c"); break;
            case 7: printf("b"); break;
            case 8: printf("a"); break;
        }
        printf("%d\n", columna);
    }
    return 0;
}
