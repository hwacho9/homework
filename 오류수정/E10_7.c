#include <stdio.h>
#include <math.h>

double cos_triangle(int x, int y, int z);

int main()
{
    int a, b, c;
    double cos, sin;
    scanf("%d %d %d", &a, &b, &c);

    if (c > a + b)
        printf("三角形ではありません");
    else
    {
        cos = cos_triangle(a, b, c);
        sin = sqrt(1 - cos * cos);
        printf("cosΘは %f\n", cos);
        printf("sinΘは %f\n", sin);
        printf("tanΘは %f\n", sin / cos);
    }

    return 0;
}

double cos_triangle(int x, int y, int z)
{
    return (double)(y * y + z * z - x * x) / (double)(2 * y * z);
}
