#include <stdio.h>

#define N 5000

int main()
{
    int cnt = 0;

    int a = 0, b = 0, c = 0;
    for (a = 0; 1000 * a + 500 * b + 100 * c <= N; a++)
    {
        for (b = 0; 1000 * a + 500 * b + 100 * c <= N; b++)
        {
            for (c = 0; 1000 * a + 500 * b + 100 * c <= N; c++)
            {
                if (1000 * a + 500 * b + 100 * c == N)
                    printf("%d %d, %d, %d \n", ++cnt, a, b, c);
            } //for c
            c = 0;
        } //for b
        b = 0;
        c = 0;
    }

    printf("%d", cnt);
    return 0;
}