#include <stdio.h>

int main(void)  {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int b[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] - a[i] >= 2)
            ans++;
    }
    printf("%d\n", ans);
    return 0;
}