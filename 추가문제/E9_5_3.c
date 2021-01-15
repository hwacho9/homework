#include <stdio.h>
#include <string.h>

void get_line(char buff[], int size);
void str_lcopy(char dst[], char src[]);

int main()
{
    char sentence[] = "Kwansei Gakuin University has eleven schools: \
theology, humanities, sociology, law & politics, economics, \
business administration, human welfare studies, international studies, \
education, science & technology, and policy studies. \
One of the characteristics of each school is the freshmen seminar \
organized with a small group of students. This embodies the policy of \
the small group education at university. Another practice is the \
integrated courses, which involve students taking courses outside \
their own majors. The Freshmen seminar aims for face-to-face \
communication between students and professors and the integrated \
courses aim to give students a multidimensional set of viewpoints. ";
    char str[128];
    char dst[128];

    get_line(str, 128);
    str_lcopy(dst, str);

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
void str_lcopy(char dst[], char src[])
{
    int i;

    for (i = 0; src[i] != '\0'; ++i)
    {
        dst[i] = src[i];
    }
    dst[i] = '\0';

    for (i = 0; dst[i] != 0; i++)
    {
        if (dst[i] >= 'A' && dst[i] <= 'Z')
        {
            dst[i] = dst[i] + 32;
        }
    }

    puts(dst);
}