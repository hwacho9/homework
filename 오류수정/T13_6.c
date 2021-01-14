#include <stdio.h>

int main()
{
    double n, x;
    double sum = 0;
    printf("n >>>");
    scanf("%lf", &n);
    printf("x >>>");
    scanf("%lf", &x);

    for (int i = 1; i < n + 1; i++)
    {
        double tmp;
        tmp = (double)i;
        for (int j = 1; j <= i; j++)
        {
            tmp *= x;
        }

        printf("%dx^%d = %f\n", i, i, tmp);
        sum += tmp;
    }

    printf("和 >>>%f", sum);
}
