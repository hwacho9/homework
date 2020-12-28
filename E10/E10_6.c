#include <stdio.h>

int max2(int a, int b);
int max4(int a, int b, int c, int d);
int min2(int a, int b);
int min4(int a, int b, int c, int d);

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, j, k, l;
    int count = 0;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 10; k++)
            {
                for (l = 0; l < 10; l++)
                {
                    if (max4(i, j, k, l) == 7 && min4(i, j, k, l) == 3)
                        count++;
                }
            }
        }
    }

    printf("%d", count);

    return 0;
}

int max2(int a, int b)
{
    return a > b ? a : b;
}
int max4(int a, int b, int c, int d)
{
    int m = max2(a, b);
    int n = max2(c, d);

    return m > n ? m : n;
}
int min2(int a, int b)
{
    return a < b ? a : b;
}
int min4(int a, int b, int c, int d)
{
    int m = min2(a, b);
    int n = min2(c, d);

    return m < n ? m : n;
}