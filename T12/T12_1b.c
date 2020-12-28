
#include <stdio.h>

int main(void)
{
    int num, i, total, average, min, max;

    // open file
    FILE *ifile = fopen("indata.txt", "r");
    // if opening file fails, print error message and exit 1
    if (ifile == NULL)
    {
        perror("Error: Failed to open file.");
        return 1;
    }

    // initialize i and total to zero.
    i = total = 0;
    // read values from file until EOF is returned by fscanf,
    //   or until an error (hence the comparison "== 1")
    while (fscanf(ifile, "%d", &num) == 1)
    {
        // In first round of loop, initialize min and max
        //   to the number being read (num)
        // After min/max have been initialized, they can then
        //   be compared and modified in the second if statement
        //   in the remaining loop rounds
        if (i == 0)
        {
            min = num;
            max = num;
            total += num;
            ++i;
            continue;
        }
        if (num < min)
        {
            min = num;
        }
        else if (num > max)
        {
            max = num;
        }
        total += num;
        ++i;
    }

    // initialize average
    average = total / i;

    // summary
    printf("The sum of all integers in file is %d.\n", total);
    printf("The number of integers in file is %d.\n", i);
    printf("The average of all integers in file is %d.\n", average);
    printf("The minimum is %d\n", min);
    printf("The maximum is %d\n", max);

    fclose(ifile);
    return 0;
}
