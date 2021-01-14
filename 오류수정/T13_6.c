#include <stdio.h>

int main()
{
    double n, x;
    double sum = 0;
    scanf("%lf %lf", &n, &x);

    for (int i = 1; i < n + 1; i++)
    {
        sum = +n;
        n = x * n;
    }

    printf("%f", sum);
}
