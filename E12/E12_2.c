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

    scanf("%d %d", &max_phys, &min_phys);
    scanf("%d %d", &max_chem, &min_chem);

    cnt = 0;
    while (fgets(buf, BUF_SIZE, fp))
    {
        sscanf(buf, "%d %d %d", &s[cnt].num, &s[cnt].phys, &s[cnt].chem);

        if (max_phys > s[cnt].phys && min_phys < s[cnt].phys)
        {
            if (max_chem > s[cnt].chem && min_chem < s[cnt].chem)
            {
                fprintf(fpresult, "%s", student.);
            }
        }
        cnt++;
    }

    fclose(fp);
    fclose(fpresult);

    return EXIT_SUCCESS;
}