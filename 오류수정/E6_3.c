#include <stdio.h>
#include <math.h>

int discriminant(int a, int b, int c);
int solution_num(int a, int b, int c);

int main(void)
{
    int a, b, c, y;

    printf("a, b, cを入力してください＞");
    scanf("%d %d %d", &a, &b, &c);

    y = solution_num(a, b, c);

    if (y > 2)
    {
        printf("ax^2 + bx + c = 0 の実数解の個数は2個です");
    }
    else
    {
        if (y == 0)
        {
            printf("ax^2 + bx + c = 0 の実数解の個数は1個です");
        }
        else
        {
            printf("ax^2 + bx + c = 0 の実数解の個数は0個です");
        }
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

    return y;
}
