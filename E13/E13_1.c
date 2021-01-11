#include <stdio.h>

int mul(int a, int b)
{
    int i, m = 1;
    for (i = 0; i < b; i++)
    {
        m *= a;
    }
    return m;
}

int main()
{
    int a, m, i, j;
    scanf("%d", &a);

    for (i = 0; i < a; i++)
    {
        m = mul(3, i);
        for (j = 0; j < m; j++)
        {
            printf("@");
        }

        printf("\n");
    }

    return 0;
}