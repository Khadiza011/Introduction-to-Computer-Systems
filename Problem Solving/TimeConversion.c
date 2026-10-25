#include <stdio.h>

int main(void)
{
    int totalSeconds, hours, minutes, seconds;

    printf("Enter total seconds: ");
    scanf("%d", &totalSeconds);

    if (totalSeconds < 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("%d hours, %d minutes, %d seconds\n",
           hours, minutes, seconds);

    return 0;
}
