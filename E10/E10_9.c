#include <stdio.h>

int main(void)
{

    int x, y, z;

    x = 60;
    y = 10;
    z = 100;

    if ((x % 11) == 0)
    {
        y *= 3;
        z -= 70;
    }

    printf("y = %d, z = %d\n", y, z);

    if ((x % 11) == 0)
        y *= 3;
    z -= 70;

    printf("y = %d, z = %d\n", y, z);

    return 0;
}