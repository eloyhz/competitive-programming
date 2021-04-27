/*

UVa 10910 - Marks Distribution (Memoization version)
https://onlinejudge.org/external/109/10910.pdf
Solution from Algorithmic Thinking book (https://nostarch.com/algorithmic-thinking)

Date: 27/04/2021

*/

#include <stdio.h>

#define SIZE 70

int solve(int n, int t, int p, int memo[SIZE + 1][SIZE + 1])    {
    int total, m;

    if (memo[n][t] != -1)
        return memo[n][t];
    if (n == 0 && t == 0) 
        return 1;
    if (n == 0)
        return 0;
    total = 0;
    for (m = p; m <= t; m++)
        total += solve(n - 1, t - m, p, memo);
    memo[n][t] = total;
    return memo[n][t];
}

int main(void)  {
    int k, i, x, y, n, t, p;
    int memo[SIZE + 1][SIZE + 1];
    scanf("%d", &k);
    for (i = 0; i < k; i++) {
        scanf("%d%d%d", &n, &t, &p);
        for (x = 0; x <= SIZE; x++)
            for (y = 0; y <= SIZE; y++)
                memo[x][y] = -1;
        printf("%d\n", solve(n, t, p, memo));
/*         for (x = 0; x <= n; x++)    {
            for (y = 0; y <= t; y++)
                printf("%2d ", memo[x][y]);
            printf("\n");
        }
 */    }
    return 0;
}
