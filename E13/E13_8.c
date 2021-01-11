#include <stdio.h>
#include <string.h>

int main(void)
{
    char s_in[128], s_out[128];
    s_out[0] = '\0';
    for (;;)
    {
        printf("Keyin a word>> ");
        scanf("%127s", s_in);
        if (strcmp(s_in, ".") == 0)
        {
            strcat(s_out, ".");
            break;
        }
        if (s_out[0] != '\0')
            strcat(s_out, " ");
    }

    printf("%s\n", s_out);
    return 0;
}