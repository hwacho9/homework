#include <stdio.h>
#include <math.h>

double compg(double x);

int main()
{
    int n;
    double x, result;
    scanf("%lf %d", &x, &n);

    for (int i = 0; i < n; i++)
    {
        result = compg(i);
        printf("%f\n", result);
    }
}

double compg(double x)
{
    return sqrt(x + 1.0);
}
