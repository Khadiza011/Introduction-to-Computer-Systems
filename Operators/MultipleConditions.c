#include <stdio.h>

int main(void)
{
    int age;
    float marks;

    printf("Enter age and marks: ");
    scanf("%d %f", &age, &marks);

    if (age >= 18 && marks >= 60)
    {
        printf("Both conditions are satisfied.\n");
    }
    else
    {
        printf("One or more conditions are not satisfied.\n");
    }

    return 0;
}
