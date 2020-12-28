#include <stdio.h>
#include <math.h>

int discriminant(int a, int b, int c);
int solution_num(int a, int b, int c);
double quad_eq(int a, int b, int c);

int main(void)
{
    int a, b, c;
    double D, x1, x2;

    printf("a, b, cを入力してください＞");
    scanf("%d %d %d", &a, &b, &c);

    D = solution_num(a, b, c);
    quad_eq(a, b, c);

    if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);

        if (x1 > x2)
        {
            printf("「ax^2 + bx + c = 0 の解のうち大きい方は x = %lf です.」", x1);
        }
        else
        {
            printf("「ax^2 + bx + c = 0 の解のうち大きい方は x = %lf です.」", x2);
        }
    }
    else if (D == 0)
    {
        x1 = -b / (2 * a);
        printf("「ax^2 + bx + c = 0 の重解は x = %lf です．」", x1);
    }
    else
    {
        printf("ax^2 + bx + c = 0 の解はありません.");
    }

    return 0;
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
    double x1, x2;

    return D;
}
