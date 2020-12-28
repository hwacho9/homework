#include <stdio.h>

typedef struct s_complex
{
    double re;
    double im;
} complex_t;

void complex_print(complex_t a);

complex_t complex_add(complex_t a, complex_t b);

complex_t complex_mul(complex_t a, complex_t b);

int main()
{
    complex_t a, b, result;
    printf("a >");
    scanf("%lf %lf", &a.re, &a.im);
    printf("b >");
    scanf("%lf %lf", &b.re, &b.im);
    printf("a = ");
    complex_print(a);
    printf("b = ");
    complex_print(b);

    result = complex_add(a, b);
    printf("a + b = ");
    complex_print(result);
    result = complex_mul(a, b);
    printf("a x b = ");
    complex_print(result);

    return 0;
}

void complex_print(complex_t a)
{
    printf("%.5f%+.5fi\n", a.re, a.im);
}

complex_t complex_add(complex_t a, complex_t b)
{
    complex_t result;
    result.re = a.re + b.re;
    result.im = a.im + b.im;
    return result;
}

complex_t complex_mul(complex_t a, complex_t b)
{
    complex_t result;
    result.re = (a.re * b.re) - (a.im * b.im);
    result.im = (a.re * b.im) + (a.im * b.re);
    return result;
}
