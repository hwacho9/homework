#include <stdio.h>
#include <stdlib.h>
#define BUF 200

typedef struct student_data
{
    char sid[BUF];
    int math;
    int eng;
} student;

int main(void)
{

    char FileName[14];
    char FileName2[14];
    char str[BUF];
    int cnt, maxa, maxb, mina, minb;
    struct student_data s[10];
    FILE *fpin, *fpout;

    printf("入力ファイル名 : ");
    scanf("%s", FileName);

    if ((fpin = fopen(FileName, "r")) == NULL)
    {
        printf("ファイルが見つかりません\n", FileName);
        exit(EXIT_FAILURE);
    }

    if ((fpout = fopen("output.txt", "w")) == NULL)
    {
        fclose(fpin);
        printf("ファイルが作成できません\n");
        exit(EXIT_FAILURE);
    }

    printf("数学の点数の上限，および下限\n");
    scanf("%d %d", &maxa, &mina);
    printf("英語の点数の上限，および下限\n");
    scanf("%d %d", &maxb, &minb);

    cnt = 0;
    while (fgets(str, BUF, fpin))
    {
        sscanf(str, "%s %d %d", &s[cnt].sid, &s[cnt].math, &s[cnt].eng);

        if (maxa < s[cnt].math && mina > s[cnt].math)
        {
            if (maxb < s[cnt].eng && minb > s[cnt].eng)
            {
                fprintf(fpout, "%s", str);
            }
        }
        cnt++;
    }

    fclose(fpin);
    fclose(fpout);

    return EXIT_SUCCESS;
}
