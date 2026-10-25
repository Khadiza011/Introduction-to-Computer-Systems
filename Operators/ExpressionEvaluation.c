#include <stdio.h>

int main(void)
{
    int a, b, c, result;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    result = a + b * c;

    printf("Result = %d\n", result);

    return 0;
}
