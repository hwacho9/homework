#include <stdio.h>

int main()
{
    int a[100];
    int i = 0;

    do
    {
        scanf("%d", &a[i]);
    } while (a[i++] != -1);

    i--;
    int cnt = 0;

    while (i > 2)
    {
        for (int k = 0; k <= cnt; k++)
        {
            printf(" ");
        }

        for (int j = 0; j < i - 1; j++)
        {
            if (a[j + 1] != -1)
            {
                a[j] = (a[j] + a[j + 1]) % 10;
            }
            else
            {
                a[j] = -1;
            }
            printf("%d ", a[j]);
        }
        i--;
        printf("\n");

        cnt++;
    }

    return 0;
}