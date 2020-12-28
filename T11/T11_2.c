#include <stdio.h>
#include <string.h>

int main()
{
    typedef unsigned int score_t;
    score_t english;
    score_t math;

    scanf("%d %d", &english, &math);

    if (english > 100 && math > 100)
    {
        printf("英語の点数に誤りがあります\n");
        printf("数学の点数に誤りがあります");
    }
    else if (english > 100 && math < 100)
    {
        printf("英語の点数に誤りがあります\n");
    }
    else if (english < 100 && math > 100)
    {
        printf("数学の点数に誤りがあります\n");
    }
    else
        printf("英語と数学の点数の合計は%d点です．", english + math);

    return 0;
}