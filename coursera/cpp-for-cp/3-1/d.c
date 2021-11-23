#include <stdio.h>

int main(void)  {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int q;
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        int t;
        scanf("%d", &t);
        printf("%d ", a[t-1]);
    }
    printf("\n");
    return 0;
}