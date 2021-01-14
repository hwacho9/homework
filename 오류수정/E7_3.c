#include <stdio.h>
#include <math.h>
#include <string.h>
#define N 7

int main(void)
{
    int a[N];
    int inv[N];

    int i;

    for (i = 0; i < N; i++)
    {
        a[i] = pow(i, 2);
        printf("%d\n", a[i]);
    }

    for (i = 0; i < N; i++)
    {
        inv[i] = a[N - i - 1];
    }

    for (i = 0; i < N; i++)
    {
        printf("%d", inv[i]);
        if ((N - i) != 1)
            printf(", ");
    }

    return 0;
}
