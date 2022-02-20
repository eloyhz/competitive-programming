/**
 * Acepta el reto - Suma descendente
 * https://www.aceptaelreto.com/problem/statement.php?id=265
 * 19-02-2022
 */

#include <stdio.h>

int main(void)  {
    int n;
    while(1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        int num = 0;
        int sum = 0;
        int d = 1;
        while (n > 0)   {
            num += n%10*d;
            n /= 10;
            d *= 10;
            sum += num;
        }
        printf("%d\n", sum);
    }
    return 0;
}