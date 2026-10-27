#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Enter the three sides: ");

    if (scanf("%d %d %d", &a, &b, &c) != 3)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Invalid triangle.\n");
    }
    else if (a == b && b == c)
    {
        printf("Equilateral Triangle\n");
    }
    else if (a == b || a == c || b == c)
    {
        printf("Isosceles Triangle\n");
    }
    else
    {
        printf("Scalene Triangle\n");
    }

    return 0;
}
