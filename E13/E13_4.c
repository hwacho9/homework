#include <stdio.h>

int gcd(int a, int b);
void print_cd(int a, int b);

int main()
{
    int a, b, g;
    scanf("%d %d", &a, &b);

    g = gcd(a, b);
    printf("a = %d，b = %d → gcd = %d，cd = ", a, b, g);
    print_cd(a, b);

    return 0;
}

int gcd(int a, int b)
{
    int z;

    while ((z = a % b) != 0)
    {
        a = b;
        b = z;
    }
    return b;
}
void print_cd(int a, int b)
{
    int x = gcd(a, b);
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
