#include <stdio.h>

int main(void)
{
    int num;
    int positive = 0, negative = 0;

    printf("Enter 5 numbers:\n");

    for (int i = 1; i <= 5; i++)
    {
        if (scanf("%d", &num) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }

        if (num > 0)
        {
            positive++;
        }
        else if (num < 0)
        {
            negative++;
        }
    }

    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);

    return 0;
}
