#include <stdio.h>
#include <math.h>
#include <string.h>
#define N 7

int main(void)
{
    int a[N];

    int i, j, temp;

    for (i = 0; i < N; i++)
    {
        a[i] = pow(i, 2);
        printf("%d\n", a[i]);
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < N; i++)
    {
        printf("%d", a[i]);
        if ((N - i) != 1)
            printf(", ");
    }

    return 0;
}
