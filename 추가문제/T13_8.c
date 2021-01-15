#include <stdio.h>

int sum_n_23(int n);

int main()
{
    int n, j, a, b = 0;
    scanf("%d %d", &a, &n);

    for (j = 1; j < a; j++)
    {
        if ((j % 2) != 0 && (j % 3) != 0)
        {
            b += j;
        }
    }

    printf("T13-8\n %d\n", sum_n_23(n) - b);

    return 0;
}

int sum_n_23(int n)
{
    int i, m = 0;

    for (i = 1; i <= n; i++)
    {
        if ((i % 2) != 0 && (i % 3) != 0)
        {
            m += i;
        }
    }

    return m;
}
