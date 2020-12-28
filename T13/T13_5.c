#include <stdio.h>
#include <math.h>

double comp(double x);

int main()
{
    double n, result;
    scanf("%lf", &n);

    for (int i = n; i >= 0; i--)
    {
        result = comp(i);
        printf("%f\n", result);
    }
}

double comp(double x)
{
    double n;

    n = 0.9 * x + 2.5;
    return n;
}