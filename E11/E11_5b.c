#include <stdio.h>
#include <string.h>

struct point
{
    double x;
    double y;
};

void my_func(struct point p);

int main(void)
{
    struct point p;

    p.x = 1.0;
    p.y = 2.0;

    my_func(p);

    printf("x= %f y= %f\n", p.x, p.y);

    return 0;
}

void my_func(struct point p)
{
    p.x = 3.0;
    p.y = 4.0;
}