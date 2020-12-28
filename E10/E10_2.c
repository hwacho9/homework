#include <stdio.h>

int main()
{
    int money, a, b, p, h;
    scanf("%d %d %d",money, a, b);

    p = 280 * a;
    h = 135 * b;

    if ( p + h > money )
        printf("おつりは%d円です。\n", money - ( p + h ));
    else if ( p + h == money )
        printf("おつりなしです。\n");
    else
        printf("お金が足りません。");

    return 0;    
    
}