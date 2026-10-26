#include <stdio.h>
#include <math.h>

int main(void)
{
    double x;

    printf("Enter a number: ");
    if (scanf("%lf", &x) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Floor: %.0f\n", floor(x));
    printf("Ceiling: %.0f\n", ceil(x));
    printf("Absolute value: %.2f\n", fabs(x));

    return 0;
}
