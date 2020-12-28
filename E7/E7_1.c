#include <stdio.h>

#define N 10

int main ( void )
{
    int i, m, n, temp;
    int array[ N ];

    for ( i = 1; i <= N; i++ )
    {
        array[ i ] = 2 * i;
        printf("%d\n", array[i]);
    }
	
	printf("mとnを入力してください＞");
	scanf("%d %d", &m, &n);

    temp = array[m+1];
    array[ m+1 ] = array[ n+1 ];
    array[ n+1 ] = temp;

    for ( i = 1; i <= N; i++ )
    {
        printf("%d\t", array[i]);
    }
	
  

    return 0;
}