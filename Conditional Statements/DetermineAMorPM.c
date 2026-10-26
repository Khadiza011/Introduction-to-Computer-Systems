#include <stdio.h>

int main(void)
{
    int hour;

    printf("Enter the hour (0-23): ");

    if (scanf("%d", &hour) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (hour < 0 || hour > 23)
    {
        printf("Invalid hour. Enter a value from 0 to 23.\n");
        return 1;
    }

    if (hour < 12)
    {
        printf("AM\n");
    }
    else
    {
        printf("PM\n");
    }

    return 0;
}
