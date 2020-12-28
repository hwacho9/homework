#include <stdio.h>

int main ( void )
{
    int k;
    int prize[ 5 ];
    prize[ 0 ] = 10000;
    prize[ 1 ] = 5000;
    prize[ 2 ] = 3000;
    prize[ 3 ] = 1000;
    prize[ 4 ] = 500;

    printf( "順位を入力してください。\n");
    scanf("%d", &k );

    if( k >= 1 && k <= 5 )
    {
        printf( "%d等は%dです\n", k, prize[ k - 1 ]);
    }
	else
	{
		printf( "1以上5以下の値を入力して下さい");
	}

    return 0;

}
