#include <stdio.h>
#include <string.h>

void my_func(double array[]);

int main(void)
{
    double array[2];

    array[0] = 1.0;
    array[1] = 2.0;

    my_func(array);

    printf("x= %f y= %f\n", array[0], array[1]);

    return 0;
}

void my_func(double array[])
{
    array[0] = 3.0;
    array[1] = 4.0;
}