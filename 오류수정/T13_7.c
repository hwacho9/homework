#include <stdio.h>
#include <math.h>

double compg(double x);

int main()
{
    int n;
    double x;
    scanf("%lf %d", &x, &n);

    printf("%f\n\n", compg(x));

    for (int i = 0; i < n; i++)
    {
        x = compg(x);
        printf("%f\n", x);
    }

    return 0;
}

double compg(double x)
{
    return sqrt(x + 1.0);
}
