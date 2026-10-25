#include <stdio.h>

int main(void)
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0)
    {
        printf("Invalid age\n");
    }
    else if (age >= 18)
    {
        printf("Eligible by age\n");
    }
    else
    {
        printf("Not eligible by age\n");
    }

    return 0;
}
