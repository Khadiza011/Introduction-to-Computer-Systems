#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c, discriminant, x1, x2;

    printf("Enter coefficients a, b, and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (a == 0)
    {
        printf("The coefficient a must not be zero.\n");
        return 1;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant < 0)
    {
        printf("The equation has no real roots.\n");
        return 0;
    }

    x1 = (-b + sqrt(discriminant)) / (2 * a);
    x2 = (-b - sqrt(discriminant)) / (2 * a);

    printf("x1 = %.2f\n", x1);
    printf("x2 = %.2f\n", x2);

    return 0;
}
