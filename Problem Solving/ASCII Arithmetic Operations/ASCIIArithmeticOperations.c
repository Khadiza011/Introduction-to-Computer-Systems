#include <stdio.h>

int main(void)
{
    char first, second;
    int code1, code2;

    printf("Enter the first character: ");
    if (scanf(" %c", &first) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter the second character: ");
    if (scanf(" %c", &second) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    code1 = (unsigned char)first;
    code2 = (unsigned char)second;

    printf("ASCII value of '%c' is %d\n", first, code1);
    printf("ASCII value of '%c' is %d\n", second, code2);
    printf("Sum of ASCII values: %d\n", code1 + code2);
    printf("Difference of ASCII values: %d\n", code1 - code2);

    return 0;
}
