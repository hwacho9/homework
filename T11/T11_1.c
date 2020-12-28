#include <stdio.h>
#include <string.h>

struct date
{
    int year;
    int month;
    int day;
    char day_of_week[20];
};

void print_day(struct date today);

int main(void)
{
    struct date today;

    today.year = 2020;
    today.month = 12;
    today.day = 9;
    strcpy(today.day_of_week, "火曜日");

    print_day(today);

    return 0;
}

void print_day(struct date today)
{
    printf("今日は、%d年%d月%d日 (%s) です。", today.year, today.month, today.day, today.day_of_week);
}