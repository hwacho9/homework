#include <stdio.h>
#define N 10
#define NUM_SCORE 53

int main ( void ) 
{
    int i,j,z,n;
    int c,s,max;
    int score[ NUM_SCORE ] = {
		1,  4,  9,  9,  8, 10, 10,  9,  5, 10, 
		2,  9,  6,  4,  0,  7,  3,  5,  6,  6, 
		7,  4,  2,  9,  2,  5,  5,  3,  1,  9, 
		5,  7,  3,  2,  7,  9,  1,  7,  6,  6, 
		5,  8,  2,  5,  3, 10,  6,  2,  2,  5, 
	};

    int histogram[ N+1 ]; /* 点数 i の学生の人数を格納する配列 histogram[i] */

    for( i = 50; i < NUM_SCORE; i++ ) 
    {
        printf("input No.%d >",i);
        scanf("%d",&score[i]);
    }

    for( i = 0; i <= N; i++ )  
    {
	    histogram[ i ] = 0;
    }

    for(j=0; j<NUM_SCORE; j++)
    {
        histogram[ score[ j ] ]++;
    }

/* 結果の表示 */
    printf("点数の分布は以下の通りです．\n");
    max=histogram[0];
    for ( i = 0; i<=N; i++ )
    {
        printf("%2d点: %d\n ", i, histogram[i] );
        if(max<histogram[i]) max=histogram[i];
    }
    
    c=0;
    
    for(i=0; i<=N; i++) 
    {
        c += histogram[i];
        if(c>27) 
        {
            c=i;
            break;
        }
    }

    printf("中央値: %d\n最頻値: ",c);
    for(i=0; i<=N; i++) 
    {
        if(histogram[i]==max) 
        {
            printf("%d点 ",i);
        }   
    }
    
    printf("\n");
    
    return 0;
}

