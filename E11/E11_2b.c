#include <stdio.h>

typedef struct s_complex
{
    double re;
    double im;
} complex_t;

void complex_print(complex_t a)
{
    printf("%.5f%+.5fi\n", a.re, a.im);
}

void complex_print2(complex_t a, char *s)
{
    printf("(%.5f%+.5fi)%s", a.re, a.im, s);
}

complex_t complex_add(complex_t a, complex_t b)
{
    complex_t x;
    x.re = a.re + b.re;
    x.im = a.im + b.im;
    return x;
}

complex_t complex_mul(complex_t a, complex_t b)
{
    complex_t x;
    x.re = (a.re * b.re) - (a.im * b.im);
    x.im = (a.re * b.im) + (a.im * b.re);
    return x;
}

int main(void)
{
    complex_t a = {1.5, 2.1};
    complex_t b = {0.3, -2.5};
    complex_t c;

    printf("Complex-1(re,im) >");
    scanf("%lf %lf", &a.re, &a.im);
    printf("Complex-2(re,im) >");
    scanf("%lf %lf", &b.re, &b.im);

    c = complex_add(a, b);
    complex_print2(a, " + ");
    complex_print2(b, " = ");
    complex_print(c);

    c = complex_mul(a, b);
    complex_print2(a, " x ");
    complex_print2(b, " = ");
    complex_print(c);

    return 0;
}
