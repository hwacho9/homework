#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val;
    int sum = 0;
    int cnt;
    int min, max;
    FILE *fp;

    if ((fp = fopen("indata.txt", "r")) == NULL)
    {
        printf("ファイルが見つかりません---indata.txt\n");
        exit(EXIT_FAILURE);
    }

    cnt = 0;

    for (cnt = 0;; cnt++) //데이터입력
    {
        fscanf(fp, "%d", &val);
        if (val == 0)
        {
            break;
        }
        sum += val;
        if (cnt == 0) //최대최소
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
