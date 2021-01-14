#include <stdio.h>

#define N 10

int main(void)
{
    int i, m, n, temp;
    int array[N];

    for (i = 0; i < N; i++)
    {
        array[i] = 2 * (i + 1);
    }

    printf("mとnを入力してください＞");
    scanf("%d %d", &m, &n);

    temp = array[m];
    array[m] = array[n];
    array[n] = temp;

    for (i = 0; i < N; i++)
    {
        printf("%d", array[i]);
        if ((N - i - 1) != 0)
            printf(", ");
    }

    return 0;
}
