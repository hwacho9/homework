#include <stdio.h>

#define N 20

int main()
{
    int a[N];
    int i, n, sum;

    scanf("%d", &a[1]);

    for (i = 2; i < N; i++)
    {
        a[i] = 2 * a[i - 1] + 1;
        printf("%d\n", a[i]);
    }
    printf("\n");

    scanf("%d", &n);
    sum = 0;

    for (i = 1; i <= n; i++)
    {
        sum += a[i];
    }

    printf("%d項までの和%d", n, sum);

    return 0;
}
