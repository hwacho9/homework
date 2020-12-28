#include <stdio.h>

int main ( void )
{
    int i, m, n, sum;
    int array[ 4 ];
    array[ 0 ] = 80;
    array[ 1 ] = 75;
    array[ 2 ] = 50;
    array[ 3 ] = 90;

    for( i = 0; i < 4; i++ )
    {
        printf("%d\n", array[ i ]);
    }

    m = array[0] + array[1] + array[2] + array[3];
    printf( "%d\n", m );

    sum = 0;

    for( m =0; m < 4; m++ )
    {
        sum += array[ m ];
    }

    printf( "%d\n", sum );

    return 0;


    
}