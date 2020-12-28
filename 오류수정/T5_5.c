#include <stdio.h>

double prod_d(double x, double y)
{
    return x * y;
}

int main(void)
{
    double input1, input2, result;

    printf("実数を入力して下さい\n");
    scanf("%lf", &input1);
    printf("二つ目の実数を入力して下さい\n");
    scanf("%lf", &input2);

    result = prod_d(input1, input2);

    printf("%.2lfx%.2lfは%.2lfです\n", input1, input2, result);

    return 0;
}
