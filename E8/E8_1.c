#include <stdio.h>

#define N 20

int main ()
{
    int a[ N ];
    int i,n,sum;

    scanf("%d",&a[1]);

    for(i=2; i < N-1; i++ )
    {
        a [ i ] = 2 * a[ i - 1 ] + 1;
        printf("%d\n",a[i]);
    }
	printf("\n");

	scanf("%d",&n);
	
    for(i = 1; i <= n; i++ )
        sum = a[i]++;
        
    printf("%d",sum);
	

    return 0;




}