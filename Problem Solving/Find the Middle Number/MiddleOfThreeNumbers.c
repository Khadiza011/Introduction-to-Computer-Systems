#include <stdio.h>

int main(void)
{
    int a, b, c, middle;

    printf("Enter three distinct numbers: ");

    if (scanf("%d %d %d", &a, &b, &c) != 3)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (a == b || a == c || b == c)
    {
        printf("Please enter three distinct numbers.\n");
        return 1;
    }

    if ((a > b && a < c) || (a < b && a > c))
    {
        middle = a;
    }
    else if ((b > a && b < c) || (b < a && b > c))
    {
        middle = b;
    }
    else
    {
        middle = c;
    }

    printf("The middle number is: %d\n", middle);

    return 0;
}
