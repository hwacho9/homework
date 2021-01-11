#include <stdio.h>

double f(double x);
double g(double x, double h);

int main()
{
    double x, h;
    scanf("%lf", &x);

    h = 2;
    for (int i = 0; i < 20; i++)
    {
        h *= 0.5;
        printf("g(%.6f, .%.6f)=%.6f\n", x, h, g(2, h));
    }

    return 0;
}
double f(double x)
{
    return x * x + 3 * x + 5;
}
double g(double x, double h)
{
    return (f(x + h) - f(x)) / h;
}
