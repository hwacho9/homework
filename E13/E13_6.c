#include <stdio.h>

int main()
{
    int score_a[4];
    int score_b[4];
    int sum[4];

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &score_a[i]);
    }
    for (int j = 0; j < 4; j++)
    {
        scanf("%d", &score_b[j]);
    }
    for (int k = 0; k < 4; k++)
    {
        sum[k] = score_a[k] + score_b[k];
        printf("%d ", sum[k]);
    }
    printf("\n");
    for (int l = 0; l < 4; l++)
    {
        printf("%d ", sum[l] / 2);
    }
    printf("\n");

    return 0;
}