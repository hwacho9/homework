#include <stdio.h>

int main()
{
    int a, b, sum;

    for ( a = 1; a <= 6; a++ )
    {
        for ( b = 1; b <= 6; b++ )
        {
            sum = 3 * a + 8 * b;
            if( sum % 5 == 0)
                printf("(%d, %d), ", a, b);
        }
    }

    return 0;
}