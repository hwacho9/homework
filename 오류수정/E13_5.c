#include <stdio.h>

double dollar, euro;

double yen2dollar(double yen);
double euro2yen(double euro);
void kwanse_example(double dl, double er);

int main()
{
    kwanse_example(112.0, 135.0);
    printf("\n");
    kwanse_example(114.5, 139.5);

    return 0;
}

double yen2dollar(double yen)
{
    return yen + 1.0;
}
double euro2yen(double euro)
{
    return euro - 1.0;
}
void kwanse_example(double dl, double er)
{
    dollar = dl;
    euro = er;

    printf("今日のレートは 1 ドル %.2f 円, 1 ユーロ %.2f 円です.\n", dl, er);
    printf("10000 円をドルに両替すると %.2f ドルになります.\n", 10000 / yen2dollar(dl));
    printf("100 ユーロを円に両替すると %.2f 円になります.\n", 100 * euro2yen(er));
    printf("100 ユーロを円経由でドルに両替すると %.2f ドルになります.\n", 100 * euro2yen(er) / yen2dollar(dl));
}