#include <stdio.h>
#include <string.h>

void get_line(char buff[], int size);

int main()
{
    char sentence[128] = "This is a pen. That is an apple.";
    char str[128];
    char tmp[128];

    get_line(str, 128);

    strcpy(tmp, sentence);

    char *ptr = strchr(sentence, str);

    while (ptr != NULL)
    {
        printf("%s\n", ptr); // 검색된 문자열 출력
        ptr = strchr(ptr + 1, 'a');
    }

    /*if (strcmp(tmp, str) == 0)
    {
        printf("始まっている");
    }
    else
    {
        printf("始まっていない");
    }*/

    return 0;
}

void get_line(char buff[], int size)
{
    int i, c;

    for (i = 0; i < size - 1; i++)
    {
        c = getchar();
        if (c == EOF || c == '\n')
            break;
        buff[i] = c;
    }
    buff[i] = '\0';
}
