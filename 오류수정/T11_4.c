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

int main(void)
{
    prog1_t your_class;
    prog1_t my_class = {2, "Multimedia 1", "Isaka", 4, 2};
    /*
    my_class.no = 2;
    strcpy(my_class.room, "Multimedia 1");
    strcpy(my_class.prof, "Isaka");
    my_class.build = 4;
    my_class.floor = 2;
*/
    print_prog1(my_class);
    /*
    tmp = my_class;
    my_class = your_class;
    your_class = tmp;
    
    your_class = my_class;
*/
    your_class = my_class;

    print_prog1(your_class);

    return 0;
}

void print_prog1(prog1_t this_class)
{
    printf("%d %s %s %d %d\n", this_class.no, this_class.room, this_class.prof, this_class.build, this_class.floor);
}
