
#include <stdio.h>
#include <stdlib.h>

void infer()
{
    int N;
    scanf("%d", &N);
    int i;
    int *arr;
    arr = (int *)malloc(sizeof(int) * N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    if ((arr[0] * arr[2]) == (arr[1] * arr[1]))
    {
        printf("等比数列です\n");
        printf("次の数は");
        printf("%d", arr[N - 1] * (arr[1] / arr[0]));
        printf("です。");
    }
    else
    {
        printf("等差数列です\n");
        printf("次の数は");
        printf("%d", arr[N - 1] + (arr[1] - arr[0]));
        printf("です。");
    }
}
int main()
{
    printf("数列の長さNを入力してください>>");
    infer();
}
