#include <stdio.h>
#include <math.h>

int main(void)
{
    double base, exponent, result;

    printf("Enter base and exponent: ");
    if (scanf("%lf %lf", &base, &exponent) != 2)
    {
        printf("Invalid input.\n");
        return 1;
    }

    result = pow(base, exponent);

    printf("%.2f ^ %.2f = %.2f\n", base, exponent, result);

    return 0;
}
