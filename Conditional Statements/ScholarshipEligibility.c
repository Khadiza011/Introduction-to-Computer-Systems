#include <stdio.h>

int main(void)
{
    double cgpa;
    int credits, attendance;

    printf("Enter CGPA, credits, and attendance: ");
    if (scanf("%lf %d %d", &cgpa, &credits, &attendance) != 3)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (cgpa > 3.90 && cgpa <= 4.00 && credits > 9)
    {
        printf("100%% scholarship\n");
    }
    else if (cgpa > 3.80 && cgpa < 3.90 &&
             credits > 9 && attendance > 10)
    {
        printf("50%% scholarship\n");
    }
    else
    {
        printf("Better Luck Next Time!\n");
    }

    return 0;
}
