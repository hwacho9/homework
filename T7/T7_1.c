#include <stdio.h>

int main ( void )
{
    int i;
    int array[ 5 ];
    array[ 0 ] = 80;
    array[ 1 ] = 75;
    array[ 2 ] = 50;
    array[ 3 ] = 90;

    printf( "0 以上 4 未満の整数 i を入力してください＞");
    scanf( "%d", &i );
    printf( "%d", array[ i ]);

    return 0;
}


