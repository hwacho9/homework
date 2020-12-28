#include <stdio.h>
#include <string.h>

void get_line(char buff[], int size);

int main()
{
    char s_in[128];
    char s_out[128];
    get_line(s_in, 128);

    strcpy(s_out,s_in);

    printf("%d\n", strlen(s_out));

    return 0;


}

void get_line(char buff[], int size)
{
    int i, c;

    for (i=0; i<size-1; i++)
    {
        c = getchar();
        if (c == EOF || c == '\n') break;
        buff[i] = c;
    }
    buff[i] = '\0';
}