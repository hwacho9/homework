#include <stdio.h>
#include <math.h>

int discriminant(int a, int b, int c);
int solution_num(int a, int b, int c);
double quad_eq(int a, int b, int c);

int main(void)
{
    int a, b, c;
    double D, x;

    printf("a, b, cを入力してください＞");
    scanf("%d %d %d", &a, &b, &c);

    D = solution_num(a, b, c);
    x = quad_eq(a, b, c);

    if (D > 0)
    {
        printf("「ax^2 + bx + c = 0 の解のうち大きい方は x = %.2f です.」", x);
    }
    else
    {
        if (D == 0)
        {
            printf("「ax^2 + bx + c = 0 の重解は x = %.2f です．」", x);
        }
        else
        {
            printf("ax^2 + bx + c = 0 の解はありません.");
        }

        return 0;
    }
}

int discriminant(int a, int b, int c)
{
    int x;

    x = b * b - 4 * a * c;

    return x;
}

int solution_num(int a, int b, int c)
{
    int y = discriminant(a, b, c);

    if (y > 0)
    {
        printf("解の個数が2個の場合:");
    }
    else
    {
        if (y == 0)
        {
            printf("解の個数が1個の場合:");
        }
        else
        {
            printf("解の個数が0個の場合:");
        }
    }

    return y;
}

double quad_eq(int a, int b, int c)
{
    double D = discriminant(a, b, c);
    double x;
    if (D > 0)
    {
        x = (-b + sqrt(D)) / (2 * a);
    }
    if (D == 0)
    {
        x = -b / (2 * a);
    }

    return x;
}
