#include <stdio.h>

int calc( int x )
{
    int y;

    y = 3 * x * x - 7;

    return y;
}

int main( void )
{
    int input, result;

    printf( "整数を入力して下さい\n" );
    scanf( "%d", &input );

    result = calc( input );

    printf( "%d %d\n", input, result );

    return 0;
}

