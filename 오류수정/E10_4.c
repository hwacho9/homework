#include <stdio.h>

int main()
{
    double n, a, r;
    double sum = 0;

    printf("初項 a = ");
    scanf("%lf", &a);
    printf("公比 r = ");
    scanf("%lf", &r);
    printf("項 n = ");
    scanf("%lf", &n);

    if (r == 1)
    {
        sum = n * a;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            sum += a;
            a = r * a;
        }
    }

    printf("%f", sum);

    return 0;
}
