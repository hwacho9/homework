#include <stdio.h>

int main()
{
    int x, y, m, sum;
    scanf("%d %d", &x, &y);

    sum = 0;
    for (int i = 0;; i += 4)
    {
        m = x + i;
        if (m >= y)
            break;
        printf("%d+%d=%d\n", x, i, m);
        sum += x + i;
    }
    printf("合計=%d", sum);

    return 0;
}