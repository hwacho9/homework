#include <stdio.h>

int main ()
{
    int t;
    int sum = 0;

    for (t=1;;t++)
    {
        sum += t*t*t;
        if ( sum > 10000)
            break;
    }

    printf("%d %d", t, sum);

    return 0;
}