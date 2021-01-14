#include <stdio.h>
#include <math.h>

double comp(double x);

int main()
{
    double n, result;
    scanf("%lf", &n);

    for (int i = 0; i < 20; i++)
    {
        n = comp(n);
        printf("%f\n", n);
    }
}

double comp(double x)
{
    return 0.9 * x + 2.5;
}