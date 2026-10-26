#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    switch (num % 2)
    {
        case 0:
            printf("Even\n");
            break;

        case 1:
        case -1:
            printf("Odd\n");
            break;
    }

    return 0;
}
