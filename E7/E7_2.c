#include <stdio.h>
#define N 4

int main ( void )
{
    int a[ N ] = { 3, -2, -1, 1 };
    int b[ N ];
    int sum[ N ];

    int n, i, ip;

    scanf("%d", &n );

    for( i = 0; i < N; i++ )
    {	
        b[ i ] = n + i;
    }
	printf("n が %d であるとき，ベクトルの和は",n);
	
	for( i = 0; i < N; i++ )
	{
		sum[ i ] = a[ i ] + b[ i ];
		printf("%d", sum[i]);
	}
		
	printf("となり、");
	
    for( i = 0; i < N; i++ )
    {
       ip += a[i] * b[i];       
    }
		printf("内積は %d である。",ip);

return 0;
}
     
  

