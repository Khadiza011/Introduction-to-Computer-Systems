#include <stdio.h>

int main(void)
{
    int a, b;
    float quotient;
    char ch;
    int code;

    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (b == 0)
    {
        printf("Division by zero is not allowed.\n");
        return 1;
    }

    quotient = (float)a / b;
    printf("Quotient = %.2f\n", quotient);

    printf("Enter a character: ");
    if (scanf(" %c", &ch) != 1)
    {
        printf("Invalid character input.\n");
        return 1;
    }

    code = (unsigned char)ch;
    printf("Character code = %d\n", code);

    return 0;
}
