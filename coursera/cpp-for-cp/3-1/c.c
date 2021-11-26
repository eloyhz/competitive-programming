#include <stdio.h>
#include <limits.h>

int main(void)  {
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    int m = INT_MAX;
    int M = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (b[i] < m)
            m = b[i];
        if (b[i] > M)
            M = b[i];
    }
    for (int i = 0; i < n; i++) {
        if (m < b[i] && b[i] < M)
            a[i] = b[i];
        else if (b[i] == m)
            a[i] = M;
        else if (b[i] == M)
            a[i] = m;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}