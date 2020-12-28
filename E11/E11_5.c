#include <stdio.h>
#include <string.h>

void my_func(double x);

int main(void)
{
    double x;

    x = 1.0;

    my_func(x);

    printf("x= %f \n", x);

    return 0;
}

void my_func(double x)
{
    x = 3.0;
}