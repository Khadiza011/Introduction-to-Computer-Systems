#include <stdio.h>

int main(void)
{
    int a, b, c;
    double x;
    int y, z;

    printf("Enter a, b, and c: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (c == 0)
    {
        printf("Error: c must not be zero.\n");
        return 1;
    }

    x = (a + b + c) / 3.0;
    y = (a * b) / c;
    z = (a + b) * c;

    printf("X = %.2f\n", x);
    printf("Y = %d\n", y);
    printf("Z = %d\n", z);

    return 0;
}
