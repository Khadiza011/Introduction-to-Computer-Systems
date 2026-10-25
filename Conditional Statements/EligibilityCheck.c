#include <stdio.h>

int main(void)
{
    int age;
    float marks;

    printf("Enter age and marks: ");
    scanf("%d %f", &age, &marks);

    if (age < 0 || marks < 0 || marks > 100)
    {
        printf("Invalid input\n");
    }
    else if (age >= 18 && marks >= 60)
    {
        printf("Eligible\n");
    }
    else
    {
        printf("Not eligible\n");
    }

    return 0;
}
