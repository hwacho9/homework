#include <stdio.h>
#include <math.h>
#define N 2

int main ( void )
{
    int a[ N ];
    int inv[ N ];

    int i;

    for ( i = 0; i < N - 1; i++ )
    {
        a [ i ] = pow(i,2);
    }

    for ( i = N - 1; i >= 0; i-- )
    {
        printf("%d",a[i]);
    }

    return 0;
    

}