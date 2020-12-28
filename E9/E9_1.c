#include <stdio.h>
#include <string.h>

int main()
{
    char str_input[128];
    scanf("%s",str_input);
    printf("%d\n", strlen(str_input));

    char str_new[128];
    scanf("%s",str_new);
    
    int ret = strcmp(str_input, str_new);

    if ( ret == 0)
        printf("文字列 str_input と str_new は一致しています");
    else
    {
        printf("文字列 str_input と str_new は一致していません");
    }
    
    strcpy( str_input, str_new );
    printf("%s\n",str_input);

    int len = strcmp(str_input, str_new);

    if ( len == 0)
        printf("文字列 str_input と str_new は一致しています");
    else
    {
        printf("文字列 str_input と str_new は一致していません");
    }

}