#include <stdio.h>

int main()
{
    int sum1 = 0;
    int sum2 = 0;
    int i, j, n, m;
    int a[10] = {41, 23, 19, 2, 13, 9, 38, 8, 36, 10};

    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++)
        sum1 += a[i];

    i = 1;
    for (i = n - 1; i < m; i++)
        sum2 += a[i];

    printf("%d %d", sum1, sum2);

    return 0;
}