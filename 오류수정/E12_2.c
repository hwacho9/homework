#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUF_SIZE 100
#define STRING_SIZE 200

typedef struct student_data
{
    char num;
    int phys;
    int chem;
} student;

int main(void)
{
    int cnt = 0;
    int max_phys, min_phys, max_chem, min_chem;
    int sub;
    char FileName[14];
    char buf[BUF_SIZE];
    FILE *fp, *fpresult;

    student s[10];

    printf("入力してください>>>");
    scanf("%s", FileName);
    if ((fp = fopen(FileName, "r")) == NULL)
    {
        printf("ファイルが見つかりません。---%s\n", FileName);
        exit(EXIT_FAILURE);
    }

    if ((fpresult = fopen("result.txt", "w")) == NULL)
    {
        fclose(fpresult);
        printf("ファイルが作成できません。---result.txt\n");
        exit(EXIT_FAILURE);
    }

    cnt = 0;
    while (fgets(buf, BUF_SIZE, fp))
    {
        sscanf(buf, "%s %d %d", &s[cnt].num, &s[cnt].phys, &s[cnt].chem);
        /*
        if (max_chem > s[cnt].chem && min_chem < s[cnt].chem)
        {
            fprintf(fpresult, "%d", student.chem);
        }
    */
        cnt++;
    }

    scanf("%d ", &sub);
    if (sub == 1)
    {
        scanf("%d %d", &max_phys, &min_phys);
        for (int i = 0; i < 10; i++)
        {
            printf("%d\n", s[i].phys);
        }
    }
    if (sub == 2)
    {
        scanf("%d %d", &max_chem, &min_chem);
        for (int i = 0; i < 10; i++)
        {
            printf("%d\n", s[i].chem);
        }
    }

    fclose(fp);
    fclose(fpresult);

    return EXIT_SUCCESS;
}