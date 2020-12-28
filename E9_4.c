#include <stdio.h>
#include <string.h>

void str_copy_reverse(char dst[], char src[]);
void get_line(char buff[], int size);

int main()
{
    char dst[128];
    char src[128];

    get_line(dst,128);
    str_copy_reverse(src, dst);
    printf("%s\n", src);

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

void str_copy_reverse(char dst[], char src[])
{
    int i,j;
	
	for (i= 0; src[i] != '\0'; i++ );
	
	j = i;
	
    for( i = 0; i <= j; i++)
    {
        if (i == j)
        {
            dst[i] = '\0';
        	continue;
        }
    	
    	dst[i] = src[j - 1 - i];
    }
}


