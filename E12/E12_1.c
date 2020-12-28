#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 100
#define STRING_SIZE 200

int main(void)
{
    int num, phys, chem;
    int sum_phys = 0;
    int sum_chem = 0;
    int max_phys = 0;
    int min_phys = 98;
    int max_chem = 0;
    int min_chem = 98;
    int cnt = 0;
    double average_phys, average_chem;
    char FileName[14];
    char buf[BUF_SIZE];
    FILE *fp, *fpresult;

    printf("入力してください>>>");
    scanf("%s", FileName);
    if ((fp = fopen(FileName, "r")) == NULL)
    {
        printf("ファイルが見つかりません。---%s\n", FileName);
        exit(EXIT_FAILURE);
    }

    cnt = 0;
    while (fgets(buf, BUF_SIZE, fp))
    {
        sscanf(buf, "%d %d %d", &num, &phys, &chem);
        sum_phys += phys;
        sum_chem += chem;
        if (phys >= max_phys)
            max_phys = phys;
        if (phys <= min_phys)
            min_phys = phys;
        if (chem >= max_chem)
            max_chem = chem;
        if (chem <= min_chem)
            min_chem = chem;
        cnt++;
    }

    average_phys = (double)sum_phys / cnt;
    average_chem = (double)sum_chem / cnt;

    if ((fpresult = fopen("result.txt", "w")) == NULL)
    {
        fclose(fpresult);
        printf("ファイルが作成できません。---result.txt\n");
        exit(EXIT_FAILURE);
    }

    fprintf(fpresult, "物理：平均値=%g 最高点=%d 最低点=%d\n", average_phys, max_phys, min_phys);
    fprintf(fpresult, "化学：平均値=%g 最高点=%d 最低点=%d\n", average_chem, max_chem, min_chem);

    fclose(fp);
    fclose(fpresult);

    return EXIT_SUCCESS;
}