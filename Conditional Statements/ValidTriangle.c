#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Enter three side lengths: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 &&
        a + b > c && a + c > b && b + c > a)
    {
        printf("Valid triangle\n");
    }
    else
    {
        printf("Invalid triangle\n");
    }

    return 0;
}
