#include <stdio.h>
#define N_STUDENTS 5

struct student_t
{
    int no;
    double height;
    double weight;
    double bmi;
};

void calculate_bmi(struct student_t data[]);
void print_student(struct student_t student);

int main(void)
{
    struct student_t person[N_STUDENTS] =
        {
            {1001, 160.5, 53.1, 0.0},
            {1002, 173.8, 79.2, 0.0},
            {1003, 169.7, 65.3, 0.0},
            {1004, 175.3, 72.7, 0.0},
            {1005, 187.2, 98.9, 0.0}};

    int i;
    double a, b;
    calculate_bmi(person);

    scanf("%lf", &a);

    for (i = 0; i < N_STUDENTS; i++)
    {
        if (a < person[i].bmi)
        {
            print_student(person[i]);
        }
    }

    return 0;
}

void calculate_bmi(struct student_t data[])
{
    for (int i = 0; i < N_STUDENTS; i++)
    {
        data[i].bmi = data[i].weight / ((data[i].height * 0.01) * (data[i].height * 0.01));
    }
}

void print_student(struct student_t student)
{
    printf("%4d %5.1f %4.1f %4.1f\n", student.no, student.height, student.weight, student.bmi);
}