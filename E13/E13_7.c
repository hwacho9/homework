
#include <stdio.h>

typedef struct point
{
    double x;
    double y;
} point_t;

double sq_norm(point_t p);

int main(void)
{
    point_t p;

    printf("Keyin x and y values >>");
    scanf("%lf%lf", &p.x, &p.y);

    printf("%.1f\n", sq_norm(p));

    return 0;
}

double sq_norm(point_t p)
{
    /* ここにプログラムを追加せよ */
    return p.x * p.x + p.y * p.y;
    /* ここまで */
}