#include <stdio.h>

int main(void)
{
    double a = 2.3;
    double b = 5.8;
    double c = 1.1;
    double d = 3.5;

    double result = (a + b - c) * d - a / d;

    printf("(%.1f + %.1f - %.1f) * %.1f - %.1f / %.1f = %.6f\n",
           a, b, c, d, a, d, result);

    return 0;
}
