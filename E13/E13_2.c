#include <stdio.h>

int main()
{
    int i;
    int amount, period;
    scanf("%d %d", &amount, &period);

    for (i = period; i >= 0; i--)
    {
        if (amount > 350 && period != i)
            amount -= 350;
        if (amount < 350)
            amount = amount;

        printf("あと%d日，残高は%4d円．\n", i, amount);
    }

    return 0;
}