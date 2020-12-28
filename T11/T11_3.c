#include <stdio.h>
#include <string.h>

typedef struct date
{
    int year;
    int month;
    int day;
    char day_of_week[20];
} date_t;

void print_day2(struct date today);

int main()
{
    date_t today;

    today.year = 2020;
    today.month = 12;
    today.day = 9;
    strcpy(today.day_of_week, "火曜日");

    print_day2(today);

    return 0;
}

void print_day2(struct date today)
{
    printf("今日は、%d年%d月%d日 (%s) です。", today.year, today.month, today.day, today.day_of_week);
}
