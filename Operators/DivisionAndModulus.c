#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Enter dividend and divisor: ");
    scanf("%d %d", &a, &b);

    if (b == 0)
    {
        printf("Divisor cannot be zero.\n");
        return 0;
    }

    printf("Quotient = %d\n", a / b);
    printf("Remainder = %d\n", a % b);

    return 0;
}
