#include <stdio.h>

int main(void)
{
    float marks[5], total = 0, average;
    int i, passed = 1;

    for (i = 0; i < 5; i++)
    {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100)
        {
            printf("Invalid marks\n");
            return 0;
        }

        total += marks[i];

        if (marks[i] < 40)
        {
            passed = 0;
        }
    }

    average = total / 5.0f;

    printf("Total = %.2f\n", total);
    printf("Average = %.2f\n", average);

    if (passed)
    {
        printf("Result: Pass\n");
    }
    else
    {
        printf("Result: Fail\n");
    }

    return 0;
}
