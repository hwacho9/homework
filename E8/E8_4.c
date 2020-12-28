#include <stdio.h>
#include <math.h>

#define N 10
#define NUM_SCORE 50

double average( int a[] );
double variance( int a[], double m );

int main ( void ) 
{
	double result, result2, s;
	int i;
	
	int score[ NUM_SCORE ] = {
		1,  4,  9,  9,  8, 10, 10,  9,  5, 10, 
		2,  9,  6,  4,  0,  7,  3,  5,  6,  6, 
		7,  4,  2,  9,  2,  5,  5,  3,  1,  9, 
		5,  7,  3,  2,  7,  9,  1,  7,  6,  6, 
		5,  8,  2,  5,  3, 10,  6,  2,  2,  5, 
	};
	
	result = average(score);
	
	printf("平均は%.2lf\n", result );
	printf("分散は%.2lf\n", variance(score,result));
	printf("標準偏差は%.2lf\n", sqrt(variance(score,result)));
	
	result2 = (double)variance(score,result);
	s = (double)sqrt(variance(score,result));
	
	printf("平均は%.2lf\n", result );
	printf("分散は%.2lf\n", result2);
	printf("標準偏差は%.2lf\n", s);
	
	return 0;
}

double average( int a[] )
{
    double sum = 0;
    double m; 

    for( int i = 0; i < NUM_SCORE; i++)
    {   
        sum += a[i];
    }

    m = sum / NUM_SCORE;

    return m;

}

double variance( int a[], double m )
{
    double sum = 0.0;
    double v;
    int i;

    for( i = 0; i < NUM_SCORE; i++ )
    {
        sum += ( a[i] - m)*( a[i] - m);
    }

    v = sum / NUM_SCORE;

    return v;

}
