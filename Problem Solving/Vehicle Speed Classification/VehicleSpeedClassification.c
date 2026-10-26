#include <stdio.h>

int main(void)
{
    int speed;

    printf("Enter the speed in km/h: ");
    if (scanf("%d", &speed) != 1 || speed < 0)
    {
        printf("Invalid speed.\n");
        return 1;
    }

    if (speed == 0)
        printf("STOPPED\n");
    else if (speed <= 40)
        printf("SLOW\n");
    else if (speed <= 80)
        printf("NORMAL\n");
    else if (speed <= 120)
        printf("FAST\n");
    else
        printf("VERY FAST\n");

    return 0;
}
