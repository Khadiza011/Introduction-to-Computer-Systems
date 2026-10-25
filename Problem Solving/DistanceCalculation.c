#include <stdio.h>

int main(void)
{
    float speed, time, distance;

    printf("Enter speed and time: ");
    scanf("%f %f", &speed, &time);

    if (speed < 0 || time < 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    distance = speed * time;

    printf("Distance = %.2f\n", distance);

    return 0;
}
