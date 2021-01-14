#include <stdio.h>
#include <string.h>
#define N 128

int main()
{
    char s_in1[N];
    char s_in2[N];
    char s_out[N];

    scanf("%s %s", s_in1, s_in2);

    strcpy(s_out, s_in1);

    strcat(s_out, s_in2);

    printf("%s\n", s_out);
    printf("%s\n", s_in1);
    printf("%s\n", s_in2);

    return 0;
}
