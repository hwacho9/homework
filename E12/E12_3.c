#include <stdio.h>

int main()
{
    char str = '0';
    int i, count[26] = {0}, num[10] = {0}, notchar = -1, k;

    FILE *fp;
    fp = fopen("frequency.txt", "rt");

    while (!feof(fp))
    {
        str = fgetc(fp);
        if (str >= 97 && str <= 122)
        {
            k = str - 97;
            count[k] += 1;
        }
        else if (str >= 65 && str <= 90)
        {
            k = str - 65;
            count[k] += 1;
        }
        else if (str >= '0' && str <= '9')
        {
            k = str - 48;
            num[k] += 1;
        }
        else
        {
            notchar++;
        }
    }
    fclose(fp);

    for (i = 0; i < 13; i++)
    {
        printf("%c   ", 'A' + i);
    }
    printf("\n  ");
    for (i = 0; i < 13; i++)
    {
        printf("%2d  ", count[i]);
    }
    printf("\n\n ");
    for (i = 13; i < 26; i++)
    {
        printf("%c   ", 'A' + i);
    }
    printf("\n   ");
    for (i = 13; i < 26; i++)
    {
        printf("%2d  ", count[i]);
    }
}