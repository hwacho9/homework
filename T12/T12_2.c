#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val;
    int sum = 0;
    int cnt;
    int min, max;
    char FileName[FILENAME_MAX];
    FILE *fp;

    printf("入力してください＞");
    scanf("%s", FileName);
    if ((fp = fopen(FileName, "r")) == NULL)
    {
        printf("ファイルが見つかりません---\n", FileName);
        exit(EXIT_FAILURE);
    }

    for (cnt = 0;; cnt++)
    {
        fscanf(fp, "%d", &val);
        if (val == 0)
        {
            break;
        }
        sum += val;
        if (cnt == 0)
        {
            min = val;
            max = val;
        }
        if (val < min)
        {
            min = val;
        }
        else if (val > max)
        {
            max = val;
        }
    }

    if (cnt > 0)
    {
        printf("%d %g %d %d\n", sum, (double)sum / cnt, max, min);
    }
    fclose(fp);

    return EXIT_FAILURE;
}
