#include <stdio.h>
#include <string.h>

void get_line(char buff[], int size);

int main()
{
    char sentence[128] = "This is a pen. That is an apple.";
    char str[128];

    get_line(str, 128);

    char *ptr = strstr(sentence, str);

    if (ptr != NULL)
    {
        printf("含まれている");
    }
    else
    {
        printf("含まれていない");
    }

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
