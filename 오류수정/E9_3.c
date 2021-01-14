#include <stdio.h>
#include <string.h>

void get_line(char buff[], int size);

int main()
{
    int a;

    char s_in[128];
    char s_out[128] = {
        '\n',
    };
    get_line(s_in, 128);

    strcpy(s_out, s_in);

    for (int i = 0; i < 4; i++)
    {
        strcat(s_out, " ");
        strcat(s_out, s_in);
    }

    printf("%s\n", s_out);
    a = strlen(s_out);
    printf("%d\n", a);

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
