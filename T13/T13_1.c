#include <stdio.h>

int main()
{
    int n, i;
    double value;

    scanf("%d %lf", &n, &value);

    if (n <= 10)
    {
        for (i = 0; i < n; i++)
        {
            value *= 0.9;
        }
    }
    if (n > 10)
    {
        for (i = 0; i < 10; i++)
        {
            value *= 0.9;
        }
        for (i = 10; i < n; i++)
        {
            value *= 0.87;
        }
    }

    printf("%.2f", value);

    return 0;
}