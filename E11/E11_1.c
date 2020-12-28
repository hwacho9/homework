#include <stdio.h>
#include <string.h>

typedef struct prog1
{
    int no;
    char room[16];
    char prof[16];
    int build;
    int floor;
} prog1_t;

void print_prog1(prog1_t this_class);

int main()
{
    int a;
    prog1_t classes[6];

    classes[0].no = 1;
    strcpy(classes[0].room, "Multimedia 2");
    strcpy(classes[0].prof, "Takahashi");
    classes[0].build = 4;
    classes[0].floor = 1;

    classes[1].no = 2;
    strcpy(classes[1].room, "Multimedia 1");
    strcpy(classes[1].prof, "Isaka");
    classes[1].build = 4;
    classes[1].floor = 2;

    classes[2].no = 3;
    strcpy(classes[2].room, "Multimedia 2");
    strcpy(classes[2].prof, "Miwa");
    classes[2].build = 4;
    classes[2].floor = 2;

    classes[3].no = 4;
    strcpy(classes[3].room, "Graphics");
    strcpy(classes[3].prof, "Kakusho");
    classes[3].build = 5;
    classes[3].floor = 2;

    classes[4].no = 5;
    strcpy(classes[4].room, "Multimedia 1");
    strcpy(classes[4].prof, "Saga");
    classes[4].build = 5;
    classes[4].floor = 1;

    classes[5].no = 6;
    strcpy(classes[5].room, "Graphics");
    strcpy(classes[5].prof, "Sakumoto");
    classes[5].build = 4;
    classes[5].floor = 2;

    scanf("%d", &a);
    int i;
    for (i = 0; i < 6; i++)
    {
        if (a == classes[i].build)
        {
            print_prog1(classes[i]);
        }
    }
    return 0;
}

void print_prog1(prog1_t this_class)
{
    printf("%d %s %s %d %d\n", this_class.no, this_class.room, this_class.prof, this_class.build, this_class.floor);
}