#include <stdio.h>

int main(void)
{
    const double PI = 3.1416;
    double radius, height, volume;

    printf("Enter the radius and height of the cylinder: ");
    if (scanf("%lf %lf", &radius, &height) != 2)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (radius < 0 || height < 0)
    {
        printf("Radius and height cannot be negative.\n");
        return 1;
    }

    volume = PI * radius * radius * height;

    printf("Volume of the cylinder: %.2f\n", volume);

    return 0;
}
