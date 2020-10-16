/*

¡Acepta el reto!
158 - Los saltos de Mario
https://www.aceptaelreto.com/problem/statement.php?id=158&cat=5

Autor: eloyhz
Fecha: 16/oct/20

*/

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int up, down, prev, i;
        up = down = 0;
        scanf("%d", &prev);
        for (i = 1; i < n; i++) {
            int current;
            scanf("%d", &current);
            if (current > prev)  {
                up++;
            }
            else if (current < prev)    {
                down++;
            }
            prev = current;
       }
       printf("%d %d\n", up, down);
    } 
    return 0;
}
