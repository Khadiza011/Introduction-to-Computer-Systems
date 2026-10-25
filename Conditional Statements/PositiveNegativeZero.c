#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("Positive number\n");
    }
    else if (number < 0)
    {
        printf("Negative number\n");
    }
    else
    {
        printf("Zero\n");
    }

    return 0;
}
