#include <stdio.h>

double myexp(double x);

int main(void)
{
    int y;
    double e, x;

    printf("x\tmyexp(x)\n");

    for (y = 1; y < 11; y++)
    {
        x = (double)y;
        e = myexp(x);
        printf("%4.1f %13.5f\n", x, e); // %2.1f → %4.1f としたほうが見栄えがよい
        // %4.1f は、小数点を含めて４桁、小数点以下は1桁の幅で表示することを意味する。
    }
    return 0;
}

double myexp(double x)
{
    int k = 1;
    double a = 1.0, e = 1.0; // i は整数変数に用いられのが慣用なので、違う変数名を使った方がよい。

    for (;;)
    {
        // i=((double)x/k)*i; // 間違いではないが、xはdoulbe型なので、(double)は蛇足。
        a = x / k * a; // x/k の計算のとき自動的に k の値はdouble型に変換されるので、キャストの必要はない
        // if(i<(1/1000000)) {break;}; // //■ 1/10000000 では整数同士の除算なので、その値は0となる。
        if (a < 1e-6)
            break; //{break;}のようにかっこをつける必要はない。
        e = e + a;
        k++;
    }

    return e;
}