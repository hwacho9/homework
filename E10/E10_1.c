#include <stdio.h>

int main()
{
    double x, a, b;

    printf("値段を入力してください＞");
    scanf("%lf", &x);

    a = x * 0.95;
    b = x - 100;

    if (a > b)
        printf("5パーセント引きが安い");
    else if (a < b)
        printf("100円引きが安い");
    else
        printf("同じ");

    return 0;
}