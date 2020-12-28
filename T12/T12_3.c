#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val;
    int sum = 0;
    int cnt;
    int min, max;
    double average;
    char FileName[14];
    FILE *fp;

    printf("入力してください＞");
    scanf("%s", FileName);
    if ((fp = fopen(FileName, "r")) == NULL)
    {
        printf("ファイルが見つかりません---\n", FileName);
        exit(EXIT_FAILURE);
    }
    cnt = -1;
    while (fscanf(fp, "%d", &val) != EOF)
    {
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

    average = (double)sum / cnt;

    if (cnt > 0)
    {
        printf("%d %g %d %d\n", sum, average, max, min);
    }
    fclose(fp);

    return EXIT_FAILURE;
}
