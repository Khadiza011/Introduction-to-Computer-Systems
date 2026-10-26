#include <stdio.h>

int main(void)
{
    int n, digit;
    long long reversed = 0;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    if (n < 0)
    {
        printf("Please enter a non-negative integer\n");
        return 0;
    }

    while (n > 0)
    {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    printf("Reversed number = %lld\n", reversed);

    return 0;
}
