#include <stdio.h>
#include <stdlib.h>

#define STRING_SIZE 200
int main()
{
    int val;
    int sum = 0;
    int cnt;
    int fre;
    int min = 0, max = 0;
    double average;
    char FileName[14];
    char string[STRING_SIZE];
    FILE *fpin, *fpout, *fpresult;

    printf("入力してください＞");
    scanf("%s", FileName);
    if ((fpin = fopen(FileName, "r")) == NULL)
    {
        printf("ファイルが見つかりません---%s\n", FileName);
        exit(EXIT_FAILURE);
    }
    if ((fpout = fopen("outdata.txt", "w")) == NULL)
    {
        fclose(fpin);
        printf("ファイルが作成できません。--- out.txt\n");
        exit(EXIT_FAILURE);
    }

    cnt = -1;
    while (fgets(string, STRING_SIZE, fpin))
    {
        sscanf(string, "%d", &val);
        fprintf(fpout, "入力データ>>%d\n", val);
        if (cnt == 0)
        {
            min = val;
            max = val;
            sum += val;
            ++cnt;
            continue;
        }
        if (val < min)
        {
            min = val;
        }
        else if (val > max)
        {
            max = val;
        }
        sum += val;
        ++cnt;
    }

    fre = cnt + 1;

    average = (double)sum / fre;

    fpresult = fopen("result.txt", "w");
    if (cnt > 0)
    {
        fprintf(fpresult, "和：%d 平均値：%.2f 最大値：%d 最小値：%d\n", sum, average, max, min);
        printf("和：%d 平均値：%.2f 最大値：%d 最小値：%d\n", sum, average, max, min);
    }

    fclose(fpin);
    fclose(fpout);
    fclose(fpresult);

    return EXIT_FAILURE;
}
