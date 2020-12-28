#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val;
    int sum = 0;
    int cnt;
    FILE *fp;

    if ((fp = fopen("indata.txt", "r")) == NULL)
    {
        printf("---indata.txt\n");
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
    }

    if (cnt > 0)
    {
        printf("%d %g\n", sum, (double)sum / cnt);
    }
    fclose(fp);

    return EXIT_FAILURE;
}
