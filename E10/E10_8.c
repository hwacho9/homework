#include <stdio.h>

int main(void)
{
    int a, x, y;

    printf("整数を入力して下さい\n");
    scanf("%d", &a);

    x = a;
    y = a;

    if (a % 2 == 0)
        x = x * 2;
    if (a % 3 == 0)
        x = x * 5;

    if (a % 2 == 0)
        y = y * 2;
    else if (a % 3 == 0)
        y = y * 5;

    printf("x = %d, y = %d です．", x, y);

    return 0;
}