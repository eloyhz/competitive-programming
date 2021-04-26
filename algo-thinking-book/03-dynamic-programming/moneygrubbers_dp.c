/*

UVA 10980 - Lowest Price in Town
https://onlinejudge.org/external/109/10980.pdf
Solution from Algorithmic Thinking book (https://nostarch.com/algorithmic-thinking)

Date: 26/04/2021

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SCHEMES 20
#define SIZE 200

double min(double v1, double v2)    {
    if (v1 < v2)
        return v1;
    else
        return v2;
}

int get_number(int *num)    {
    int ch;
    int ret = 0;
    ch = getchar();
    while (ch != ' ' && ch != '\n') {
        ret = ret * 10 + ch - '0';
        ch = getchar();
    }
    *num = ret;
    return ch == ' ';
}

double solve(int num[], double price[], int num_schemes, double unit_price, int num_items, double dp[])   {
    double best;
    int i, j;
    dp[0] = 0;
    for (i = 1; i < SIZE; i++)  {
        best = dp[i - 1] + unit_price;
        for (j = 0; j < num_schemes; j++) 
            if (i - num[j] >= 0) 
                best = min(best, dp[i - num[j]] + price[j]);
        dp[i] = best;
    }
    best = dp[num_items];
    for (i = num_items + 1; i < SIZE; i++)
        best = min(best, dp[i]);
    return best;
}

int main()  {
    int test_case, num_schemes, num_items, more, i;
    double unit_price, result;
    int num[MAX_SCHEMES];
    double price[MAX_SCHEMES];
    double dp[SIZE];
    test_case = 0;
    while (scanf("%lf%d", &unit_price, &num_schemes) != -1) {
        test_case++;
        for (i = 0; i < num_schemes; i++)
            scanf("%d%lf", &num[i], &price[i]);
        scanf(" ");
        printf("Case %d:\n", test_case);
        for (i = 0; i < SIZE; i++)
            dp[i] = -1;
        more = get_number(&num_items);
        while (more)    {
            result = solve(num, price, num_schemes, unit_price, num_items, dp);
            printf("Buy %d for $%.2f\n", num_items, result);
            more = get_number(&num_items);
        }
        result = solve(num, price, num_schemes, unit_price, num_items, dp);
        printf("Buy %d for $%.2f\n", num_items, result);
    }
    return 0;
}