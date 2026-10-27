#include <stdio.h>
#include <math.h>

int main(void)
{
    int x, y;
    double power;

    printf("Enter x and y: ");
    if (scanf("%d %d", &x, &y) != 2)
    {
        printf("Invalid input.\n");
        return 1;
    }

    power = pow(x, y);
    printf("%d^%d = %.0f\n", x, y, power);

    if (x >= 0)
        printf("Square root of x: %.2f\n", sqrt(x));
    else
        printf("Square root is not a real number for negative x.\n");

    return 0;
}
