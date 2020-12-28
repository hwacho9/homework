#include <stdio.h>

int main(void)
{

    int x, y;
    int i;

    x = 0;
    y = 1;
    for (i = 2; i < 10; i += 2)
    {
        x += i;
        y *= i;
    }

    printf("x = %d, y = %d\n", x, y);

    x = 0;
    y = 1;
    for (i = 2; i < 10; i += 2)
        x += i;
    y *= i;

    printf("x = %d, y = %d\n", x, y);

    return 0;
}